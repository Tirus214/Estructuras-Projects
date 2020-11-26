#ifndef MEZCLADORA_H
#define MEZCLADORA_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>

class Mezcladora : public QThread {
public:
    int cantMin;
    int cantMax;
    int velocidad;

    Mezcladora(int _cantMin, int _cantMax){
        this->cantMax = _cantMax;
        this->cantMin = _cantMin;
    }

    void run(){

    }
};

#endif // MEZCLADORA_H
