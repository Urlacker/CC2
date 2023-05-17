#include <iostream>
#include "DynamicArray.h"

int main() {

    DynamicArray i;
    i.pushback(5);
    i.pushback(10);
    i.pushback(15);
    std::cout << "Elementos en intArray: ";
    i.print();

    return 0;
}






