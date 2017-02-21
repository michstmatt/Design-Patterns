#include "observerdialog.h"
#include "ui_observerdialog.h"

ObserverDialog::ObserverDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ObserverDialog)
{
    ui->setupUi(this);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
}

ObserverDialog::~ObserverDialog()
{
    delete ui;
}

void ObserverDialog::setValue(int progress)
{
    ui->progressBar->setValue(progress);
}
