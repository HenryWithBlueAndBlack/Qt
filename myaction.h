#ifndef MYACTION_H
#define MYACTION_H

#include <QWidgetAction>
#include <QLabel>
#include <QPixmap>

class myAction : public QWidgetAction
{
    Q_OBJECT
public:
    explicit myAction(QWidget *parent = 0,QString titleText = "菜单名");
    ~myAction();

    QLabel *getActionIcon();
    QLabel *getActionText();

protected:
    QWidget *createWidget(QWidget *parent);
private:
    QWidget *myWidget;
    QLabel *menuNameLable;
    QLabel *menuIconLable;
};

#endif // MYACTION_H
