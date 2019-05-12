#ifndef YHK_H
#define YHK_H
#include<mbtn.h>
#include <QWidget>
#include<QPushButton>
#include<QLabel>
#include<QTimer>
#include"mlb.h"
#include<mlog.h>
class QHBoxLayout;
class QVBoxLayout;

class YHK : public QWidget
{
  Q_OBJECT
public:
   explicit YHK(QWidget *parent = nullptr);
   MLb *jg;
   Mlog *log;
   Mbtn *start;
   Mbtn *stop;
   QHBoxLayout* qhb;
   QVBoxLayout * qvb;
   QTimer *time;
   void setInt();
   void doLog();
   int c;
    static QRandomGenerator a;
};
#endif // YHK_H
