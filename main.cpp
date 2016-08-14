#include "widget.h"
#include "myqmenubutton.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(mainMenu);
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
