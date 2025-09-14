#include "stdafx.h"
#include "Sketcher.h"

Sketcher::Sketcher(QWidget *parent)
    : QMainWindow(parent)
{
   // ui.setupUi(this);

    void setupUI();
}

Sketcher::~Sketcher()
{}

void Sketcher::setupUI() {

   // QWidget* w = new QWidget(this);
    


    mCentralwidget = new QWidget(this);
    mCentralGridLayout = new QGridLayout(mCentralwidget);
  
    mCentralwidget->setStyleSheet("background-color:white;");

    setCentralWidget(mCentralwidget);

    


    mX = new QPushButton("X coordinate ", mCentralwidget);
    mCentralGridLayout->addWidget(mX);

    mY = new QPushButton("Y coordinate ", mCentralwidget);
    mCentralGridLayout->addWidget(mY);

    menu = new QMenu(mCentralwidget);
    QAction* pointAction = menu->addAction("point");

}

