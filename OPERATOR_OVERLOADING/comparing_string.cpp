// #include <iostream>
// #include <string.h>//for strcmp() ==> compare the strings
// class String{
//     enum{SZ = 80};
//     char str[SZ];
//     public:
//     String(){
//         strcpy(str,"");
//     }
//     String(char s[]){
//         strcpy(str,s);
//     }
//     void display(void){
//         std::cout<<str<<std::endl;
//     }
//     void getstr(void){
//         std::cin.get(str,SZ);
//     }
//     bool operator ==(String ss) const{
//         return (strcmp(str,ss.str)== 0) ? true :false;
//     }
// };
// int main(){
//     String s1 ="Sachin";
//     String s2 = "Singh";
//     String s3;
//     std::cout<<"Enter Sachin or Singh:";
//     s3.getstr();
//     if(s3 == s2){
//         std::cout<<"You typed Singh\n";
//     }
//     else if (s3 == s1){
//         std::cout<<"You typed Sachin\n";
//     }
//     else {
//         std::cout<<"You did'nt followed the instructions!\n";
//     }
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// class String{
//     enum { SZ = 80};
//     char str[SZ];
//     public:
//     String (){
//         strcpy(str,"");
//     }
//     String(char s[]){
//         strcpy(str,s);
//     }
//     void display(void){
//         std::cout<<str<<std::endl;
//     }
//     void getstr(void){
//         std::cin.get(str,SZ);
//     }
//     bool operator <(String ss) const {
//         return (strlen(str) > strlen(ss.str)) ? true : false;
//     }
//     bool operator ==(String ss) const {
//         return (strlen(str) == strlen(ss.str)) ? true : false;
//     }
// };

// int main(){
//     String s1 = "Hello";
//     String s2 = "Sachin";
//     String s3;
//     std::cout<<"Enter any String: ";
//     s3.getstr();
//     if(s1 == s2){
//         std::cout<<"Same number of elements in s1 and s2 \n";
//     }
//     else if (s2 == s3){
//         std::cout<<"Same number of elements in s2 and s3 \n";
//     }
//     else if (s3 == s1){
//         std::cout<<"Same number of elements in s3 and s1\n";
//     }
//     else if (s1 < s2){
//         std::cout<<"s2 > s1\n";
//     }
//         else if (s2 < s3){
//         std::cout<<"s2 < s3\n";
//     }
//         else {
//         std::cout<<"s1 < s2\n";
//     }
//     return 0;
// }

#include <iostream>
#include <string.h>
int main(){
    char name[] = "Sachin";
    char surName[] = " Singh";
    char temp[23];
    // strcat(name, surName);//concatenate strings name and surname and assingn the value to name string
    strcpy(temp,name);//Copy the name string's value "Sachin" in temp
    std::cout<<strlen(name)<<"\t"<<strlen(surName)<<std::endl;//Give the value of length of the string;
    std::cout<<strcat(name, surName)<<std::endl;
    std::cout<<strcmp(name,surName)<<std::endl;  //compare strng name and surName
    //std::cout<<memcmp;
    std::cout<<strcspn(temp,surName)<<std::endl;
    std::cout<<name<<std::endl; //
    
}