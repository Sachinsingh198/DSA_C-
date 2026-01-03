
// //Right Half Pattern
//
// #include <iostream>
// void printStar(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout << "* "<<" ";
//         }
//         std::cout << std::endl;
//     }
// }
// void printNumber(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout << "j "<<" ";
//         }
//         std::cout << std::endl;
//     }
// }
// void printUpperCase(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout <<(char(j + 64))<<" ";
//         }
//         std::cout << std::endl;
//     }
// }
// void printLowerCase(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout <<(char(j + 96))<<" ";
//         }
//         std::cout << std::endl;
//     }
// }

// int main(){
//     int a;
//         std::cout << "Enter the number of rows here: ";
//         std::cin >> a;
//         printLowerCase(a);
//     return 0;
// }

// //Left Half Pattern

// #include <iostream>
// void printNumber(int a){
//         for (int i = 0; i < a; i++) {  // Loop from 0 to n-1
//         for (int j = 0; j < a - i - 1; j++) {  // Print spaces
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= i; j++) {  // Print stars
//             std::cout << j<<" ";
//             //std::cout << i<<" ";
//         }
//         std::cout << std::endl;
//     }
// }
// void printStar(int a){
//         for (int i = 0; i < a; i++) {  // Loop from 0 to n-1
//         for (int j = 0; j < a - i - 1; j++) {  // Print spaces
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= i; j++) {  // Print stars
//             std::cout <<"* ";
//             //std::cout << i<<" ";
//         }
//         std::cout << std::endl;
//     }
// }
// void printUpperCase(int a){
//         for (int i = 0; i < a; i++) {  // Loop from 0 to n-1
//         for (int j = 0; j < a - i - 1; j++) {  // Print spaces
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= i; j++) {  // Print stars
//             std::cout <<(char(j + 64))<<" ";
//             //std::cout << i<<" ";
//         }
//         std::cout << std::endl;
//     }
// }
// void printLowerCase(int a){
//         for (int i = 0; i < a; i++) {  // Loop from 0 to n-1
//         for (int j = 0; j < a - i - 1; j++) {  // Print spaces
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= i; j++) {  // Print stars
//             std::cout <<(char(j + 96))<<" ";
//             //std::cout << i<<" ";
//         }
//         std::cout << std::endl;
//     }
// }

// int main(){
//     int n;
//     std::cout<<"Enter the number of rows here: ";
//     std::cin>>n;
//     printNumber(n);
//     printLowerCase(n);
// }

// //Equilateral Triangle
// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;
//     for(int i = 1; i<= n; i++){
//         for(int j = 1; j<= n - i; j++){
//             std::cout<<" ";
//         }
//         for(int j = 1; j<=i; j++){
//             std::cout<<"* ";
//         }
//         std::cout<<std::endl;
//     }
// }
// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;
//     for(int i = 1; i<= n; i++){
//         for(int j = n; j>=i; j--){
//             std::cout<<" ";
//         }
//         for(int j = 1; j<=i; j++){
//             std::cout<<"* ";
//         }
//         std::cout<<std::endl;
//     }
// }

// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;
//     for(int i = 1; i<= n; i++){
//         for(int j = 1; j<=i; j++){
//             std::cout<<2*j-1<<" ";
//         }
//         std::cout<<std::endl;
//     }
// }

// Floyd's Triangle
//  #include <iostream>
//  int main(){
//      int n;
//      std::cout<<"Enter the number of rows: ";
//      std::cin>>n;
//      int a = 1;
//      for(int i = 1; i<=n;i++){

//         for(int j = 1; j<= i;j++){
//             std::cout<<a<<" ";
//              a++;
//         }
//         std::cout<<std::endl;
//     }
// }
// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;

//     for(int i = 1; i<=n;i++){

//         for(int j = 1; j<= i;j++){
//             if((i + j)% 2 == 0) {
//                 std::cout<<"1 ";
//             }
//             else{
//                 std::cout<<"0 ";
//             }

//         }
//         std::cout<<std::endl;
//     }
// }

// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<= i;j++){
//             std::cout<<"* ";
//         }
//         std::cout<<std::endl;
//     }
//     return 0;
// }

// //Pyramid * pattern

// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<= n - i; j++){
//              std::cout<<" ";
//         }
//         for(int j = 1; j<= i;j++){

//              std::cout<<" *";
//         }
//         std::cout<<std::endl;
//     }
//     return 0;
// }

// //lS
// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter thr number of rows: ";
//     std::cin>>n;
//     for(int i = 1; i<= n; i++){
//         for(int j = n; j>=1; j--){
//             std::cout<<" ";

//         }
//         for(int j = i; j>=1; j--){
//             std::cout<<"* ";

//         }
//         std::cout<<std::endl;
//     }
// }

// //LIne Star
// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;
//     int mid = (n/2) + 1;
//     for (int i = 1; i<= n; i++){
//         for(int j = 1; j<= n; j++){
//             if(i == mid ||  j == mid){
//                 std::cout<<" *";
//             }
//             else{
//                 std::cout<<"  ";
//             }
//     }
//     std::cout<<std::endl;
//     }
//     }

// // //Star Cross
// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;
//     for(int i = 1; i<= n; i++){
//         for(int j = 1; j<=n; j++){
//             if((i + j )== n + 1||i == j){
//                 std::cout<<"* ";
//     }
//     else
//     std::cout<<"  ";
// }
// std::cout<<"\n";
// }
// }

// //Staar Triangle reverse
// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;
//     for(int i = 1; i<= n; i++){
//         for(int j = 1; j <= n; j++){
//             if((i + j)<= n){
//                 std::cout<<"  ";
//             }
//             else
//             std::cout<<"* ";
//         }
//         std::cout<<std::endl;
//     }
// }

// //Star triangle reverse
// #include <iostream>
// int main(){
//     int n;
//     std::cout<<"Enter the number of rows: ";
//     std::cin>>n;
//     for(int i = 1; i <= n; i++){
//          for(int j = 1; j<=n - i + 1; j++){//spaces
//             std::cout<<"  ";
//         }
//         for(int j = 1; j<=i; j++){//Stars
//             std::cout<<"* ";
//         }
//         std::cout<<std::endl;
//     }
// }

// Rhombus
// #include <iostream>
// int main()
// {
//     int n;
//     std::cout << "Enter the number of rows: ";
//     std::cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         { // spaces
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= n; j++)
//         { // Stars
//             std::cout << "* ";
//         }
//         std::cout << std::endl;
//     }
// }

