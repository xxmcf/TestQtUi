#include "MainWindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QTranslator>
#include <QResource>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString tansFile = QString("%1/TestQtUi_zh.qm").arg(QApplication::applicationDirPath());
    QTranslator *tanslator = new QTranslator(&a);
    tanslator->load(tansFile);
    a.installTranslator(tanslator);

    QString resFile = QString("%1/TestQtUi.rcc").arg(QApplication::applicationDirPath());
    QResource::registerResource(resFile);

    QString sPath = QString("%1/TestQtUi.qss").arg(QApplication::applicationDirPath());
    QFile qss(sPath);
    qss.open(QFile::ReadOnly);
    QTextStream ts(&qss);    
    QString strStyle = ts.readAll();
    a.setStyleSheet(strStyle);
    qss.close();


    MainWindow w;
    w.show();

    return a.exec();
}
