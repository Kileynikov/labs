#include <cmath>
#include "func.h"

namespace do_while_loop
{
	int findFirstElement(double eps)
	{
		double i = 0;

		do
		{
			if(abs(a(i)) <= eps) break;
			i++;
		}
		while(abs(a(i)) >= eps);

		return i;
	}
}
