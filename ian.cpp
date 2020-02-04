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