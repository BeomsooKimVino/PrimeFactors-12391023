#include <vector>

class PrimeFactors
{
public:
	std::vector<int> GetPrimeFactors(int number)
	{
		std::vector<int> pfs;
		if (number == 2)
			pfs.push_back(2);
		return pfs;
	}
};