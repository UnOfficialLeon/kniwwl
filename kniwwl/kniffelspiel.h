#ifndef KNIFFELSPIEL_H
#define KNIFFELSPIEL_H

#include "ui_kniffelspiel.h"

class KniffelSpiel : public QWidget, private Ui::KniffelSpiel
{
    Q_OBJECT

public:
    explicit KniffelSpiel(QWidget *parent = nullptr);
};

#endif // KNIFFELSPIEL_H
