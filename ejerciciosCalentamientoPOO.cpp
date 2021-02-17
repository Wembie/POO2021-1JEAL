/*1. Escriba un programa que lea el precio de un producto y 
//muestre el precio del producto al aplicarle el IVA. 
//Defina una función que calcule el IVA y retorne el valor.*/

#include <iostream>

using namespace std;

float iva( float numero ){
    return numero * 1.19;
}

int main(){
    int float;
    int precioIva;
    string nombre;
    cout << "Ingrese el Nombre de un producto: ";
    cin >> nombre;
    cout << "Ingrese el precio de un producto: ";
    cin >> numero;
    cout << "Calculando iva..." << endl;
    precioIva = iva( numero );
    cout << "el precio del iva es: " << precioIva << endl;
    return 0;
}

/*2. Realice un programa que lea los siguientes datos de una 
persona: Edad: dato de tipo entero. Sexo: dato de tipo caracter.  
Altura en metros: dato de tipo flotante. Muestre los datos leidos.  
Desarrolle su programa usando funciones.*/

#include <iostream>

using namespace std;

void leerDatos( int edad, char sexo, float altura ){
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;
    return;
}

int main(){
    int edad = 18;
    char sexo = 'M';
    float altura = 1.86;
    leerDatos( edad, sexo, altura );
    return 0;
}

/*3. Escriba un programa pra guardar numeros telefonicos que muestre 
un menu con las siguientes opciones. Investigue como usar archivos de 
texto de tal manera que los contactos queden creados 
en un archivo de texto: 
    1. Crear(nombre,apellidos,telefono) 
    2. Agregar más contactos(nombre,apellidos,telefono) 
    3. Visualizar contactos*/

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void menu(){
    cout << "MENU AGENDA\n" << endl;
    cout << "1. Crear Nueva Agenda" << endl;
    cout << "2. Agregar mas contactos a la Agenda Actual" << endl;
    cout << "3. Visualizar contactos de la Agenda Actual" << endl;
    cout << "0. Salir\n" << endl;
    cout << "Ingrese una opcion: ";
    return;
}

/*
ios::out -> sobreescribir
ios::in -> leer
ios::app -> añadir
*/

void puntoUno(){
    ofstream file;
    file.open("agenda.txt", ios::out);
    if( file.fail() ){
        cout << "Nose pudo abrir el archivo";
        exit( 1 );
    }
    int cuantosAgregar, i, telefono;
    string nombre, apellido;
    cout << "\nCuantas personas desear crear?: ";
    cin >> cuantosAgregar;
    for( i = 0; i < cuantosAgregar; i++ ){
        cout << "Digita el Nombre de la persona " << i+1 << ": ";
        cin >> nombre;
        cout << "Digita el Apellido de " << nombre << ": ";
        cin >> apellido;
        cout << "Digita el telefono de " << nombre << ": ";
        cin >> telefono;
        file << "Nombre: " << nombre << ", " << "Apellido: " << apellido << ", " << "Telefono: " << telefono << "\n";
        cout << "\n";
    }
    file.close();
    cout << "\n";
    return;
}

void puntoDos(){
    ofstream file;
    file.open("agenda.txt", ios::app);
    if( file.fail() ){
        cout << "Nose pudo abrir el archivo";
        exit( 1 );
    }
    int cuantosAgregar, i, telefono;
    string nombre, apellido;
    cout << "\nCuantas personas desear agregar?: ";
    cin >> cuantosAgregar;
    for( i = 0; i < cuantosAgregar; i++ ){
        cout << "Digita el Nombre de la persona " << i+1 << ": ";
        cin >> nombre;
        cout << "Digita el Apellido de " << nombre << ": ";
        cin >> apellido;
        cout << "Digita el telefono de " << nombre << ": ";
        cin >> telefono;
        file << "Nombre: " << nombre << ", " << "Apellido: " << apellido << ", " << "Telefono: " << telefono << "\n";
        cout << "\n";
    }
    file.close();
    cout << "\n";
    return;   
}

void puntoTres(){
    ifstream file;
    string texto;
    file.open("agenda.txt", ios::in);
    if( file.fail() ){
        cout << "Nose pudo abrir el archivo";
        exit( 1 );
    }
    cout << "\nCONTACTOS DE LA AGENDA:\n\n";
    while( !file.eof() ){
        getline( file, texto );
        cout << texto << endl;
    }
    file.close();
    return;
}

int main(){
    int opcion;
    do{
        menu();
        cin >> opcion;
        switch( opcion ){
        case 0:
            cout << "\nSaliendo...";
            break;
        case 1:
            puntoUno();
            break;
        case 2:
            puntoDos();
            break;
        case 3:
            puntoTres();
            break;
        default:
            cout << "\nNumero invalido\n" << endl;
            break;
        }
    }while( opcion != 0 );
    return 0;
}
