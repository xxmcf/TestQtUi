#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "CustomUi/MyPushButton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString curPath = QCoreApplication::applicationDirPath();
    MyPushButton *myBtn = new MyPushButton(curPath + "/images/login_btn_up.png", this);
    myBtn->setGeometry(100, 100, myBtn->width(), myBtn->height());

    myBtn->SetHoverPixmap(curPath + "/images/login_btn_hover.png");
    myBtn->SetSelectedPixmap(curPath + "/images/login_btn_down.png");


    myBtn->setVisible(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
