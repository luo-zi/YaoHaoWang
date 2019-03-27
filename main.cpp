#include<QApplication>
#include<QPushButton>
#include<QObject>
#include<yhk.h>
#include"mlb.h"
#include<mlog.h>
#include<mbtn.h>

int main(int argc,char* argv[] ){
  QApplication app(argc,argv);
  YHK yhk;
  Mlog log;
  QObject::connect(yhk.start,&QPushButton::clicked,yhk.start,&Mbtn::clc);
  QObject::connect(yhk.start,&Mbtn::sed,yhk.log,&Mlog::logs);
  QObject::connect(yhk.start,&Mbtn::sed,yhk.jg,&MLb::yj);
  yhk.show();
   return app.exec();
}
