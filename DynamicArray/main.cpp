#include <iostream>
#include "DynamicArray.h"
#include "Persona.h"

int main() {
    //Arreglo de enteros
    DynamicArray<int> i;
    i.pushback(5);
    i.pushback(10);
    i.pushback(15);
    std::cout << "Elementos de un array dinamico de enteros: ";
    i.print();
    //Arreglo de enteros
    DynamicArray<float> d;
    d.pushback(3.14);
    d.pushback(2.718);
    std::cout << "Elementos de un array dinamico de flotantes: ";
    d.print();
    //Arreglo de enteros
    DynamicArray<std::string> s;
    s.pushback("Ciencia");
    s.pushback("Computacion");
    std::cout << "Elementos de un array dinamico de strings: ";
    s.print();

    Persona p1(18,"Daniel","Quinones");
    Persona p2(15,"Marcelo","Murillo");
    Persona p3(28,"Ivan","Lordo");
    //Arreglo de enteros
    DynamicArray<Persona> p;
    p.pushback(p1);
    p.pushback(p2);
    p.pushback(p3);
    std::cout << "Elementos de un array dinamico de la clase Persona: ";
    p.print();

    return 0;
}






