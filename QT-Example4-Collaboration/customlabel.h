#ifndef CUSTOMLABEL_H
#define CUSTOMLABEL_H
//#include <QObject>
#include <QLabel>
#include <QFont>
#include <QMessageBox>

class CustomLabel: public QLabel
{
    Q_OBJECT


public:
    CustomLabel(QWidget* qw):QLabel(qw){};

public slots:
    void setFont(QFont);

    void setFontByText(QString);

    void modifyFontByCheckboxBold(bool);
    void modifyFontByCheckboxItalic(bool);
    void modifyFontByCheckboxUnderline(bool);

    void modifyFontByCheckboxSize(QString);


};

#endif // CUSTOMLABEL_H
