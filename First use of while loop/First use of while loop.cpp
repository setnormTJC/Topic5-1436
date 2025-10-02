// First use of while loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int numberOfInstancesOfAroundTheWorld = 0; //a Daft Punk reference

	while (numberOfInstancesOfAroundTheWorld <= 60) //just my guess for how many times they say it
	{
		std::cout << "Around the world\n";
		numberOfInstancesOfAroundTheWorld = numberOfInstancesOfAroundTheWorld + 1; 
	}

	std::cout << "After EXITING the loop, the loop counter variable is = "
		<< numberOfInstancesOfAroundTheWorld << "\n";

	//re-iterate
}
