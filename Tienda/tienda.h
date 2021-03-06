#ifndef TIENDA_H
#define TIENDA_H

#include "producto.h"

const int SIZE = 10;

class Tienda{
    private:
        Producto listaProductos[ SIZE ];
        std::string nombre;
        std::string nombreBoss;
    public:
        Tienda();
        void setProducto( int, Producto );
        void setNombre( std::string );
        void setNombreBoss( std::string );
        void mostrarTodosLosProductos( int );
};

#endif