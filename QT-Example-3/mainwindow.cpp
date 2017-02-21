#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    observerID=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CreateButton_clicked()
{
    ObserverDialog* newListener = new ObserverDialog(this);
    listeners.push_back(newListener);
    newListener->show();
    newListener->setObserverID(observerID);
    observerID++;

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            newListener,SLOT(setValue(int)));

    connect(newListener, SIGNAL(valueChanged(int)),
            ui->horizontalSlider,SLOT(setValue(int)));

    connect(newListener, SIGNAL(observerDeleted(unsigned int)),
            this, SLOT(deleteObserver(unsigned int)));
}

void MainWindow::on_DeleteButton_clicked()
{
    ObserverDialog* lastListener=listeners.back();
    lastListener->close();
    listeners.pop_back();
}

void MainWindow::deleteObserver(unsigned int id)
{
    observerID--;
    ui->label->setText("The "+QString::number(id+1)+"th observer is deleted!");

}

void MainWindow::deleteListener()
{

}

