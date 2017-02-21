#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->lineEditFamily, SIGNAL(editingFinished()),ui->lineEditFamily,SLOT(myEditingFinished()));
    connect(ui->lineEditFamily, SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChanged(QObject*)));

    connect(ui->fontComboBox,SIGNAL(currentFontChanged(QFont)),ui->fontComboBox,SLOT(myCurrentFontChanged(QFont)));
    connect(ui->fontComboBox,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChanged(QObject*)));

    connect(ui->checkBoxBold,SIGNAL(stateChanged(int)),ui->checkBoxBold,SLOT(myStateChanged(int)));
    connect(ui->checkBoxBold,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChanged(QObject*)));

    connect(ui->checkBoxItalic,SIGNAL(stateChanged(int)),ui->checkBoxItalic,SLOT(myStateChanged(int)));
    connect(ui->checkBoxItalic,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChanged(QObject*)));

    connect(ui->checkBoxUnderline,SIGNAL(stateChanged(int)),ui->checkBoxUnderline,SLOT(myStateChanged(int)));
    connect(ui->checkBoxUnderline,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChanged(QObject*)));

    connect(ui->lineEditSize,SIGNAL(editingFinished()),ui->lineEditSize,SLOT(myEditingFinished()));
    connect(ui->lineEditSize,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChanged(QObject*)));


}



void MainWindow::actByYourChanged(QObject * sender)
{
    if(sender==ui->lineEditFamily)
    {
        ui->labelFox->setFont(QFont(ui->lineEditFamily->text()));
        ui->fontComboBox->setCurrentFont(QFont(ui->lineEditFamily->text()));
    }
    else if (sender==ui->fontComboBox)
    {
        ui->labelFox->setFont(ui->fontComboBox->currentFont());
        ui->lineEditFamily->setText(ui->fontComboBox->currentFont().family());
    }
    else if (sender==ui->checkBoxBold)
    {
        QFont font = ui->labelFox->font();
        font.setBold(ui->checkBoxBold->isChecked());
        ui->labelFox->setFont(font);
    }
    else if (sender==ui->checkBoxItalic)
    {
        QFont font = ui->labelFox->font();
        font.setItalic(ui->checkBoxItalic->isChecked());
        ui->labelFox->setFont(font);
    }
    else if (sender==ui->checkBoxUnderline)
    {
        QFont font = ui->labelFox->font();
        font.setUnderline(ui->checkBoxUnderline->isChecked());
        ui->labelFox->setFont(font);
    }
    else if (sender==ui->lineEditSize)
    {
        QFont font = ui->labelFox->font();
        font.setPointSize(ui->lineEditSize->text().toInt());
        ui->labelFox->setFont(font);
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::LineEditFinished()
{

}
*/
