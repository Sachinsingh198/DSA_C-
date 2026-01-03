// //By using an extra array
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<"  ";
//     }
//     cout<<endl;
//     int brr[n];
//     for(int i = 0; i< n; i++){
//         brr[i] = arr[n - i - 1];
//     }
//     for(int i = 0; i< n ; i++){
//         cout<<brr[i]<<"  ";
//     }
// return 0;
// }

//Without using an extra array;

#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/4;
    int i = 0, j = n - 1; 
    while(i < j){
        swap(arr[i], arr[j]);//built in function in c++ for swapping
        i++;
        j--;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
