#include<QApplication>
#include<QPushButton>
#include<QObject>
#include<yhk.h>
#include"mlb.h"

int main(int argc,char* argv[] ){
  QApplication app(argc,argv);
  YHK yhk;
  QObject::connect(yhk.start,&QPushButton::clicked,yhk.jg,&MLb::yj);
  yhk.show();
   return app.exec();
}
