﻿#ifndef ENDSHOW_H
#define ENDSHOW_H

#include <QDialog>
#include <QMovie>
#include"person.h"
#include<QFile>
#include<qmediaplayer.h>
//#include"mainwindow.h"
#include"enter_information.h"
#include"ranking.h"
#include<QStandardItemModel>
#include<QMessageBox>
#include<QCloseEvent>
#include"pausesave.h"
namespace Ui {
class EndShow;
}

class EndShow : public QDialog
{
    Q_OBJECT

public:
    explicit EndShow(QWidget *parent = nullptr);
    ~EndShow();
    person*winP;//记录游戏结束时两人的相关数据（不确定能否用到）
    person*loseP;
    QString TimeText;//记录传入的时间
    void otherOperation();
    void gameovervoice();//两个函数都是用于音乐的播放
    void gameovervoice2();

    void closeEvent(QCloseEvent *event);
    QMediaPlayer*toolplayer;//两个播放器
    QMediaPlayer*toolplayer2;

    int sumTime=0;//对使用时间和分数的初始化和定义（虽然我们学的好像要在构造函数初始化）
    int integralRecord=0;
    bool gameover=false;//用于结束程序按钮的响应

    void writetoFile(QString);//写入文件

private slots:
    void on_pushButton_clicked();//第一个按钮用于结束程序
    void on_pushButton_3_clicked();//第二个按钮用于弹出排行榜
private:
    Ui::EndShow *ui;//界面设计
};

#endif // ENDSHOW_H
