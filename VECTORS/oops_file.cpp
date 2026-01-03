// // /*Design C++ classes with static members, methods with default arguments, and friend functions. (For example, design matrix and vector classes with static allocation, and a friend function to do matrix-vector multiplication).*/
// // #include <iostream>
// // #define N 3  // For simplicity, we'll use 3x3 matrices

// // class Vector;  // Forward declaration

// // class Matrix {
// // private:
// //     int data[N][N];
// //     static int instanceCount;

// // public:
// //     Matrix() {
// //         // Initialize matrix elements to zero by default
// //         for(int i = 0; i < N; i++) {
// //             for(int j = 0; j < N; j++) {
// //                 data[i][j] = 0;
// //             }
// //         }
// //         instanceCount++;
// //     }

// //     static int getInstanceCount() {
// //         return instanceCount;
// //     }

// //     void setValue(int row, int col, int value) {
// //         if (row < N && col < N) {
// //             data[row][col] = value;
// //         }
// //     }

// //     friend Vector multiply(const Matrix& m, const Vector& v);
// // };

// // int Matrix::instanceCount = 0;
// // class Vector {
// // public:
// //     int data[N];
// //     static int instanceCount;

// //     Vector(int defaultValue = 0) {
// //         for(int i = 0; i < N; i++) {
// //             data[i] = defaultValue;
// //         }
// //         instanceCount++;
// //     }

// //     static int getInstanceCount() {
// //         return instanceCount;
// //     }

// //     void setValue(int index, int value) {
// //         if (index < N) {
// //             data[index] = value;
// //         }
// //     }

// //     // Public accessor method
// //     int getData(int index) const {
// //         if (index < N) {
// //             return data[index];
// //         }
// //         return -1; // Error value if index is out of bounds
// //     }

// //     friend Vector multiply(const Matrix& m, const Vector& v);
// // };

// // int Vector::instanceCount = 0;

// // Vector multiply(const Matrix& m, const Vector& v) {
// //     Vector result;

// //     for(int i = 0; i < N; i++) {
// //         result.data[i] = 0;
// //         for(int j = 0; j < N; j++) {
// //             result.data[i] += m.data[i][j] * v.data[j];
// //         }
// //     }

// //     return result;
// // }
// // int main() {
// //     Matrix m;
// //     m.setValue(0, 0, 1);
// //     m.setValue(0, 1, 2);
// //     m.setValue(0, 2, 3);
// //     m.setValue(1, 0, 4);
// //     m.setValue(1, 1, 5);
// //     m.setValue(1, 2, 6);
// //     m.setValue(2, 0, 7);
// //     m.setValue(2, 1, 8);
// //     m.setValue(2, 2, 9);

// //     Vector v(1);
// //     v.setValue(0, 1);
// //     v.setValue(1, 2);
// //     v.setValue(2, 3);

// //     Vector result = multiply(m, v);

// //     std::cout << "Resultant Vector: ";
// //     for(int i = 0; i < N; i++) {
// //         std::cout << result.data[i] << " ";
// //     }
// //     std::cout << std::endl;

// //     std::cout << "Matrix Instances: " << Matrix::getInstanceCount() << std::endl;
// //     std::cout << "Vector Instances: " << Vector::getInstanceCount() << std::endl;

// //     return 0;
// // }

// #include <iostream>
// int main(){
//     int n = 3.0;
//     n = static_cast<float>(n);
//     std::cout<<n;

#include <iostream>
#include <string>
#include <typeinfo>

int main(){
int x = 143;
std::string dtr = std::to_string(x);
std::cout << dtr << std::endl;
std::cout<<typeid(dtr).name()<<std::endl;
return 0;
}