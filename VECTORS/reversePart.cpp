#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
void reverse (int arr[], int i , int j){
    while(i < j){
        swap(arr[i], arr[j]);//built in function in c++ for swapping
        i++;
        j--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/4;
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    reverse(arr,3,8);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
