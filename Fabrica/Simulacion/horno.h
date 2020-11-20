#ifndef HORNO_H
#define HORNO_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "bandeja.h"

class Horno : public QThread{
    Bandeja * bandejas[6];

public:
    Horno(){
        for (int i=0; i<6; i++) {
            bandejas[i] = new Bandeja();
        }
    }
};

#endif // HORNO_H
