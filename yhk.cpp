#include "yhk.h"
#include"mlb.h"
#include<mbtn.h>
#include<mlog.h>
#include<QLabel>
#include<QWidget>
#include<QPushButton>
#include<QVBoxLayout>
#include<QHBoxLayout>
QRandomGenerator YHK::a(2);

YHK::YHK(QWidget *parent) : QWidget(parent)
{
  time=new QTimer(this);
  jg=new MLb(this);
  start=new Mbtn(this);
  stop=new Mbtn(this);
  start->setText("开始");
  stop->setText("停止");
  log=new Mlog(this);
  qvb=new QVBoxLayout(this);
  time->setInterval(30);
  qvb->addWidget(jg,0,Qt::AlignHCenter);
  qvb->addWidget(start);
  qvb->addWidget(stop);
  qvb->addWidget(log);
  this->setFixedSize(300,250);
  this->setWindowTitle("百变星君摇号王超低仿版beta");
void  (QTimer::*start_t) ()=&QTimer::start;
void (QTimer::*stop_t)()=&QTimer::stop;


  QObject::connect(this->start,&QPushButton::clicked,this->time,start_t);
 QObject::connect(this->stop,&QPushButton::clicked,this->time,stop_t);
 QObject::connect(this->time,&QTimer::timeout,this,&YHK::setInt);
 QObject::connect(this->stop,&QPushButton::clicked,this,&YHK::doLog);
 QObject::connect(this->stop,&QPushButton::clicked,this->stop,[=](){
  this->stop->setEnabled(false);
   });
 QObject::connect(this->start,&QPushButton::clicked,this->stop,[=](){
  this->stop->setEnabled(true);
   });

}
void YHK::setInt(){
  this->c=a.bounded(64);
  this->jg->yj(c);
}
void YHK::doLog(){
    this->log->logs(c);
}
