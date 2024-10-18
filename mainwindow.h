#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <color.h>
#include <drapeau.h>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    //--- Déclaration des boutons ---//
    QPushButton *B1 = new QPushButton("ALLEMAGNE");
    QPushButton *B2 = new QPushButton("FRANCE");
    QPushButton *B3 = new QPushButton("ITALIE");
    QPushButton *B4 = new QPushButton("AUTRICHE");
    QPushButton *B5 = new QPushButton("BELGIQUE");
    QPushButton *B6 = new QPushButton("BULGARIE");
    QPushButton *B7 = new QPushButton("ESTONIE");
    QPushButton *B8 = new QPushButton("HONGRIE");
    QPushButton *B9 = new QPushButton("IRLANDE");
    QPushButton *B10 = new QPushButton("LETTONIE");
    QPushButton *B11 = new QPushButton("LITUANIE");
    QPushButton *B12 = new QPushButton("LUXEMBOURG");
    QPushButton *B13 = new QPushButton("PAYS-BAS");
    QPushButton *B14 = new QPushButton("ROUMANIE");
    QPushButton *B15 = new QPushButton("PORTUGAL");
    QPushButton *B16 = new QPushButton("ESPAGNE");
    void set_bkgnd();

public slots:
    //--- Slots pour chaque drapeau ---//
    void Drapeau_ALLEMAGNE();
    void Drapeau_FRANCE();
    void Drapeau_ITALIE();
    void Drapeau_AUTRICHE();
    void Drapeau_BELGIQUE();
    void Drapeau_BULGARIE();
    void Drapeau_ESTONIE();
    void Drapeau_HONGRIE();
    void Drapeau_IRLANDE();
    void Drapeau_LETTONIE();
    void Drapeau_LITUANIE();
    void Drapeau_LUXEMBOURG();
    void Drapeau_PAYS_BAS();
    void Drapeau_ROMANIE();
    void Drapeau_PORTUGAL();
    void Drapeau_ESPAGNE();


protected:
    // Pour ajuster l'image du fond
    void resizeEvent(QResizeEvent* evt) override;

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
