#include "observerdialog.h"
#include "ui_observerdialog.h"

ObserverDialog::ObserverDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ObserverDialog)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),this, SIGNAL(valueChanged(int)));
}

void ObserverDialog::setValue(int progress)
{
    ui->horizontalSlider->setValue(progress);
}

void ObserverDialog::setObserverID(int id)
{
    observerID=id;
}

void ObserverDialog::on_ObserverDeleteButton_clicked()
{
    emit observerDeleted(observerID);
    this->close();
}
unsigned int ObserverDialog::getID(){
    return observerID;
}


ObserverDialog::~ObserverDialog()
{
    delete ui;
}
