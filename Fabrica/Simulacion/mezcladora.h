#ifndef MEZCLADORA_H
#define MEZCLADORA_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>

class Mezcladora : public QThread {
    int cantMin;
    int cantMax;
    int velocidad;
    int mezcla;
public:

    Mezcladora(){
        cantMax = 0;
        cantMin = 0;
        velocidad = 0;
        mezcla = 0;
    }


    void run(){

    }
};

#endif // MEZCLADORA_H
