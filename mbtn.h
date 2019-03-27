#ifndef MBTN_H
#define MBTN_H
#include<QRandomGenerator>
#include<QPushButton>
class Mbtn:public QPushButton
{
  Q_OBJECT
public:
  Mbtn(QWidget *parent=nullptr);
  static QRandomGenerator a;
  void clc(){
    emit sed(a.bounded(64));
  }
signals:
    void sed(int);


};

#endif // MBTN_H
