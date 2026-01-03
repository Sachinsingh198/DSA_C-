#include <iostream>
#define n 100
class stack{
    public:
    int* arr ;
    int top;
    stack(): arr(new int[n]), top(-1){}
    void push(int x){
        if(top == n-1){
            std::cout<<"Stack overflow!"<<std::endl;
            return;
        }
        // top++;
        // arr[top] = x;
        arr[++top] = x;
    }
    void pop(){
        if(top == -1){
            std::cout<<"Stack underflow!"<<std::endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top == -1){
            std::cout<<"No element in the stack!"<<std::endl;
            return -1;
        }
        std::cout<<"Top: "<<arr[top]<<std::endl;
        return arr[top];
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};
int main(){
        stack s;
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.Top();
        s.pop();
        return 0;
}