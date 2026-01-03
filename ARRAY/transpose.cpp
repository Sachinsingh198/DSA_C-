#include <iostream>
#include <algorithm>
#define n 4
void Transpose(int A[][n]){
    for(int i = 0; i<n ; i++){
        for(int j = i + 1; j<n ; j++){
            std::swap(A[i][j],A[j][i]);
        }
    }
    std::cout<<"The transpose of the matrix is : ";
    std::cout<<std::endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
             std::cout<<A[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    
}
int main(){
    int arr[4][4];
    std::cout<<"Enter Matcix to perform the transformation: "<<std::endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
        std::cin>>arr[i][j];
}
    }
std::cout<<"You entered the matrix as: "<<std::endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
             std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
Transpose(arr);
return 0;
    
}