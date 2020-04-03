/*
 * @brief   自定义按钮控件，实现按钮的3种基本状态
 *          原始链接:https://blog.51cto.com/langtuteng/1948720
 *          在此基础加了鼠标按下和鼠标弹起的处理
 * @author  xiao2macf
 * @version 1.0
 * @date    2020/04/03
 *
 */

#include "MyPushButton.h"
#include <QPainter>
#include <QBitmap>
#include <QDebug>

MyPushButton::MyPushButton(QString strImagePath, QWidget* parent)
    :QPushButton(parent)
{
    m_NormalPix.load(strImagePath);
    resize(m_NormalPix.size());
    //setMask(QBitmap(m_NormalPix));

    m_iMask = XBUTTONSTATE::NORMAL;
    m_curState = XBUTTONSTATE::NORMAL;
    m_lastState = XBUTTONSTATE::NORMAL;
}

MyPushButton::~MyPushButton()
{

}

//设置正常图标
void MyPushButton::SetNormalPixmap(QString strImagePath)
{
    m_NormalPix.load(strImagePath);
    m_iMask |= XBUTTONSTATE::NORMAL;
}

//设置鼠标滑动图片
void MyPushButton::SetHoverPixmap(QString strImagePath)
{
    m_HoverPix.load(strImagePath);
    m_iMask |= XBUTTONSTATE::HOVER;
}

//设置选中状态图片
void MyPushButton::SetSelectedPixmap(QString strImagePath)
{
    m_SelectedPix.load(strImagePath);
    m_iMask |= XBUTTONSTATE::SELECTED;
}

//设置禁止点击图标
void MyPushButton::SetDisablePixmap(QString strImagePath)
{
    m_DisablePix.load(strImagePath);
    m_iMask |= XBUTTONSTATE::DISABLE;
}

//设置按钮当前状态
void MyPushButton::SetBtnState(XBUTTONSTATE state)
{
    m_lastState = m_curState;
    m_curState = state;
}

//设置图片大小
void MyPushButton::SetSize(QSize sz)
{
    m_NormalPix = m_NormalPix.scaled(sz);
    int iValue = m_iMask&XBUTTONSTATE::HOVER;

    if (iValue != 0)
    {
        m_HoverPix = m_HoverPix.scaled(sz);
    }

    iValue = m_iMask&XBUTTONSTATE::SELECTED;

    if (iValue != 0)
    {
        m_SelectedPix = m_SelectedPix.scaled(sz);
    }

    iValue = m_iMask&XBUTTONSTATE::DISABLE;

    if (iValue != 0)
    {
        m_DisablePix = m_DisablePix.scaled(sz);
    }
}


void MyPushButton::paintEvent(QPaintEvent *event)
{
    QPixmap drawPix;
    int iValue = 0;

    switch (m_curState) {
    case XBUTTONSTATE::NORMAL:
        drawPix = m_NormalPix;
        break;
    case XBUTTONSTATE::HOVER:
        iValue = m_iMask & XBUTTONSTATE::HOVER;
        drawPix = 0==iValue ? m_NormalPix : m_HoverPix;
        break;
    case XBUTTONSTATE::SELECTED:
        iValue = m_iMask & XBUTTONSTATE::SELECTED;
        drawPix = 0==iValue ? m_NormalPix : m_SelectedPix;
        break;
    case XBUTTONSTATE::DISABLE:
        iValue = m_iMask & XBUTTONSTATE::DISABLE;
        drawPix = 0==iValue ? m_NormalPix : m_DisablePix;
        break;
    default:
        break;
    }

    QPainter painter(this);
    painter.drawPixmap(0, 0, drawPix);
}

void MyPushButton::enterEvent(QEvent *event)
{
    SetBtnState(XBUTTONSTATE::HOVER);
    QPushButton::enterEvent(event);
    qDebug() << __FUNCTION__;

    update();
}

void MyPushButton::leaveEvent(QEvent *event)
{
    m_curState = m_lastState;
    QPushButton::leaveEvent(event);

    qDebug() << __FUNCTION__;

    update();
}

void MyPushButton::mousePressEvent(QMouseEvent* event)
{
    SetBtnState(XBUTTONSTATE::SELECTED);
    QPushButton::mousePressEvent(event);

    qDebug() << __FUNCTION__;

    update();
}

void MyPushButton::mouseReleaseEvent(QMouseEvent* event)
{
    SetBtnState(XBUTTONSTATE::HOVER);
    QPushButton::mouseReleaseEvent(event);

    qDebug() << __FUNCTION__;

    update();
}
