#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    setWindowFlags(Qt::FramelessWindowHint);
    ui->setupUi(this);

    mainMenuMake();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mainMenuMake()
{
    progContentMenuMake();
    varMenuMake();
    InOutputMenuMake();
    robotMenuMake();
    sysMenuMake();
    exStorMenuMake();
    paramMenuMake();
    optionMenuMake();
    dispOptionMenuMake();

}

void Widget::progContentMenuMake()
{
    //主菜单 程序内容
    QMenu *menu = ui->mbtProg->getMenu();

    myAction *ActProgContain = new myAction(menu,"程序內容");
    ActProgContain->getActionIcon()->\
            setPixmap(QPixmap(":/new/prefix1/icons/png/window-close.png"));
    myAction *ActProgSelect = new myAction(menu,"选择程序");
    myAction *ActProgNew = new myAction(menu,"新建程序");
    myAction *ActProgMain = new myAction(menu,"主程序");
    myAction *ActProgSize = new myAction(menu,"程序容量");
    myAction *ActProgCycle = new myAction(menu,"循环");


    connect(ActProgContain,SIGNAL(triggered()),this,SLOT(myopen()));

    progActionList  <<ActProgContain
                    <<ActProgSelect
                    <<ActProgNew
                    <<ActProgMain
                    <<ActProgSize
                    <<ActProgCycle;

    QListIterator<myAction*> i(progActionList);
    while (i.hasNext())
    {
        menu->addAction(i.peekNext());
        menu->addSeparator();
        connect(i.next(),SIGNAL(triggered()),this,SLOT(topMenuButtonMake1()));
    }

}

void Widget::varMenuMake()
{
    //主菜单 变量
    QMenu *menu = ui->mbtVar->getMenu();

    myAction *ActByte = new myAction(menu,"字节型");
    myAction *ActInt = new myAction(menu,"整数型");
    myAction *ActDouble = new myAction(menu,"双精度型");
    myAction *ActReal = new myAction(menu,"实数型");
    myAction *ActChar = new myAction(menu,"字符型");
    myAction *ActPos = new myAction(menu,"位置型");
    myAction *ActLocal = new myAction(menu,"局部变量");

    varActionList   <<ActByte
                    <<ActInt
                    <<ActDouble
                    <<ActReal
                    <<ActChar
                    <<ActPos
                    <<ActLocal;

    QListIterator<myAction*> i(varActionList);
    while (i.hasNext())
    {
        menu->addAction(i.next());
        menu->addSeparator();
    }
}

void Widget::InOutputMenuMake()
{
    //主菜单 输入/输出
    QMenu *menu = ui->mbtIO->getMenu();


    myAction *ActOutI = new myAction(menu,"外部输入");
    myAction *ActOutO = new myAction(menu,"外部输出");
    myAction *ActGenI = new myAction(menu,"通用输入");
    myAction *ActGenO = new myAction(menu,"通用输出");
    myAction *ActSpcI = new myAction(menu,"专用输入");
    myAction *ActSpcO = new myAction(menu,"专用输出");
    myAction *ActRin = new myAction(menu,"RIN");
    myAction *ActCprin = new myAction(menu,"CPRIN");
    myAction *ActReg = new myAction(menu,"寄存器");
    myAction *ActAssRly = new myAction(menu,"辅助继电器");
    myAction *ActCtlI = new myAction(menu,"控制输入");
    myAction *ActVtlI = new myAction(menu,"虚拟输入信号");
    myAction *ActNetI = new myAction(menu,"网络输入");
    myAction *ActNetO = new myAction(menu,"网络输出");
    myAction *ActAlgO = new myAction(menu,"模拟量输出");
    myAction *ActSevSta = new myAction(menu,"伺服接通状态");
    myAction *ActStProg = new myAction(menu,"梯形图程序");
    myAction *ActIOWarn = new myAction(menu,"输入输出报警");
    myAction *ActIOMsg = new myAction(menu,"输入输出信息");
    myAction *ActPort = new myAction(menu,"端口");
    myAction *ActListIO = new myAction(menu,"模拟I/O列表");

    inoutActionList     <<ActOutI
                        <<ActOutO
                        <<ActGenI
                        <<ActGenO
                        <<ActSpcI
                        <<ActSpcO
                        <<ActRin
                        <<ActCprin
                        <<ActReg
                        <<ActAssRly
                        <<ActCtlI
                        <<ActVtlI
                        <<ActNetI
                        <<ActNetO
                        <<ActAlgO
                        <<ActSevSta
                        <<ActStProg
                        <<ActIOWarn
                        <<ActIOMsg
                        <<ActPort
                        <<ActListIO;

    QListIterator<myAction*> i(inoutActionList);
    while (i.hasNext())
    {
        menu->addAction(i.next());
        menu->addSeparator();
    }
}

