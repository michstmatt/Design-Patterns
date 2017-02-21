
#include "customlabel.h"
#include <QFont>


void CustomLabel::setFont(QFont qf)
{
    QLabel::setFont(qf);
}

void CustomLabel::setFontByText(QString qs)
{
    this->setFont(QFont(qs));
}

void CustomLabel::modifyFontByCheckboxBold(bool b)
{

    QFont font = this->font();

    font.setWeight(0);
    font.setBold(b);
    this->setFont(font);
}

void CustomLabel::modifyFontByCheckboxItalic(bool b)
{
    QFont font= this->font();
   // font.setWeight(3);
    font.setItalic(b);
    this->setFont(font);
}

void CustomLabel::modifyFontByCheckboxUnderline(bool b)
{
    QFont font= this->font();
    font.setUnderline(b);
    this->setFont(font);
}

void CustomLabel::modifyFontByCheckboxSize(QString sizeString)
{
    QFont font= this->font();
    int size=sizeString.toInt();

    if(size==0)
        font.setPointSize(12);
    else
        font.setPixelSize(size);
    this->setFont(font);
}


