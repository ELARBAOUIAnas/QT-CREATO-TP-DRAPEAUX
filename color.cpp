#include <Color.h>
#include <QPalette>
#include <QString>
//--- Constructeur par défaut ---//
Color::Color(QWidget *parent)
    : QWidget(parent)
{
}
//--- Contructeur qui prend une couleur comme paramètre ---//
Color::Color(QString couleur)
{
setGeometry(0, 0, 100, 100);
this->setAutoFillBackground(true); //# couleur d'arrière plan
QPalette myPalette = palette();// # définir une palette
// On ajoute la couleur passée en paramètres
myPalette.setColor(QPalette::Window, QColor(couleur));
setPalette(myPalette);// # Palette ajoutée au widget
}
Color::~Color()
{
}