void Widget::robotMenuMake()
{
    //主菜单 机器人
    QMenu *menu = ui->mbtRobot->getMenu();

    myAction *ActCrtPos = new myAction(menu,"当前位置");
    myAction *ActCmdPos = new myAction(menu,"命令位置");
    myAction *ActSevWatch = new myAction(menu,"伺服监视");
    myAction *ActWrkBaseP = new myAction(menu,"作业原点位置");
    myAction *ActSecBaseP = new myAction(menu,"第二原点位置");
    myAction *ActFallValue = new myAction(menu,"落下量");
    myAction *ActPowerOnOff = new myAction(menu,"电源通断位置");
    myAction *ActTool = new myAction(menu,"工具");
    myAction *ActIntfere = new myAction(menu,"干涉区");
    myAction *ActCrashDetc = new myAction(menu,"碰撞检测等级");
    myAction *ActUserCoord = new myAction(menu,"用户坐标");
    myAction *ActBasePoint = new myAction(menu,"原点位置");
    myAction *ActAxisOption = new myAction(menu,"机器人轴配置");
    myAction *ActAnalogWatch = new myAction(menu,"模拟量监视");
    myAction *ActCrashSenser = new myAction(menu,"超程碰撞传感器");
    myAction *ActRemovLimt = new myAction(menu,"解除极限");
    myAction *ActArmCtrl = new myAction(menu,"ARM控制");
    myAction *ActOffset = new myAction(menu,"偏移量");
    myAction *ActSoftLimt = new myAction(menu,"软极限设定");

    connect(ActCrtPos,SIGNAL(triggered()),this,SLOT(myopen()));

    robotActionList <<ActCrtPos
                    <<ActCmdPos
                    <<ActSevWatch
                    <<ActWrkBaseP
                    <<ActSecBaseP
                    <<ActFallValue
                    <<ActPowerOnOff
                    <<ActTool
                    <<ActIntfere
                    <<ActCrashDetc
                    <<ActUserCoord
                    <<ActBasePoint
                    <<ActAxisOption
                    <<ActAnalogWatch
                    <<ActCrashSenser
                    <<ActRemovLimt
                    <<ActArmCtrl
                    <<ActOffset
                    <<ActSoftLimt;

    QListIterator<myAction*> i(robotActionList);
    while (i.hasNext())
    {
        menu->addAction(i.next());
        menu->addSeparator();
    }
}

void Widget::sysMenuMake()
{
    //主菜单 系统信息
    QMenu *menu = ui->mbtSys->getMenu();

    myAction *ActVersion = new myAction(menu,"版本");
    myAction *ActWatchTime = new myAction(menu,"监视时间");
    myAction *ActWarnLog = new myAction(menu,"报警历史");
    myAction *ActIoMsg = new myAction(menu,"I/O信息记录");
    myAction *ActUserMenu = new myAction(menu,"用户定义菜单");
    myAction *ActSafeMod = new myAction(menu,"安全模式");

    connect(ActUserMenu,SIGNAL(triggered()),this,SLOT(myopen()));

    sysImfActionList <<ActVersion
                    <<ActWatchTime
                    <<ActWarnLog
                    <<ActIoMsg
                    <<ActUserMenu
                    <<ActSafeMod;


    QListIterator<myAction*> i(sysImfActionList);
    while (i.hasNext())
    {
        menu->addAction(i.next());
        menu->addSeparator();
    }
}

void Widget::exStorMenuMake()
{
    //主菜单 外部储存
    QMenu *menu = ui->mbtStore->getMenu();

    myAction *ActInstall = new myAction(menu,"安装");
    myAction *ActSave = new myAction(menu,"保存");
    myAction *ActCheck = new myAction(menu,"校验");
    myAction *ActDel = new myAction(menu,"删除");
    myAction *ActDevice = new myAction(menu,"装置");
    myAction *ActDir = new myAction(menu,"文件夹");

    connect(ActDir,SIGNAL(triggered()),this,SLOT(myopen()));

    exStorActionList <<ActInstall
                     <<ActSave
                     <<ActCheck
                     <<ActDel
                     <<ActDevice
                     <<ActDir;


    QListIterator<myAction*> i(exStorActionList);
    while (i.hasNext())
    {
        menu->addAction(i.next());
        menu->addSeparator();
    }
}

