/*
 * @brief   自定义对话框
 *          无边框、自给标题栏、含关闭按钮、可移动
 * @author  xiao2macf
 * @version 1.0
 * @date    2020/04/18
 *
 */
#include "MyPopupDialog.h"
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFile>
#include <QApplication>


MyPopupDialog::MyPopupDialog(QWidget *parent/* = 0*/, QString strTitle, QSize size /*= QSize(400, 300)*/, bool canMove /*= true*/, bool showCloseBtn /*= true*/, bool modal)
    :BaseMoveDialog(parent, canMove, false)
{
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setAttribute(Qt::WA_NoSystemBackground,true);
    this->setAttribute(Qt::WA_TransparentForMouseEvents,true);

    _eventLoop = new QEventLoop(this);

    this->setFixedSize(size);
    Qt::WindowModality modalType = modal ? Qt::ApplicationModal : Qt::NonModal;
    setWindowModality(modalType);
    this->setAttribute(Qt::WA_ShowModal, true);

    _mainWidget = new QWidget(this);
    _mainWidget->setObjectName("CommonPopupDialog");
    _mainWidget->move(0, 0);
    _mainWidget->setFixedSize(this->size());

    QPushButton *btn_Close = new QPushButton(_mainWidget);
    btn_Close->setObjectName("PopupDialogCloseButton");
    btn_Close->setFixedSize(22, 23);
    //btn_Close->setStyleSheet("QPushButton{border-image: url(:/res/close_btn.png);}");
    btn_Close->setVisible(showCloseBtn);

    QLabel *lbl_Title = new QLabel(_mainWidget);
    lbl_Title->setObjectName("Font16LightLbl");
    lbl_Title->setText(strTitle);
    lbl_Title->setFixedSize(this->width() - btn_Close->width() -15, 23);
    lbl_Title->setAlignment(Qt::AlignCenter);

    connect(btn_Close, &QPushButton::clicked, this, [&](){
        _eventLoop->exit();
        this->close();
    });

    _mainLayout = new QVBoxLayout(_mainWidget);
    _mainLayout->setMargin(0);
    _mainLayout->setAlignment(Qt::AlignTop);

    QHBoxLayout* titleLayout = new QHBoxLayout(_mainWidget);
    titleLayout->setMargin(5);
    titleLayout->addWidget(lbl_Title);
    titleLayout->addStretch();
    titleLayout->addWidget(btn_Close);

    _mainLayout->addSpacing(5);
    _mainLayout->addLayout(titleLayout);

    QWidget* titleBottomHLine = new QWidget(_mainWidget);
    titleBottomHLine->setObjectName("TitleBottomHLine");
    titleBottomHLine->setFixedSize(this->width(), 1);

    _mainLayout->addWidget(titleBottomHLine);

}

void MyPopupDialog::exec()
{
    this->show();
    _eventLoop->exec();
}
