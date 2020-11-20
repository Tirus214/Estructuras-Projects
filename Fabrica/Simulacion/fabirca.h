#ifndef FABIRCA_H
#define FABIRCA_H
#include "almacen.h"
#include "planificador.h"
#include "carrito.h"
#include "mezcladora.h"
#include "banda.h"
#include "horno.h"


struct Fabirca : public QThread{
    Planificador * planificador;
    Almacen * almacen;
    Carrito * carro;
    Mezcladora * mezcaldora1;
    Mezcladora * mezcaldora2;
    Mezcladora * mezcaldora3;
    Banda * banda1;
    Banda * banda2;
    Horno * horno;

public:
    Fabirca(){
        planificador = new Planificador();
        almacen = new Almacen();
        carro = new Carrito();
        mezcaldora1 = new Mezcladora();
        mezcaldora2 = new Mezcladora();
        mezcaldora3 = new Mezcladora();
        banda1 = new Banda();
        banda2 = new Banda();
        horno = new Horno();
    }

};

#endif // FABIRCA_H
