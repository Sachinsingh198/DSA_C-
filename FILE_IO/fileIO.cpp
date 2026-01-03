// #include <bits/stdc++.h>
#include <iostream>
#include <fstream>
/*
The useful classes for working with the files in C++ are:
    (if not using #include <bits/stdc++.h> as a header file)
    1. fstreambase
    2. ifstream --> derived from fstreambase 
    3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it, Primarily , there are 2 ways to open a file
    1. Using the constructor
    2. Using the member function open() of the class 
*/
int main(){
    std::string st =  "Hello, What's up!";
    std::string st2;
    //Opening files using constructor
    // std::ofstream out("sample.txt"); // Write operation
    // out<<st;

    //Opening files using constructor and reading to it
    std::ifstream in("sample.txt"); // Read operation
    // in>>st2; // in this particular case it will not read the string after the space or a newline character , //So str2 = this, {int this case}
    //To deal with this we us getline(in, str2) function;

    std::getline(in, st2); //reads the complete line with a space as well as a newline character. 
    std::cout<<st2<<std::endl;
    in.close();
    return 0;
}