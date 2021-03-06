#ifndef PRODUCTO_H
#define PRODUCTO_H

class Producto{
    private:
        std::string nombre;
    public:
        Producto();
        Producto( std::string );
        void mostrarProducto( int );
};

#endif