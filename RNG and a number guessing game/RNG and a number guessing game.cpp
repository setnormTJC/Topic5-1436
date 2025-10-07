// RNG and a number guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<random> 


int generateRandomNumberBetween0AndN(const int N)
{
	//rand(); RAND_MAX //deprecated ("frowned upon"/unsafe)
	std::mt19937 rng(std::random_device{}());

	std::uniform_int_distribution<int> randomDistribution(0, N); 

	return randomDistribution(rng); 
}

void demoSimpleRNG()
{
	//the "deprecated" method of RNG: 

	int counter = 0;
	srand(time(0)); //time(0) -> what do it do???
	//s stands for "seed" (whatever that means), let's just abstract away the detail and use the result


	const int N = 1'000'000; //' apostrophes became supported for "large" numbers in 2011 in C++ 

	while (counter < 100)
	{
		//RAND_MAX is the LIMIT of rand() -> what if we want a random number > 32,767?
		/*int randomNumberBetween1And100 = rand(); */

		int randomNumberBetween0AndN = generateRandomNumberBetween0AndN(N);
		std::cout << randomNumberBetween0AndN << "\n";

		counter++;
	}
}


int main()
{
	
	const int N = 100; 
	int correctNumber = generateRandomNumberBetween0AndN(N);

	int numberOfGuesses = 0; 
	std::cout << "Dirty cheater! The number is " << correctNumber << "\n";

	bool gameWon = false; 
	const int MAX_GUESSES_ALLOWED = 6; 

	//for() //next time

	while (!gameWon && numberOfGuesses < MAX_GUESSES_ALLOWED)
	{
		std::cout << "GUESS the number:\n";
		int usersGuess{}; //braces initiliaze an int to 0
		std::cin >> usersGuess;

		numberOfGuesses++; 

		if (usersGuess == correctNumber)
		{
			gameWon = true; 
			//std::cout << "You won!\n";
		}

		else if (usersGuess > correctNumber)
		{
			std::cout << "That was too HIGH!\n";
		}

		else //THIS means usersGuess is LESS THAN the correct number
		{
			std::cout << "Too LOW!\n";
		}
	} //end while 

	//auto someLetter = 'a'; 

	if (!gameWon) //alternative to this is: gameWon == false
	{
		std::cout << "Too many guesses - lost\n";
	}

	else
	{
		std::cout << "Huzzah!\n";
	}

	//
}
