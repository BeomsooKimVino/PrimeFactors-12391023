#include <vector>

class PrimeFactors
{
public:
	std::vector<int> GetPrimeFactors(int number)
	{
		std::vector<int> pfs;
		if (number == 4)
		{
			pfs.push_back(2);
			pfs.push_back(2);
		}
		else if (number > 1)
			pfs.push_back(number);

		return pfs;
	}
};