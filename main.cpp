#include <iostream>
using namespace std;

int main() {
  int number = 2002;
  int reversedNumber = 0, remainder;
  int x = number;


  while(number != 0){
    remainder = number % 10;
    reversedNumber = reversedNumber*10 + remainder;
    number /=10;
  }
  
    if(reversedNumber == x){
        cout<< "is palindrome";
    }else{
        cout<< "not a palindrome";
    }
}


 