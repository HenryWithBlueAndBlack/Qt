/**********************************************
 * 自定义widgetAction类，主菜单区域menu的Action实现
 *
 * label(Display icon)+lebel(Display item_name)
 *
 *
 *
*/
#include "myaction.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QIcon>
#include <QPixmap>

myAction::myAction(QWidget *parent,QString titleText) :
    QWidgetAction(parent)
{
    myWidget = new QWidget();
    menuNameLable = new QLabel(myWidget);
    menuIconLable = new QLabel(myWidget);
    QHBoxLayout *layout = new QHBoxLayout();

    //Icon label
    menuIconLable->\
            setPixmap(QPixmap(":/new/prefix1/icons/png/zoom-original.png"));
    menuIconLable->setAutoFillBackground(true);
    menuIconLable->setFixedSize(16,16);
    menuIconLable->setScaledContents(true);

    //Name label
    menuNameLable->setFixedSize(110,32);
    menuNameLable->setText(titleText);

    //label location
    layout->addWidget(menuIconLable,0,Qt::AlignLeft);
    layout->addWidget(menuNameLable,0,Qt::AlignLeft);
    layout->setSpacing(5);
    layout->setContentsMargins(3,4,5,3);

    QFont *font=new QFont();
    font->setPixelSize(17);
    menuNameLable->setFont(*font);
    menuNameLable->setEnabled(false);
    myWidget->setLayout(layout);
}

myAction::~myAction()
{

}

QLabel* myAction::getActionIcon()
{
    return menuIconLable;
}

QLabel* myAction::getActionText()
{
    return menuNameLable;
}

QWidget *myAction::createWidget(QWidget *parent)
{
    myWidget->setParent(parent);
    return myWidget;
}
