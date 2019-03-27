#include "yhk.h"
#include"mlb.h"
#include<mbtn.h>
#include<mlog.h>
#include<QLabel>
#include<QWidget>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
YHK::YHK(QWidget *parent) : QWidget(parent)
{
  jg=new MLb(this);
  start=new Mbtn(this);
  start->setText("摇奖");
  log=new Mlog(this);
  QHBoxLayout* qhb=new  QHBoxLayout(this);
  QVBoxLayout * qvb=new QVBoxLayout(this);
  qhb->addWidget(jg);
  qhb->addWidget(log);
  this->setFixedSize(300,150);
  log->setSizeIncrement(70,30);
  qvb->addWidget(start);
  qhb->addWidget(stop);
  this->setWindowTitle("百变星君摇号王超低仿版beta");
}

