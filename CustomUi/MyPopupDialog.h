/*
 * @brief   自定义对话框
 *          无边框、自给标题栏、含关闭按钮、可移动
 * @author  xiao2macf
 * @version 1.0
 * @date    2020/04/18
 *
 */

#ifndef MYPOPUPDIALOG_H
#define MYPOPUPDIALOG_H

#include <QWidget>
#include "BaseMoveDialog.h"
#include <QVBoxLayout>
#include <QEventLoop>

class MyPopupDialog : public BaseMoveDialog
{
    Q_OBJECT
public:
    explicit MyPopupDialog(QWidget *parent = 0, QString strTitle = "", QSize size = QSize(400, 300), bool canMove = true, bool showColseBtn = true, bool modal = true);

    void exec();

signals:

public slots:

protected:
    QVBoxLayout* _mainLayout;
    QWidget* _mainWidget;
    QEventLoop* _eventLoop;

};

#endif // MYPOPUPDIALOG_H
