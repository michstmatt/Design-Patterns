#include "customlineedit.h"

void CustomLineEdit::showFont(QFont qf)
{
    this->setText(qf.family());
}
