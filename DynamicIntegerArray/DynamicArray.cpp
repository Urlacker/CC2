#include "DynamicArray.h"

DynamicArray::DynamicArray(){
    this->size = 0;
    data = new int[0];
}



DynamicArray::DynamicArray(int arr[],int size){
    this->size = size;
    data = new int[size];
    for(int i=0 ; i<size ; i++){
        data[i] = arr[i];
    }
}


DynamicArray::DynamicArray(const DynamicArray &o){
    this->size = o.size;
    data = new int[o.size];
    for(int i=0 ; i<size ; i++){
        data[i] = o.data[i];
    }
}


void DynamicArray::set_data(int i,int pos){
    if(pos < size){
        data[pos] = i;
    }
}


int DynamicArray::get_data(int pos){
    if(pos < size)
        return data[pos];
    else
        std::cout<<"\nValor no encontrado\n";
        return INT_MIN;
}


void DynamicArray::print() const{
    std::cout << "[ ";
    for(int i=0 ; i<size ; i++){
        std::cout<< data[i]<<" ";
    }
    std::cout <<"]"<< std::endl;
}


void DynamicArray::pushback(int value){
    int *aux;
    aux = new int[size+1];
    for(int i=0 ; i<size ; i++){
        aux[i] = data[i];
    }
    aux[size] = value;
    delete []data;
    data = aux;
    aux = nullptr;
    size++;
}


void DynamicArray::insert(int value, int pos){
    int *aux;
    aux = new int[size+1];
    size++;
    for(int i=0 ; i<pos; i++){
        aux[i] = data[i];
    }
    aux[pos] = value;
    for(int i = pos+1 ; i<size; i++){
        aux[i] = data[i-1];
    }
    delete []data;
    data = aux;
    aux = nullptr;
}


void DynamicArray::remove(int pos){
    int *aux;
    aux = new int[size-1];
    for(int i=0 ; i<pos ; i++){
        aux[i]=data[i];
    }
    size--;
    for(int i=pos+1 ; i<=size; i++){
        aux[i-1]=data[i];
    }
    delete []data;
    data = aux;
    aux = nullptr;
}


DynamicArray::~DynamicArray(){
    delete []data;
}