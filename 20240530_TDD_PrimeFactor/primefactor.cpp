#include <vector>

class PrimeFactors
{
public:
	std::vector<int> GetPrimeFactors(int number)
	{
		std::vector<int> pfs;
		if (number > 1)
			pfs.push_back(number);

		return pfs;
	}
};