#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "CustomUi/MyPushButton.h"
#include <QStandardPaths>
#include <QDebug>
#include <QUuid>

#include "CustomUi/MyPopupDialog.h"
#include "CustomUi/MyMessagBox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString curPath = QCoreApplication::applicationDirPath();
    MyPushButton *myBtn = new MyPushButton(":/res/login_btn_up.png", this);
    myBtn->setGeometry(100, 100, myBtn->width(), myBtn->height());
    myBtn->SetHoverPixmap(":/res/login_btn_hover.png");
    myBtn->SetSelectedPixmap(":/res/login_btn_down.png");

    connect(myBtn, &MyPushButton::clicked, this, [&]{
        MyPopupDialog* dlg = new MyPopupDialog(nullptr, tr("title1"), QSize(400, 300), true, true, true);
        dlg->exec();
        qDebug()<<"--------------------------------";
        MyMessagBox *msgBox = new MyMessagBox(nullptr, tr("msgTiltle"), "This is a test message box!");
        msgBox->exec();
    });

    QString strTrans = tr("strTrans");
    QString strTrans2 = tr("strTrans2");

    qDebug() << curPath;
    qDebug() << QUuid::createUuid().toString();
    qDebug() << QUuid::createUuid().toString().remove("{").remove("}").remove("-").toUpper();
    qDebug() << strTrans;
    qDebug() << strTrans2;


}

MainWindow::~MainWindow()
{
    delete ui;
}
