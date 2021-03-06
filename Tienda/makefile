all: compilar
compilar: producto tienda menu main
		g++ -o salida producto.o tienda.o menu.o main.o
producto: producto.cpp producto.h
		g++ -c producto.cpp
tienda: tienda.cpp tienda.h
		g++ -c tienda.cpp
menu: menu.cpp menu.h
		g++ -c menu.cpp
main: main.cpp menu.h tienda.h producto.h 
		g++ -c main.cpp