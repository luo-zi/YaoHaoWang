#ifndef MLB_H
#define MLB_H
#include<QLabel>
#include<QWidget>
#include<QRandomGenerator>
#include<mbtn.h>
class MLb :public QLabel
{
  Q_OBJECT
public:
  explicit MLb(QWidget *parent=nullptr);
public slots:
  void yj(int);
};

#endif // MLB_H
