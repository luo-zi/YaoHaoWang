#ifndef YHK_H
#define YHK_H

#include <QWidget>
#include<QPushButton>
#include<QLabel>
#include"mlb.h"
class QHBoxLayout;
class QVBoxLayout;

class YHK : public QWidget
{
  Q_OBJECT
public:
   explicit YHK(QWidget *parent = nullptr);
   MLb *jg;
   QPushButton *start;
   QPushButton *stop;
   QHBoxLayout* qhb;
   QVBoxLayout * qvb;
};
#endif // YHK_H
