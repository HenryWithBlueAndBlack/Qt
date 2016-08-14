#include "myqmenubutton.h"
#include <QDebug>

myQmenuButton::myQmenuButton(QWidget *parent)
    :QPushButton(parent)
{
    optionDefault();
    connect(this,SIGNAL(clicked()),this,SLOT(popUpMenu()));
}

myQmenuButton::myQmenuButton(QWidget *parent,bool hasConnect)
    :QPushButton(parent)
{
    optionDefault();
    if(hasConnect)
        connect(this,SIGNAL(clicked()),this,SLOT(popUpMenu()));
}

void myQmenuButton::optionDefault()
{
    menu=new QMenu(this);
    this->setIconSize(QSize(16,16));
    this->setIcon(QIcon(":/new/prefix1/icons/png/window-close.png"));
}


QMenu *myQmenuButton::getMenu()
{
    return menu;
}

void myQmenuButton::popUpMenu()
{
    QPoint pos;
    int x=pos.x();
    int y=pos.y();
    qDebug()<<"未重载的popup";

    pos.setX(2+x+this->geometry().width());
    pos.setY(y-this->geometry().y()-5);
    menu->exec(this->mapToGlobal(pos));
}

myTopQmenuButton::myTopQmenuButton(QWidget *parent)
    :myQmenuButton(parent,false)
{
    this->setIcon(QIcon());
    connect(this,SIGNAL(clicked()),this,SLOT(popUpMenu()));
}

void myTopQmenuButton::popUpMenu()
{
    if (this->getMenu()->isEmpty())
        return;
    QPoint pos;
    int x=pos.x();
    int y=pos.y();
    qDebug()<<"重载的popup";

    pos.setX(x);
    pos.setY(y-this->geometry().y()-5);
    menu->exec(this->mapToGlobal(pos));
}
