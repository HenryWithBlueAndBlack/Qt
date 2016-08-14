/*
 *      this file contains all the SLOT function that used to creat
 *  the top menu,change the text of the top menu button,add action
 *  to the menu and so on.
 *
 *      the SLOT function name from numble 1 parallelis myQmenuButton
 *  named from mbtProg to mbtDispOption in proper order
 *--------------------------------------------------------------------
 * author   :   Henry
 * date     :   16.08.12
 * -------------------------------------------------------------------
 *********************************************************************/

#include "widget.h"
#include "ui_widget.h"


void Widget::topMenuButtonMake1()
{
    ui->topButton1->setText("程序");
    QMenu * topBtn1Menu = ui->topButton1->getMenu();
    QAction *ActTM1SelecPro = new QAction("程序处理",topBtn1Menu);
    topBtn1Menu->addAction(ActTM1SelecPro);
}

void Widget::topMenuButtonMake2()
{
    ui->topButton1->setText("数据");
}

void Widget::topMenuButtonMake3()
{

}

void Widget::topMenuButtonMake4()
{
}

void Widget::topMenuButtonMake5()
{

}

void Widget::topMenuButtonMake6()
{

}

void Widget::topMenuButtonMake7()
{

}

void Widget::topMenuButtonMake8()
{

}

void Widget::topMenuButtonMake9()
{

}
