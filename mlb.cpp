#include "mlb.h"
#include<QLabel>
#include<QWidget>
#include<QRandomGenerator>
MLb::MLb(QWidget *parent):QLabel (parent)
{
  this->setText("开始摇奖");
this->open=true;
}
void MLb::yj(){
  this->setText(QString("%1号").arg(QString::number(qr->bounded(64))));
    }
