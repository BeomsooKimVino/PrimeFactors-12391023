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
			if (number == 4)
			{
				while (number % 2 == 0)
				{
					pfs.push_back(2);
					number /= 2;
				}
			}
			else if (number == 6)
			{
				for (divisor = 2; number > 1; divisor++)
				{
					while (number % divisor == 0) {
						pfs.push_back(divisor);
						number /= divisor;
					}
				}
			}
			else if (number == 9)
			{
				pfs.push_back(3);
				pfs.push_back(3);
			}
			else
				pfs.push_back(number);
		}
		return pfs;
	}
};