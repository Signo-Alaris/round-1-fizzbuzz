// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Just a few dependencies for the parallel version + time : - )
#include <thread>
#include <atomic>
#include <ctime>
#include <iomanip>

//Helper Functions:
void Fizz(int);
void Buzz(int);

//Condition Variables:
std::atomic<bool> fizz = 0; //indicates fizz has not triggered
std::atomic<bool> buzz = 0; //indicates buzz has not triggered

int main()
{
	int n = 100; //number to fizzbuzz up to
	char linear_or_parallel = 'y'; //y for linear, n for parallel

	//User Inputs desired n and whether parallel or linear:
	std::cout << "Input desired number to fizz to: ";
	std::cin >> n;
	std::cout << "Parallel (y/n): ";
	std::cin >> linear_or_parallel;
	std::cout << "\n";

	//starting a timer:
	std::clock_t c_start = std::clock();
	auto t_start = std::chrono::high_resolution_clock::now();

	//Linear Implementation - Very Complex.
	if (linear_or_parallel != 'y') {
		int ifizz, ibuzz;
		for (int i = 0; i <= n - 1; i++) {
			ifizz = i % 3;
			ibuzz = i % 5;
			if (ifizz && ibuzz == 0) {
				std::cout << "FizzBuzz";
			}
			else if (ifizz == 0) {
				std::cout << "Fizz";
			}
			else if (ibuzz == 0) {
				std::cout << "Buzz";
			}
			else std::cout << i;

			std::cout << '\n';
		}
	}
	else {
		//Parallel Implementation - Very Simple.
		for (int i = 0; i <= n - 1; i++) {
			std::thread t1(Fizz, i);	//check for fizz
			std::thread t2(Buzz, i);	//check for buzz (in parallel)
			//finish checks:
			t1.join();
			t2.join();
			//if checks didnt fizz or buzz, print number, etc.:
			if (fizz && buzz)
			{
				std::cout << "FizzBuzz";
			}
			else if (fizz == 1)
			{
				std::cout << "Fizz";
			}
			else if (buzz == 1)
			{
				std::cout << "Buzz";
			}
			else
			{
				std::cout << i;
			}
			std::cout << '\n';
			//reset the flags for next loop
			fizz = 0;
			buzz = 0;
		}
	}

	//checking the time taken:
	std::clock_t c_end = std::clock();
	auto t_end = std::chrono::high_resolution_clock::now();
	std::cout << std::fixed << std::setprecision(2) << "\nCPU time used: "
		<< 1000.0 * (c_end - c_start) / CLOCKS_PER_SEC << " ms\n"
		<< "Wall clock time passed: "
		<< std::chrono::duration<double, std::milli>(t_end - t_start).count()
		<< " ms\n";
}

void Fizz(int i) {
	if (i % 3 == 0) {
		fizz = 1; //update the global atomic flag bool
	}
		
}

void Buzz(int i) {
	if (i % 5 == 0) {
		buzz = 1; //update the global atomic flag bool
	}	
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file