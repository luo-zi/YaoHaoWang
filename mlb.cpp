#include "mlb.h"
#include<QLabel>
#include<QWidget>
#include<mbtn.h>
#include<QRandomGenerator>
MLb::MLb(QWidget *parent):QLabel (parent)
{
  this->setText("开始摇奖");
}
void MLb::yj(int a){
  this->setText(QString("%1号").arg(QString::number(a)));
    }
