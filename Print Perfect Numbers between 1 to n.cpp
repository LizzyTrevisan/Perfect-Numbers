// Print Perfect Numbers between 1 to n.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;


	int sum = 0; //initial value for sum throughout the code;
	bool printComma = false; // the perfect number is the first one, which will not add a comma.

	cout << "All the perfect numbers in the range 1 to 1000 are: " << endl;
	

	for (int i = 1; i <= n; i++) // user's entry
	{
		for (int u = 1; u <= n; u++) //check divisors of 'i'
		{
			if (u < i)
			{
				if (i % u == 0) //if 'u' is a divisor of 'i'
					sum += u; // if 'u' is a divisor of 'i', add 'u' to 'sum'
			}
		}
	if (sum == i) {
		if (printComma)//Check if the sum of divisors 'sum' is equal to 'i'
		{
			cout << ","; //Add comma and space if 'i' is not the first number
		}
		cout << i;
		printComma = true;// the comma will be printed before each perfect number.

		}
	sum = 0; // Reset 'sum' to 0 for the next iteration
	}

	return 0;

}
