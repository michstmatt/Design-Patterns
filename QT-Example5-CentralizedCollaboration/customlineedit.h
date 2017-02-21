#ifndef CUSTOMLINEEDIT_H
#define CUSTOMLINEEDIT_H
#include <QLineEdit>

class CustomLineEdit: public QLineEdit
{
    Q_OBJECT
public:
    CustomLineEdit(const QString& qstring):QLineEdit(qstring){}
    CustomLineEdit(QWidget* qw):QLineEdit(qw){}

signals:
    void iChanged(QObject*);

public slots:
    void myEditingFinished();
};

#endif // CUSTOMLINEEDIT_H
