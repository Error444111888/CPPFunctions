// CPPFunctions - by Ray

#include <iostream>
#include <string>
#include <math.h>


using namespace std;
using std::cout;
using std::endl;



	// First Example

	int pow(int base, int exponent)
	{
		int result = 1;
		// Now the if statement
		if (exponent < 0)
		{
			return -1;
		}

		else if (exponent == 0)
		{
			return result;
		}
		// Rest of the options
		else
		{
			for (int i = 1; i <= exponent; i++)
			{
				result *= base;
			}
			return result;
		}

	}

	// Second Example

	double CurrencyCalculations(double n) //you've to declared the input n 
	{
		double total; //You've to declared the total 

		double USD = 1.11;
		double EUR = 5.51;
		double TRY = 5.11;

		total = USD + TRY + EUR;

		return total; // You've to return the total;


	}

	int salla()
		
	{

		cout << CurrencyCalculations(55); //result === the function returns 11.73 when the input is 55
		return 0;
	}

	// Third Example

	void SayMyName()
	{
		cout << "My name is ---Error 418---" << endl;
	}

	int main()
	{
		SayMyName();
		






		cin.get();

	}
