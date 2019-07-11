#include "../includes/mainwindow.h"
#include "../includes/ui_mainwindow.h"
#include<iostream>
#include<unistd.h>


MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}



MainWindow::MainWindow(Manager* manager, QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->manager = manager;

    ui->parameterPanel->setManager(manager);
    ui->parameterPanel->fillModes();
    ui->parameterPanel->fillNeuralNets();
}
