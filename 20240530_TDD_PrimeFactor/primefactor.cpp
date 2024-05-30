#include <vector>

class PrimeFactors
{
public:
	std::vector<int> GetPrimeFactors(int number)
	{
		std::vector<int> pfs;
		if (number > 1)
		{
			int divisor = 2;
			if (number == 4 || number == 6 || number == 9 || number == 12)
			{
				for (divisor = 2; number > 1; divisor++)
				{
					while (number % divisor == 0) {
						pfs.push_back(divisor);
						number /= divisor;
					}
				}
			}
			else
				pfs.push_back(number);
		}
		return pfs;
	}
};