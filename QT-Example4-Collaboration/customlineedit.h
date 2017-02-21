#ifndef CUSTOMLINEEDIT_H
#define CUSTOMLINEEDIT_H
#include <QLineEdit>

class CustomLineEdit: public QLineEdit
{
    Q_OBJECT

public:
    CustomLineEdit(const QString& qstring):QLineEdit(qstring){};
    CustomLineEdit(QWidget* qw):QLineEdit(qw){};

public slots:
    void showFont(QFont);
};

#endif // CUSTOMLINEEDIT_H