#include "customfontcombobox.h"

void CustomFontComboBox::myCurrentFontChanged(const QFont&)
{
    emit iChanged(this);
}
