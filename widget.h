#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QList>
#include <QFont>
#include <QIcon>
#include <QDebug>
#include "myaction.h"
#include "myqmenubutton.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();



private slots:
    void myopen();

    void on_pbMainMenuRight_clicked();
    void on_pbMainMenuLeft_clicked();

    //achieve in file "topButton.cpp"
    void topMenuButtonMake1();
    void topMenuButtonMake2();
    void topMenuButtonMake3();
    void topMenuButtonMake4();
    void topMenuButtonMake5();
    void topMenuButtonMake6();
    void topMenuButtonMake7();
    void topMenuButtonMake8();
    void topMenuButtonMake9();

private:
    Ui::Widget *ui;

    QList<myAction*> progActionList;
    QList<myAction*> varActionList;
    QList<myAction*> inoutActionList;
    QList<myAction*> robotActionList;
    QList<myAction*> sysImfActionList;
    QList<myAction*> exStorActionList;
    QList<myAction*> parmActionList;
    QList<myAction*> optionActionList;
    QList<myAction*> disOptActionList;

    void mainMenuMake();
    void progContentMenuMake();
    void varMenuMake();
    void InOutputMenuMake();
    void robotMenuMake();
    void sysMenuMake();
    void exStorMenuMake();
    void paramMenuMake();
    void optionMenuMake();
    void dispOptionMenuMake();



};

#endif // WIDGET_H
