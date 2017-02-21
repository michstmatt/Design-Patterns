#ifndef CUSTOMFONTCOMBOBOX_H
#define CUSTOMFONTCOMBOBOX_H
#include <QFontComboBox>

class CustomFontComboBox: public QFontComboBox
{
    Q_OBJECT
public:
    CustomFontComboBox(QWidget* qw):QFontComboBox(qw){}

signals:
    void iChanged(QObject*);
public slots:
    void myCurrentFontChanged(const QFont&);
};

#endif // CUSTOMFONTCOMBOBOX_H
