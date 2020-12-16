#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include <qlabel.h>

namespace Ui
{
    class MainWindow;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit  MainWindow(QWidget* parent = 0); 
        QLabel* label;
    private:
        Ui::MainWindowClass ui;
};


#endif // MAINWINDOW_H