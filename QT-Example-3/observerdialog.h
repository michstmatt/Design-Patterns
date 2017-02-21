#ifndef OBSERVERDIALOG_H
#define OBSERVERDIALOG_H

#include <QDialog>

namespace Ui {
class ObserverDialog;
}

class ObserverDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ObserverDialog(QWidget *parent = 0);
    ~ObserverDialog();
    void setObserverID(int);
    unsigned int getID();

signals:
    void valueChanged(int);
    void observerDeleted(unsigned int);

public slots:
    void setValue(int);

private slots:
    void on_ObserverDeleteButton_clicked();

private:
    Ui::ObserverDialog *ui;
    unsigned int observerID;
};

#endif // OBSERVERDIALOG_H
