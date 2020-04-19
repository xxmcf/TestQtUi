#include "MyMessagBox.h"
#include <QLabel>
#include <QHBoxLayout>

MyMessagBox::MyMessagBox(QWidget* parent, QString strTitle, QString strText)
    :MyPopupDialog(parent, strTitle, QSize(300, 200))
{
     QLabel *lbl_Text = new QLabel(this);
    lbl_Text->setObjectName("msgBoxText");
    lbl_Text->setText(strText);
    lbl_Text->setAlignment(Qt::AlignCenter);
    lbl_Text->setFixedSize(this->width()-10, 30);

    QHBoxLayout* textLayout = new QHBoxLayout(_mainWidget);

    textLayout->setMargin(0);
    textLayout->setSpacing(0);
    textLayout->addStretch();
    textLayout->addWidget(lbl_Text);
    textLayout->addStretch();

    _mainLayout->addStretch();
    _mainLayout->addLayout(textLayout);
    _mainLayout->addStretch();

}
