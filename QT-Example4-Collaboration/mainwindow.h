#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFont>
#include "customlabel.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void getFont(QFont qf);


private slots:
    void on_lineEditFamily_editingFinished();
    void on_lineEditFamily_cursorPositionChanged(int arg1, int arg2);
};

#endif // MAINWINDOW_H
