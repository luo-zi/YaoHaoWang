#include "yhk.h"
#include"mlb.h"
#include<QLabel>
#include<QWidget>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
YHK::YHK(QWidget *parent) : QWidget(parent)
{
  jg=new MLb(this);
  start=new QPushButton("摇号",this);
  QHBoxLayout* qhb=new  QHBoxLayout(this);
  QVBoxLayout * qvb=new QVBoxLayout(this);
  qvb->addLayout(qhb);
  qvb->addWidget(jg);
  this->setFixedSize(300,150);
  qhb->addWidget(start);
  qhb->addWidget(stop);
  this->setWindowTitle("百变星君摇号王超低仿版beta");
}

