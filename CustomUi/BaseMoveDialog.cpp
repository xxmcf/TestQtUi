#include "BaseMoveDialog.h"
#include <QMouseEvent>

BaseMoveDialog::BaseMoveDialog(QWidget *pParent, bool bCanMoveSelf, bool setTransback) :
	QWidget(pParent),
	m_MoveSelfEnable(bCanMoveSelf),
	m_pRectOfCanMove(nullptr),
	m_pRectOfCanDrag(nullptr)
{
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
	if (setTransback)
	{
		this->setAttribute(Qt::WA_TranslucentBackground);
	}
}

BaseMoveDialog::~BaseMoveDialog()
{
	if (m_pRectOfCanMove != nullptr)
	{
		delete m_pRectOfCanMove;
		m_pRectOfCanMove = nullptr;
	}
	if (m_pRectOfCanDrag != nullptr)
	{
		delete m_pRectOfCanDrag;
		m_pRectOfCanDrag = nullptr;
	}
}

void BaseMoveDialog::mouseMoveEvent(QMouseEvent* event)
{
	if (m_MoveSelfEnable)
	{
		if (!m_bPressed)
		{
			return;
		}

		if (event->buttons() & Qt::LeftButton)
		{
			QPoint pt = event->globalPos() - m_dragPosition;
			if (m_pRectOfCanMove != nullptr)
			{
				pt.setX(qMax(qMin(pt.x(), m_pRectOfCanMove->x() + m_pRectOfCanMove->width() - this->width()), m_pRectOfCanMove->x()));
				pt.setY(qMax(qMin(pt.y(), m_pRectOfCanMove->y() + m_pRectOfCanMove->height() - this->height()), m_pRectOfCanMove->y()));
			}

			if (!m_bMousePressDragValid)
			{
				return;
			}

			move(pt);
			emit windowMoved(pt);
		}
	}
}

void BaseMoveDialog::mousePressEvent(QMouseEvent* event)
{
	m_bPressed = true;
	if (m_MoveSelfEnable)
	{
		if (event->button() == Qt::LeftButton)
		{
			m_dragPosition = event->globalPos() - frameGeometry().topLeft();

			if (m_pRectOfCanDrag != nullptr)
			{
				QPoint curWidgetPos = event->pos();
				if (!m_pRectOfCanDrag->contains(curWidgetPos))
				{
					m_bMousePressDragValid = false;
				}
				else
				{
					m_bMousePressDragValid = true;
				}
			}
		}
	}
}

void BaseMoveDialog::mouseReleaseEvent(QMouseEvent* event)
{
	if (m_MoveSelfEnable)
	{
		m_bPressed = false;
		m_bMousePressDragValid = true;
	}
}

void BaseMoveDialog::setCanMove(bool bCanMove)
{
	m_MoveSelfEnable = bCanMove;
}

void BaseMoveDialog::setRectOfCanMove(QRect* pRect)
{
    if (pRect != nullptr)
    {
        if (m_pRectOfCanMove == nullptr)
        {
            m_pRectOfCanMove = new QRect;
        }
        *m_pRectOfCanMove = *pRect;
    }
    else
    {
        if (m_pRectOfCanMove != nullptr)
        {
            delete m_pRectOfCanMove;
            m_pRectOfCanMove = nullptr;
        }
    }	
}

void BaseMoveDialog::setRectOfCanDrag(const QRect& oRect)
{
	if (m_pRectOfCanDrag == nullptr)
	{
		m_pRectOfCanDrag = new QRect;
	}
	*m_pRectOfCanDrag = oRect;
}