// Demoing the FOR loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<array>//we will talk MUCH more about this in a couple of weeks 
#include <iostream>
#include<string> 
#include"Windows.h"

void firstSimpleForLoopDemo()
{
	for (int loopCounter = 5; loopCounter >= 0; loopCounter--) //don't put a semicolon here!
	{
		//the "body" of the loop
		std::cout << loopCounter << "..."; //print the updated value of the counter variable on every loop iteration

		//std::this_thread::sleep_for //we'll come back to this better way later (of sleeping) 
		Sleep(1000);

	}
	std::cout << "It's the FINAL COUNTDOWN\n";


	std::system("finalCountdown.wav");
}

void demoVariousForLoopThings()
{
	//another nice use of a for loop 
//this will be a "smart" for loop: 


	const std::string myName = "Seth Norman";

	for (char currentLetter : myName)
	{
		std::cout << currentLetter << "\n";
	}

	std::array<int, 3> listOfNumbers = { 1, 2, 3 };

	for (int currentNumber : listOfNumbers) //"range-based" for loop 
	{
		std::cout << currentNumber * 2 << "\n";
	}

	//INT_MAX

	for (long long i = 0; i < 10'000'000'000; ++i) //RECALL ! an integer overflows! around 2 billion!
	{
		if (i > 9'900'000'000)
		{
			std::cout << i << "\n";
		}
	}
}

int main()
{
	std::system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
	//NOTE: will not work on Mac or Android or iPhone
	//rickroll on execution 

	//demoVariousForLoopThings(); 

	//demoing a "nested" for loop: 
	for (int outerLoopCounter = 1; outerLoopCounter < 5; ++outerLoopCounter)
	{
		for (int innerLoopCounter = 1; innerLoopCounter < 4; ++innerLoopCounter)
		{
			std::cout << "Outer loop counter value is: " << outerLoopCounter
				<< "\tAND the INNER loop counter is: " << innerLoopCounter << "\n";
		}
		std::cout << "\n";
	}

	int a = 231; 
	do
	{
		a--;
		std::cout << a << "\n";
	} while (a >= 0);

}
