#ifndef CARRITO_H
#define CARRITO_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>

class Carrito : public QThread{
    QString ingrediente;
    int cantMax;
    int cantMin;
    int velocidad;
public:
    Carrito(){
        cantMax = 0;
        cantMin = 0;
        velocidad = 0;
    }
};

#endif // CARRITO_H
