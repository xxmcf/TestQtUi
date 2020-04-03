#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>
#include <QPixmap>

//按钮状态
enum XBUTTONSTATE
{
    NORMAL = 0X01,    //正常状态
    HOVER = 0X02,     //鼠标滑过状态
    SELECTED = 0X04,  //选中状态
    DISABLE = 0X08    //禁止点击状态
};

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    MyPushButton(QString strImagePath, QWidget* parent = nullptr);
    ~MyPushButton();

    //设置正常图标
    void SetNormalPixmap(QString strImagePath);
    //设置鼠标滑动图片
    void SetHoverPixmap(QString strImagePath);
    //设置选中状态图片
    void SetSelectedPixmap(QString strImagePath);
    //设置禁止点击图标
    void SetDisablePixmap(QString strImagePath);
    //设置按钮当前状态
    void SetBtnState(XBUTTONSTATE state);
    //设置图片大小
    void SetSize(QSize sz);

protected:
    virtual void paintEvent(QPaintEvent* event);
    virtual void enterEvent(QEvent* event);
    virtual void leaveEvent(QEvent* event);
    virtual void mousePressEvent(QMouseEvent* event);
    virtual void mouseReleaseEvent(QMouseEvent* event);

private:
    QPixmap m_NormalPix;//正常图标
    QPixmap m_HoverPix;//鼠标滑动图标
    QPixmap m_SelectedPix;//选中状态图标
    QPixmap m_DisablePix;//禁止点击图标
    int m_iMask;//包含1则启动正常图标，包含2启用滑动图标，包含4启用选中状态图标，包含8启用禁止点击图标，默认标为1.
    XBUTTONSTATE m_curState;//当前状态
    XBUTTONSTATE m_lastState;//上一次状态
};

#endif // MYPUSHBUTTON_H
