#include <iostream>
#include <vector>

/*Given an array there is an element which is repeating more than (n / 2) times*/

/*Here we can use Bayer-Moore Majority vote algorithm
This algorithm states that take the very first element
*/
int majorityElement(std::vector<int>& arr){
    int count = 0;
    int element = arr[0];
    for(auto it: arr){
        if(count == 0){
            element = it;
        }
        if(it == element){
            count++;
        }else {
            count--;
        }
    }
    return element;
}
int main(){

    std::vector<int> arr = {5, 5, 0, 0, 5, 4, 5, 3};
    int majority = majorityElement(arr);
    std::cout<<majority<<std::endl;
}