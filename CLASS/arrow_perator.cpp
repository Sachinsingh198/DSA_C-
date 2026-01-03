#include <iostream>
class Demo{
    public:
    int x;
    void display(void);
};
void Demo::display(void){
    std::cout<<"x = "<<x<<std::endl;
}
int main(){
    Demo obj;
    obj.x = 10;
    Demo* ptr = &obj;
    ptr->display();//obj.display()
    return 0;
}