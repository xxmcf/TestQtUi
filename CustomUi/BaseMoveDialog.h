#pragma once

#include <QWidget>

class BaseMoveDialog : public QWidget
{
	Q_OBJECT
public:
	BaseMoveDialog(QWidget *pParent, bool bCanMoveSelf = true,bool setTransback = true);
	virtual ~BaseMoveDialog();

public:
	void mousePressEvent(QMouseEvent* event) override;
	void mouseMoveEvent(QMouseEvent* event) override;
	void mouseReleaseEvent(QMouseEvent* event) override;

public:
	void setCanMove(bool bCanMove);
	void setRectOfCanMove(QRect* pRect);
	void setRectOfCanDrag(const QRect& oRect);
	inline bool isMoving() { return m_bPressed; };

signals:
	void windowMoved(QPoint oPos);

protected:
	bool m_MoveSelfEnable;
	QRect *m_pRectOfCanMove; // ���ƶ�����
	QRect *m_pRectOfCanDrag; // ���϶�����
	bool m_bMousePressDragValid = true; // ��갴�µĵ��ڿ��϶�������
	bool m_bPressed = false;
private:
	QPoint m_dragPosition;
};
