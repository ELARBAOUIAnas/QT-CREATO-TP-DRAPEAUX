#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Drapeaux tricolores UE");
    resize(700, 400);

    QPixmap bkgnd("/home/anous/Images/UE.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    //--- Layout des boutons ---//
    QVBoxLayout *Pagelayout = new QVBoxLayout;
    QHBoxLayout *Hlayout1 = new QHBoxLayout;
    QHBoxLayout *Hlayout2 = new QHBoxLayout;
    QHBoxLayout *Hlayout3 = new QHBoxLayout;

    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);
    Pagelayout->addLayout(Hlayout3);

    //--- Création des boutons pour les drapeaux ---//

    QPushButton *B1 = new QPushButton("ALLMAGNE");
    B1->setGeometry(50, 100, 100, 50);
    QPushButton *B2 = new QPushButton("FRANCE");
    B2->setGeometry(50, 100, 100, 50);
    QPushButton *B3 = new QPushButton("ITALIE");
    B3->setGeometry(50, 100, 100, 50);
    QPushButton *B4 = new QPushButton("AUTRICHE");
    B4->setGeometry(50, 100, 100, 50);
    QPushButton *B5 = new QPushButton("BELGIQUE");
    B5->setGeometry(50, 100, 100, 50);
    QPushButton *B6 = new QPushButton("BULGARIE");
    B6->setGeometry(50, 100, 100, 50);
    QPushButton *B7 = new QPushButton("ESTONIE");
    B7->setGeometry(50, 100, 100, 50);
    QPushButton *B8 = new QPushButton("HONGRIE");
    B8->setGeometry(50, 100, 100, 50);
    QPushButton *B9 = new QPushButton("IRLANDE");
    B9->setGeometry(50, 100, 100, 50);
    QPushButton *B10 = new QPushButton("LETTONIE");
    B10->setGeometry(50, 100, 100, 50);
    QPushButton *B11 = new QPushButton("LITUANIE");
    B11->setGeometry(50, 100, 100, 50);
    QPushButton *B12 = new QPushButton("LUXEMBOURG");
    B12->setGeometry(50, 100, 100, 50);
    QPushButton *B13 = new QPushButton("PAYS-BAS");
    B13->setGeometry(50, 100, 100, 50);
    QPushButton *B14 = new QPushButton("ROUMANIE");
    B14->setGeometry(50, 100, 100, 50);
    QPushButton *B15 = new QPushButton("PORTUGAL");
    B15->setGeometry(50, 100, 100, 50);
    QPushButton *B16 = new QPushButton("ESPAGNE");
    B15->setGeometry(50, 100, 100, 50);



    //--- Ajout des boutons aux layouts ---//
    Hlayout1->addWidget(B1);
    Hlayout1->addWidget(B2);
    Hlayout1->addWidget(B3);
    Hlayout1->addWidget(B4);
    Hlayout1->addWidget(B5);
    Hlayout1->addWidget(B6);
    Hlayout1->addWidget(B7);
    Hlayout2->addWidget(B8);
    Hlayout2->addWidget(B9);
    Hlayout2->addWidget(B10);
    Hlayout2->addWidget(B11);
    Hlayout2->addWidget(B12);
    Hlayout2->addWidget(B13);
    Hlayout2->addWidget(B14);
    Hlayout3->addWidget(B15);
    Hlayout3->addWidget(B16);

    QWidget *widget = new QWidget;
    widget->setLayout(Pagelayout);
    setCentralWidget(widget);

    //--- Connexion des boutons avec les slots ---//
    connect(B1, SIGNAL(clicked()), this, SLOT(Drapeau_ALLEMAGNE()));
    connect(B2, SIGNAL(clicked()), this, SLOT(Drapeau_FRANCE()));
    connect(B3, SIGNAL(clicked()), this, SLOT(Drapeau_ITALIE()));
    connect(B4, SIGNAL(clicked()), this, SLOT(Drapeau_AUTRICHE()));
    connect(B5, SIGNAL(clicked()), this, SLOT(Drapeau_BELGIQUE()));
    connect(B6, SIGNAL(clicked()), this, SLOT(Drapeau_BULGARIE()));
    connect(B7, SIGNAL(clicked()), this, SLOT(Drapeau_ESTONIE()));
    connect(B8, SIGNAL(clicked()), this, SLOT(Drapeau_HONGRIE()));
    connect(B9, SIGNAL(clicked()), this, SLOT(Drapeau_IRLANDE()));
    connect(B10, SIGNAL(clicked()), this, SLOT(Drapeau_LETTONIE()));
    connect(B11, SIGNAL(clicked()), this, SLOT(Drapeau_LITUANIE()));
    connect(B12, SIGNAL(clicked()), this, SLOT(Drapeau_LUXEMBOURG()));
    connect(B13, SIGNAL(clicked()), this, SLOT(Drapeau_PAYS_BAS()));
    connect(B14, SIGNAL(clicked()), this, SLOT(Drapeau_ROMANIE()));
    connect(B15, SIGNAL(clicked()), this, SLOT(Drapeau_PORTUGAL()));
    connect(B16, SIGNAL(clicked()), this, SLOT(Drapeau_ESPAGNE()));
}


