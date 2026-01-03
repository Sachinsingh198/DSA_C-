// /*Array*/
// #include <iostream>
// int main(){
//     int arr[5];

//     for(int i = 0; i<5; i++){

//         std::cin>>arr[i];
//     }
//     //Sizeof Operator
//     std::cout<<sizeof(arr)<< std::endl;//Gives the number of Bites used by an Array
//     std::cout<<sizeof(arr)/sizeof(arr[0])<< std::endl;//Gives the actual size of the arrya
//     std::cout<<sizeof(int)<< std::endl;//Here int is the data typr of array which exctly contain four bites

//     for(int i = 0;i <sizeof(arr)/sizeof(int);i++){
//         std::cout<< arr[i];
//         std::cout<<" ";
//     }

//     return 0;
// }

// //Sum of an Array
// #include <iostream>
// int main(){
//     int arr[5];
//     for(int i = 0; i<5; i++){

//         std::cin>>arr[i];
//     }

// for(int i = 0;i <sizeof(arr)/sizeof(int);i++){
//         std::cout<< arr[i];
//         std::cout<<" ";
//     }
// std::cout<<std::endl;
//     int sum = 0;
//     for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
//         sum = sum + arr[i];
//     }
//     std:: cout<<"sum = "<<sum<<std::endl;
//     int product = 1;

//     for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
//         product = product * arr[i];
//     }
//     std:: cout<<"product = "<<product<<std::endl;

// }

// Finding an element x in an array
//  #include <iostream>
//  int main(){
//  int arr[] = {1,87,5,4,6,9,8,4,25,44,78};
//      int x;

//     std:: cout<<"The array you entered is :"<<std::endl;
// for(int i = 0;i <sizeof(arr)/sizeof(int);i++){
//         std::cout<< arr[i];
//         std::cout<<" ";
//     }
//     std::cout<<std::endl;
//    std:: cout<<"Enter any number: ";
//    std::cin>>x;
//    bool flag = false;// false means absent
//    for(int i = 0; i< sizeof(arr)/sizeof(arr[0]); i++){
//     if(arr[i] == x){
//        flag = true;//true means present
//        break;
//    }
// }
//  if(flag == true){
//     std:: cout<< x << " is present"<< std::endl;
//    }
//    else
//     std:: cout<< x << " is not present"<< std::endl;
//     return 0;

// }

// Maximum number in an array
// #include <iostream>
// #include <limits.h>
// #include <algorithm>
// using namespace std;
// int main(){
// int arr[] = {1,87,5,4,6,9,8,4,25,44,78};
//     int x;

//     // int mx = arr[0];
//     int mx = INT_MIN;//Traditional way
//     int min = INT_MAX;
//     std:: cout<<"The array you entered is :"<<std::endl;
// for(int i = 0;i <sizeof(arr)/sizeof(int);i++){
//         std::cout<< arr[i];
//         std::cout<<" ";
//     }
//  std:: cout<<std:: endl;
// for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
//     if(arr[i] > mx){
//         // mx = arr[i];
//         mx = std::max(mx,arr[i]);// it is an alternative way to find the maximum  number in an array and it is must to include {using namespace } in the code to use that keyword
//     }
// }
// std:: cout<<mx << " is the greatest element in the array"<<std::endl;
// for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
//     if(arr[i] < min){
//         // min = arr[i];
//         min = std::min(mx,arr[i]);// it is an alternative way to find the maximum  number in an array and it is must to include {using namespace } in the code to use that keyword
//     }
// }std:: cout<<min << " is the smallest element in the array"<<std::endl;
//     return 0;

// }

// // Second Largst
// // Maximum number in an array
// #include <iostream>
// #include <limits.h>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 87, 5, 4, 6, 9, 8, 4, 25, 44, 78};
//     int x;
//     // int mx = arr[0];
//     int mx = INT_MIN; // Traditional way
//     int smx = INT_MIN;
//     ;

//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//     {
//         if (arr[i] > mx)
//         {
//             // mx = arr[i];
//             mx = std::max(mx, arr[i]); // it is an alternative way to find the maximum  number in an array and it is must to include {using namespace } in the code to use that keyword
//         }
//     }
//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//     {
//         if (smx < arr[i] && arr[i] != mx)
//         {
//             smx = arr[i];
//         }
//     }
//     std::cout << smx << " is the second largest element in the array" << std::endl;
//}


//Number of elements greater than x in the given array


#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 87, 5, 4, 6, 9, 8, 4, 25, 44, 78};
    int x = 10;
    int count = 0;
    for(int i = 0; i< sizeof(arr)/sizeof(int); i++){
        if(arr[i] > x){
            count++;
        }
    }
    std::cout<<count<<" elements are greater than "<<x<<std::endl;
    return 0;
}