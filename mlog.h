#ifndef MLOG_H
#define MLOG_H
#include<mbtn.h>
#include<QTextBrowser>
#include<QRandomGenerator>
class Mlog:public QTextBrowser
{
  Q_OBJECT
public:
  Mlog(QWidget *parent=nullptr);
public slots:
  void logs(int);
};

#endif // MLOG_H
