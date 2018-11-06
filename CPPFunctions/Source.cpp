// CPPFunctions - by Ray

#include <iostream>
#include <string>


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

	double CurrencyCalculations(double, double);
	double CurrencyCalculations()
	{

		double USD = 1.11;
		double EUR = 5.51;
		double TRY = 5.11;

		double total;
		{
			total = USD + TRY + EUR;
		}
		return 0;





	}

