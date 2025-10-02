// RNG and a number guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<random> 

int generateRandomNumberBetween0AndN(const int N)
{
	std::mt19937 rng(std::random_device{}());

	std::uniform_int_distribution<int> randomDistribution(0, N); 

	return randomDistribution(rng); 
}


int main()
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

	//make a rn guessing game when we come back in 15 minutes 


	//ONE limitation of rand() -> RAND_MAX

	//a preferable alternative (masked with abstraction): 

}
