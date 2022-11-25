#ifndef METHODECODE_H
#define METHODECODE_H

#include <QObject>

class digicode;


class methodeCode : public QObject
{
    Q_OBJECT
public:
    explicit methodeCode(const int _tailleCode = 4, QObject *_parent = nullptr);
    ~methodeCode();

private:
    const int tailleCode;
    quint8 *combinaison;
    int codeSecret;
    digicode *lecode;
};

#endif // METHODECODE_H
