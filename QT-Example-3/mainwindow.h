#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "observerdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_CreateButton_clicked();
    void on_DeleteButton_clicked();
    void deleteObserver(unsigned int);

private:
    Ui::MainWindow *ui;
    std::vector<ObserverDialog*> listeners;
    unsigned int observerID;
    void deleteListener();

};

#endif // MAINWINDOW_H
