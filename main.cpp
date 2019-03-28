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
  yhk.show();
   return app.exec();
}
