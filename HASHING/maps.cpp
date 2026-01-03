// #include <map>
// #include <iostream>
// #include <iomanip>
// int main(){
//     // std::map<std::string, int> directory; //by default, ascending order.
//     std::map<std::string, int, std::greater<std::string>> directory; // in descending order.
    
//     directory["naman"] = 2345;
//     directory["animesh"] = 64574;
//     directory["animal"] = 509350;
//     for(auto element: directory){
//         std::cout<<element.first<< "  "<<element.second << std::endl;
//     }

//     std::cout<<std::endl;

//     directory.insert(std::make_pair("animesh",3245));// first check the key value "animesh" in the directory, if founded, then no changes are performed.
//     directory["animesh"] = 23424;//updates the key value of the key "animesh" in the directory
//     // for(auto element: directory){
//     //     std::cout<<element.first<<"  "<<element.second<< std::endl;
//     // }

//     //Declaring an iterator
//     // std::map<std::string, int>::iterator itr; // for a forward iterator
//     std::map<std::string, int>::reverse_iterator itr; //For a reverse iterator
//     for(itr = directory.rbegin(); itr != directory.rend(); itr++){
//         std::cout<<itr->first<<" "<<itr->second<<std::endl;
//     }
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <math.h>
bool is_pallindrom(int x){
    int new_num;
    int reverse = 0;
    int count = 0;
    while(not x){
        
      int remainder = x % 10;
      reverse = reverse * 10 +remainder;
      x = x/10;
    }
}
int main(){
    return 0;
}