#include "func.h"

namespace while_loop
{
	double summ(int n)
	{
		int i = 0;
		double res = 0;

		while(i < n-1)
		{
			res += a(i);
			i++;
		}

		return res;
	}
}
