# Coding Challenge 1 - FizzBuzz
Challenge: Write a program that prints the numbers from 1 to 100 and for multiples of '3' print "Fizz" instead of the number, for the multiples of '5' print "Buzz" instead of the number and for multiples of both '3' and '5' print "FizzBuzz".
## Gearoid
```
#include <iostream>
#include <string>

using namespace std;

string fizzbuzz(int in){
    string result = "";
    if(in%3==0)
        result += "Fizz";
    if(in%5==0)
        result += "Buzz";
    return result;
}

int main()
{
    for(int i = 1; i < 100; i++){
        string current = fizzbuzz(i);
        if(current != "")
            cout<<fizzbuzz(i)+"\n";    
    }
    
    return 0;
}
```
Sample Output:

**Pros**
1. Simple
1. Uses functional logic

**Cons**
1. Doesn't actually print "the numbers from 1 to 100"
1. Variable names are vague - "in", "current"

## Ian
```
// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//------------------------------------------------ -
//C++ Coding Challenge Round 1 - Fizz Buzz
//------------------------------------------------ -
//Write a program that prints the numbers from 1 to 100 and for multiples of '3' print "Fizz" instead of the number, for the multiples of '5' print "Buzz" instead of the number and for multiples of both '3' and '5' print "FizzBuzz".
//
//Points will mostly be awarded for performance, generality, readability, comments(if needed) and dependencies(the fewer the better).

#include <iostream>

/// <summary>Use to identify if a number is divisable by another number.</summary>
/// <param name="number">Number to be divided.</param name>
/// <param name="divisor">Indicates which number we're checking the multiple of.</param name>
/// <returns>True if the number is divisable by the divisor, else False.</returns>
bool checkDivisible(int number, int divisor)
{
    if (number % divisor == 0)
        return true;
    else
        return false;
}


int main()
{
    for (int i = 0; i <= 100; i++)
    {
        
        bool isFizz = checkDivisible(i, 3);
        bool isBuzz = checkDivisible(i, 5);
        bool isFizzBuzz = isFizz && isBuzz;

        if (isFizzBuzz)
            std::cout << "FizzBuzz " <<  i << std::endl;
        else if (isBuzz)
            std::cout << "Buzz " << i << std::endl;
        else if (isFizz)
            std::cout << "Fizz " << i << std::endl;
    }
        
}
```
Sample Output:

**Pros**
1. Simple
1. Uses functional logic
1. Good use of comments
1. Condition-Variable combos read like English
1. Lightweight - only has 1 dependency

**Cons**
1. Doesn't actually print "the numbers from 1 to 100", also prints "Fizz $number" when the result should be "Fizz"

## Jarek
```
#include <iostream>

int main()
{
    for(int i = 1; i <= 100; ++i)
    {
        std::string msg = "";
        msg.append((i % 3 == 0) ? "Fizz" : "");
        msg.append((i % 5 == 0) ? "Buzz" : "");
        msg.empty() ? printf("%i\n", i) : printf("%s\n", msg.c_str());
    }
}
```
Sample Output:

**Pros**
1. Simple
1. Solves the challenge
1. Lightweight - only has 1 dependency

**Cons**
1. No comments
1. Low readability

## Matt
```
```
Sample Output:

**Pros**
1. Simple
1. Uses functional logic
1. Good use of comments
1. Condition-Variable combos read like English

**Cons**
1. Doesn't actually print "the numbers from 1 to 100", also prints "Fizz $number" when the result should be "Fizz"

## Trevor
```
```
Sample Output:

**Pros**
1. Simple
1. Uses functional logic
1. Good use of comments
1. Condition-Variable combos read like English

**Cons**
1. Doesn't actually print "the numbers from 1 to 100"