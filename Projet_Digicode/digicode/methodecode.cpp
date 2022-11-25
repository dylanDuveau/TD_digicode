#include <QDebug>
#include "digicode.h"
#include "methodecode.h"

#define TAILLE_CODE 4

methodeCode::methodeCode(const int _tailleCode, QObject *_parent) :
    QObject(_parent),
    tailleCode(_tailleCode)

{
    combinaison = new quint8[tailleCode];
    for(int i = 0 ; i < tailleCode ; i++)
        combinaison[i]=0;

    lecode = new digicode  (this);
    lecode->show();
}

methodeCode::~methodeCode()
{
    delete[] combinaison;
    delete lecode;
}

