#include "yhk.h"
#include"mlb.h"
#include<mbtn.h>
#include<mlog.h>
#include<QLabel>
#include<QWidget>
#include<QPushButton>
#include<QVBoxLayout>
#include<QHBoxLayout>
YHK::YHK(QWidget *parent) : QWidget(parent)
{
  jg=new MLb(this);
  start=new Mbtn(this);
  start->setText("摇奖");
  log=new Mlog(this);
  qvb=new QVBoxLayout(this);
  qvb->addWidget(jg,0,Qt::AlignHCenter);
  qvb->addWidget(start);
  qvb->addWidget(log);
  this->setFixedSize(300,250);
  this->setWindowTitle("百变星君摇号王超低仿版beta");

  QObject::connect(this->start,&QPushButton::clicked,this->start,&Mbtn::clc);
  QObject::connect(this->start,&Mbtn::sed,this->log,&Mlog::logs);
  QObject::connect(this->start,&Mbtn::sed,this->jg,&MLb::yj);
}

