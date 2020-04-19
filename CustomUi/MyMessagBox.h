#ifndef MYMESSAGBOX_H
#define MYMESSAGBOX_H

#include "MyPopupDialog.h"

class MyMessagBox : public MyPopupDialog
{
    Q_OBJECT
public:
    MyMessagBox(QWidget* parent, QString strTitle, QString strText);
};

#endif // MYMESSAGBOX_H
