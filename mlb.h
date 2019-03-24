#ifndef MLB_H
#define MLB_H
#include<QLabel>
#include<QWidget>
#include<QRandomGenerator>
class MLb :public QLabel
{
  Q_OBJECT
public:
  explicit MLb(QWidget *parent=nullptr);
public slots:
  void yj();
private:
  QRandomGenerator * qr=new QRandomGenerator;
  bool open;
};

#endif // MLB_H
