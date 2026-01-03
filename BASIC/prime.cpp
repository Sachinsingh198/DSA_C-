
// #include <iostream>
// using namespace std;

// int main() {
//     unsigned long n, j;
//     bool isPrime = true;  // Assume the number is prime

//     cout << "Enter any number: ";
//     cin >> n;

//     if (n < 2) {
//         cout << "Numbers less than 2 are not considered prime." << endl;
//         return 0;
//     }

//     for (j = 2; j <= n / 2; j++) {
//         if (n % j == 0) {
//             cout << "It is not a prime number. It is divisible by " << j << endl;
//             isPrime = false;
//             break;
//         }
//     }

//     // Check if the loop completed without finding a divisor
//     if (isPrime) {
//         cout << "This is a prime number." << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
bool isPrime(int num){
    if(num<=1){
        return false;
    }

    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cout <<"Enter any number: ";
    cin>>number;
    if(isPrime(number)){
        cout<< number<< " is a Prime Number"<< endl;
    }
    else{
        cout<<number<<" is not a Prime Number"<< endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
#include <conio.h> //for getche()
int main()
{
const unsigned char WHITE = 219; //solid color (primes)
const unsigned char GRAY = 176; //gray (non primes)
unsigned char ch;
//for each screen position
for(int count=0; count< 80*25-1 ; count++)
{
ch = WHITE; //assume it’s prime
for(int j=2; j<count; j++) //divide by every integer from
if(count%j == 0) //2 on up; if remainder is 0,
{
ch = GRAY; //it’s not prime
break; //break out of inner loop
}
cout << ch; //display the character
}
getch(); //freeze screen until keypress i
return 0;
}