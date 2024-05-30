#include <vector>

class PrimeFactors
{
public:
	std::vector<int> GetPrimeFactors(int number)
	{
		std::vector<int> pfs;
		int divisor = 2;
		for (divisor = 2; number > 1; divisor++)
		{
			while (number % divisor == 0) {
				pfs.push_back(divisor);
				number /= divisor;
			}
		}
		return pfs;
	}
};