void MainWindow::Drapeau_ALLEMAGNE()
{
    // Trois bandes horizontales : noir, rouge, or
    Drapeau *D = new Drapeau("black", "red", "gold", "Vertical", "ALLMAGNE", "");
}

void MainWindow::Drapeau_FRANCE()
{
    // Trois bandes verticales : bleu, blanc, rouge
    Drapeau *D = new Drapeau("Darkblue", "white", "red", "Horizontal", "FRANCE", "");
}

void MainWindow::Drapeau_ITALIE()
{
    // Trois bandes verticales : vert, blanc, rouge
    Drapeau *D = new Drapeau("green", "white", "red", "Horizontal", "ITALIE", "");
}
void MainWindow::Drapeau_AUTRICHE()
{
    // Trois bandes verticales : noir, or, rouge
    Drapeau *D = new Drapeau("red", "white", "red", "Horizontal", "AUTRICHE", "");
    D->show();
}
void MainWindow::Drapeau_BELGIQUE()
{
    // Trois bandes verticales : rouge, blanc, rouge
    Drapeau *D = new Drapeau("black", "gold", "red", "Horizontal", "BELGIQUE", "");
}
void MainWindow::Drapeau_BULGARIE()
{
    // Trois bandes verticales : blanc, vert, rouge
    Drapeau *D = new Drapeau("white", "green", "red", "Vertical", "BULGARIE", "");
}
void MainWindow::Drapeau_ESTONIE()
{
    // Trois bandes verticales : blanc, blue, noir
    Drapeau *D = new Drapeau("white", "blue", "black", "Vertical", "ESTONIE", "");
}
void MainWindow::Drapeau_HONGRIE()
{
    // Trois bandes verticales : rouge, blanc, vert
    Drapeau *D = new Drapeau("red", "white", "green", "Vertical", "HONGRIE", "");
}
void MainWindow::Drapeau_IRLANDE()
{
    // Trois bandes verticales : vert, blanc, orange
    Drapeau *D = new Drapeau("green", "white", "orange", "Horizontal", "IRLANDE","");
}
void MainWindow::Drapeau_LETTONIE()
{
    // Trois bandes verticales : rouge, blanc, rouge
    Drapeau *D = new Drapeau("maroon", "white", "maroon", "Vertical", "LETTONIE", "");
}
void MainWindow::Drapeau_LITUANIE()
{
    // Trois bandes verticales : gold, vert, rouge
    Drapeau *D = new Drapeau("gold", "green", "red", "Vertical", "LITUANIE", "");
}
void MainWindow::Drapeau_LUXEMBOURG()
{
    // Trois bandes verticales : rouge, blanc, bleu
    Drapeau *D = new Drapeau("red", "white", "Skyblue", "Vertical", "LUXEMBOURG", "");
}
void MainWindow::Drapeau_PAYS_BAS()
{
    // Trois bandes verticales : rouge, blanc, bleu
    Drapeau *D = new Drapeau("red", "white", "Darkblue", "Vertical", "PAYS-BAS", "");
}
void MainWindow::Drapeau_ROMANIE()
{
    // Trois bandes verticales : bleu, gold, rouge
    Drapeau *D = new Drapeau("blue", "gold", "red", "Horizontal", "ROUMANIE", "");
}
void MainWindow::Drapeau_PORTUGAL()
{

    Drapeau *D = new Drapeau("", "", "", "image", "PORTUGAL", "P");
}
void MainWindow::Drapeau_ESPAGNE()
{

    Drapeau *D = new Drapeau("", "", "", "image", "ESPAGNE", "S");
}
void MainWindow::resizeEvent(QResizeEvent* evt){
    QMainWindow::resizeEvent(evt);
    this->set_bkgnd();
}

void MainWindow::set_bkgnd(){
    QPixmap bkgnd("/home/anous/Images/UE.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}
MainWindow::~MainWindow()
{
    delete ui;
}

