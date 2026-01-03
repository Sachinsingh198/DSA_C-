/*
TEMPLATE:
class --> object
Template --> Class
Why to use templates?
Generic Programming

Syntax==>
template <class T> 
class vector{
            T* arr;
            }
*/

#include <iostream>

class vector {
    
    public:
    int * arr ;
    int size;
    vector(int m){
        size = m;
        arr = new int[size];
    }
    int dotProduct(vector &v){
        int d = 0;
        for(int i = 0; i<size; i++){
            d+= this->arr[i]* v.arr[i];
        }
        return d;
    }
};
int main(){
    vector v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 1;
    v1.arr[2] = 5;
    v1.arr[3] = 3;
    v1.arr[4] = 2;
    vector v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 1;
    v2.arr[2] = 5;
    v2.arr[3] = 3;
    v2.arr[4] = 2;
    int a = v1.dotProduct(v2);
    std::cout<<a<<std::endl;
    return 0;
}