void Widget::paramMenuMake()
{
    //主菜单 参数
    QMenu *menu = ui->mbtParam->getMenu();

    myAction *ActS1CxG = new myAction(menu,"S1CxG");
    myAction *ActS2C = new myAction(menu,"S2C");
    myAction *ActS3C = new myAction(menu,"S3C");
    myAction *ActS4C = new myAction(menu,"S4C");
    myAction *ActA1P = new myAction(menu,"A1P");
    myAction *ActRS = new myAction(menu,"RS");

    connect(ActRS,SIGNAL(triggered()),this,SLOT(myopen()));

    parmActionList   <<ActS1CxG
                     <<ActS2C
                     <<ActS3C
                     <<ActS4C
                     <<ActA1P
                     <<ActRS;


    QListIterator<myAction*> i(parmActionList);
    while (i.hasNext())
    {
        menu->addAction(i.next());
        menu->addSeparator();
    }
}

void Widget::optionMenuMake()
{
    //主菜单 设置
    QMenu *menu = ui->mbtOption->getMenu();

    myAction *ActDmsSet = new myAction(menu,"示教条件设定");
    myAction *ActHandleSet = new myAction(menu,"操作条件设定");
    myAction *ActHandleEnable = new myAction(menu,"操作许可设定");
    myAction *ActFuncEnable = new myAction(menu,"功能有效设定");
    myAction *ActJogSet = new myAction(menu,"微动条件设定");
    myAction *ActBackSet = new myAction(menu,"后退条件设定");
    myAction *ActFuncSet = new myAction(menu,"功能条件设定");
    myAction *ActDispColor = new myAction(menu,"显示色设定");
    myAction *ActDate = new myAction(menu,"日期/时间");
    myAction *ActProgName = new myAction(menu,"预约程序名");
    myAction *ActUserPsw = new myAction(menu,"用户口令");
    myAction *ActSpeedSet = new myAction(menu,"设置速度");
    myAction *ActKeySet = new myAction(menu,"键定义");
    myAction *ActAxisKeySet = new myAction(menu,"轴操作键分配");
    myAction *ActAutoBackup = new myAction(menu,"设定自动备份");
    myAction *ActMisDataLog = new myAction(menu,"数据不匹配日志");
    myAction *ActPowerSave = new myAction(menu,"节能功能");
    myAction *ActEncoderTend = new myAction(menu,"编码器维护");

    connect(ActEncoderTend,SIGNAL(triggered()),this,SLOT(myopen()));

    optionActionList <<ActDmsSet
                     <<ActHandleSet
                     <<ActHandleEnable
                     <<ActFuncEnable
                     <<ActJogSet
                     <<ActBackSet
                     <<ActFuncSet
                     <<ActDispColor
                     <<ActDate
                     <<ActProgName
                     <<ActUserPsw
                     <<ActSpeedSet
                     <<ActKeySet
                     <<ActAxisKeySet
                     <<ActAutoBackup
                     <<ActMisDataLog
                     <<ActPowerSave
                     <<ActEncoderTend;

    QListIterator<myAction*> i(optionActionList);
    while (i.hasNext())
    {
        menu->addAction(i.next());
        menu->addSeparator();
    }
}

void Widget::dispOptionMenuMake()
{
    //主菜单 显示设置
    QMenu *menu = ui->mbtDispOption->getMenu();

    myAction *ActFontSet = new myAction(menu,"更改字体");
    myAction *ActButtonSet = new myAction(menu,"更改按钮");
    myAction *ActInitSet = new myAction(menu,"设置初始化");
    myAction *ActWindowSet = new myAction(menu,"改变窗口格式");

    connect(ActWindowSet,SIGNAL(triggered()),this,SLOT(myopen()));

    disOptActionList <<ActFontSet
                     <<ActButtonSet
                     <<ActInitSet
                     <<ActWindowSet;



    QListIterator<myAction*> i(disOptActionList);
    while (i.hasNext())
    {
        menu->addAction(i.next());
        menu->addSeparator();
    }
}




void Widget::myopen()
{
    qDebug()<<"test the main menu Action";
}


void Widget::on_pbMainMenuRight_clicked()
{
    int PageNum = ui->stackedWidgetMainMenu->currentIndex();

    if (PageNum < ui->stackedWidgetMainMenu->count()-1)
        PageNum++;
    else PageNum=0;

    ui->stackedWidgetMainMenu->setCurrentIndex(PageNum);
}

void Widget::on_pbMainMenuLeft_clicked()
{
    int PageNum = ui->stackedWidgetMainMenu->currentIndex();

    if (PageNum > 0)
        PageNum--;
    else PageNum = ui->stackedWidgetMainMenu->count()-1;

    ui->stackedWidgetMainMenu->setCurrentIndex(PageNum);
}




