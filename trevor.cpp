/*
FizzBuzz.cpp - Trevor
*/
#include <iostream>
using namespace std;

int main() {
    int num = 1;

    while (num < 101) {
        if (((num%3)==0) && ((num%5) == 0)) {     //Check if value is divisible by 3 & 5
            cout << "FizzBuzz" << endl;
        } else if ((num%3) == 0) {                //Check if value is divisible by 3
            cout << "Fizz" << endl;
        } else if ((num%5) == 0) {                //Check if valueis divisible by 5
            cout << "Buzz" << endl;
        } else {
            cout << num << endl;
        }

        num++;
    }
}