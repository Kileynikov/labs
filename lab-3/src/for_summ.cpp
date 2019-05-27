#include "func.h"

namespace for_loop
{
	double summ(int n)
	{
		double res = 0;

		for(int i = 0; i < n-1; i++)
		{
			res += a(i);
		}

		return res;
	}
}
