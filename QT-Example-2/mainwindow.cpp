#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "observerdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(100);
   // connect ( ui->CreateButton, SIGNAL( clicked() ), this, SLOT( on_CreateButton_clicked() ) );
    //connect ( ui->DeleteButton, SIGNAL( clicked() ), this, SLOT( on_DeleteButton_clicked() ) );
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
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            newListener, SLOT(setValue(int)));
}

void MainWindow::on_DeleteButton_clicked()
{
    ObserverDialog* lastListener = listeners.back();
    lastListener->close();
    listeners.pop_back();
}
