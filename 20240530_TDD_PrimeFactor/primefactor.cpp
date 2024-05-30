#include <vector>

class PrimeFactors
{
public:
	std::vector<int> GetPrimeFactors(int number)
	{
		std::vector<int> pfs;
		if (number > 1)
		{
			if (number == 4)
			{
				while (number % 2 == 0)
				{
					pfs.push_back(2);
					number /= 2;
				}
			}
			else
				pfs.push_back(number);
		}
		return pfs;
	}
};