#ifndef DRAPEAU_H
#define DRAPEAU_H
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
class Drapeau : public QWidget
{
Q_OBJECT

public:
Drapeau(QWidget *parent = nullptr);
Drapeau(QString C1, QString C2, QString C3, QString type, QString title, QString lettre);
~Drapeau();
QHBoxLayout *Horiz_layout = new QHBoxLayout;
QVBoxLayout *Vertic_layout = new QVBoxLayout;
QLabel *label = new QLabel(this);
QPixmap *img0 = new QPixmap("/home/anous/Images/portugal.png");
QPixmap *img1= new QPixmap("/home/anous/Images/spain.png");
private:
//Ui::Widget *ui;
};
#endif // DRAPEAU_H
