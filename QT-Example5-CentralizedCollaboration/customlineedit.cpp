#include "customlineedit.h"

void CustomLineEdit::myEditingFinished()
{
    emit iChanged(this);
}
