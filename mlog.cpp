#include<mbtn.h>
#include "mlog.h"
#include<QTextBrowser>
#include<QRandomGenerator>
Mlog::Mlog(QWidget *parent):QTextBrowser(parent)
{
}
void Mlog::logs(int a){
  this->append(QString("%1号").arg(QString::number(a)));
}
