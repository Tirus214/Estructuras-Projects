#ifndef PAQUETE_H
#define PAQUETE_H
#include <QApplication>

struct Paquete{
    QString nombre;
    int cantidadGalletas;


    Paquete(QString _nombre, int _cantidad){
        nombre = _nombre;
        cantidadGalletas = _cantidad;
    }
};

#endif // PAQUETE_H
