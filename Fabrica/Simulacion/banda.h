#ifndef BANDAEH_H
#define BANDAEH_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "cola.h"

class Banda : public QThread{
    Cola * cola;
    int cantMax;
    int index;
    int velocidad;
public:
    Banda(){
        cola = new Cola();
        cantMax = 10;
        index = 0;
        velocidad = 10;
    }
};

#endif // BANDAEH_H
