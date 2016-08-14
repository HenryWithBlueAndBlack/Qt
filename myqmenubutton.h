#ifndef MYQMENUBUTTON_H
#define MYQMENUBUTTON_H

#include <QPushButton>
#include <QMenu>
//class QMenu;

class myQmenuButton : public QPushButton
{
    Q_OBJECT
public:
    explicit myQmenuButton(QWidget *parent = 0);
    myQmenuButton(QWidget *parent,bool hasConnect);
    QMenu *getMenu();

protected slots:
    virtual void popUpMenu();

protected:
    QMenu *menu;

private:
    void optionDefault();

};


class myTopQmenuButton : public myQmenuButton
{
    Q_OBJECT
public:
    explicit myTopQmenuButton(QWidget *parent = 0);
private slots:
    void popUpMenu();

private:


};

#endif // MYQMENUBUTTON_H
