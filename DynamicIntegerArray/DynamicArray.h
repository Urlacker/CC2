#include<iostream>
#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_


class DynamicArray {
private:
    int *data;
    int size;
public:
    DynamicArray();
    DynamicArray(int arr[], int size);
    DynamicArray(const DynamicArray &o);
    ~DynamicArray();

    void set_data(int i, int pos);
    int get_data(int pos);
    void print() const;
    void pushback(int value);
    void insert(int value, int pos);
    void remove(int pos);
};
/*
template<typename T>

DynamicArray<T>::DynamicArray(){
    this->size = 0;
    data = new T[0];
}

template<typename T>

DynamicArray<T>::DynamicArray(T arr[],int size){
    this->size = size;
    data = new T[size];
    for(int i=0 ; i<size ; i++){
        data[i] = arr[i];
    }
}

template<typename T>

DynamicArray<T>::DynamicArray(const DynamicArray<T> &o){
    this->size = o.size;
    data = new T[o.size];
    for(int i=0 ; i<size ; i++){
        data[i] = o.data[i];
    }
}

template<typename T>

void DynamicArray<T>::set_data(T i,int pos){
    if(pos < size){
        data[pos] = i;
    }
}

template<typename T>

T DynamicArray<T>::get_data(int pos){
    if(pos < size)
        return data[pos];
    else
        std::cout<<"\nValor no encontrado\n";
        return INT_MIN;
}

template<typename T>

void DynamicArray<T>::print() const{
    std::cout << "[ ";
    for(int i=0 ; i<size ; i++){
        std::cout<< data[i]<<" ";
    }
    std::cout <<"]"<< std::endl;
}

template<typename T>

void DynamicArray<T>::pushback(T value){
    T *aux;
    aux = new T[size+1];
    for(int i=0 ; i<size ; i++){
        aux[i] = data[i];
    }
    aux[size] = value;
    delete []data;
    data = aux;
    aux = nullptr;
    size++;
}

template<typename T>

void DynamicArray<T>::insert(T value, int pos){
    T *aux;
    aux = new T[size+1];
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

template<typename T>

void DynamicArray<T>::remove(int pos){
    T *aux;
    aux = new T[size-1];
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

template<typename T>

DynamicArray<T>::~DynamicArray(){
    delete []data;
}
*/

#endif 
