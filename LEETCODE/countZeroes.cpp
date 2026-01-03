#include <iostream>

/*count the number of trailing zeroes in n!*/
int trailing_zeroes(int n){
    int count = 0;
    while(n){
        n /= 5;
        count+=n;
    }
    return count;
}
int main(){
std::cout<<trailing_zeroes(10)<<std::endl;

}