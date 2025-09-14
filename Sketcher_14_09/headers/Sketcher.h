#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Sketcher.h"

class Sketcher : public QMainWindow
{
    Q_OBJECT

public:
    Sketcher(QWidget *parent = nullptr);
    ~Sketcher();

private:
    void setupUI();

private:
  //  Ui::SketcherClass ui;

    QWidget* mCentralwidget;
    QGridLayout* mCentralGridLayout;
    QPushButton* mX;
    QPushButton* mY;

    QMenu* menu;
};

