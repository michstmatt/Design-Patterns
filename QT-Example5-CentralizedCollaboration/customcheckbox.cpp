#include "customcheckbox.h"

void CustomCheckBox::myStateChanged(int)
{
    emit iChanged(this);
}
