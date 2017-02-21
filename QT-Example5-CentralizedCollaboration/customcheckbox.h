#ifndef CUSTOMCHECKBOX_H
#define CUSTOMCHECKBOX_H
#include <QCheckBox>

class CustomCheckBox:public QCheckBox
{
    Q_OBJECT
public:
    CustomCheckBox(QWidget* qw):QCheckBox(qw){}
    CustomCheckBox(QString qs):QCheckBox(qs){}

signals:
    void iChanged(QObject*);

public slots:
    void myStateChanged(int);
};

#endif // CUSTOMCHECKBOX_H
