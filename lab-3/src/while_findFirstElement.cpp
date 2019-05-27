#include <cmath>
#include "func.h"

namespace while_loop
{
	int findFirstElement(double eps)
	{
		double i = 0;

		while(abs(a(i)) >= eps) i++;

		return i;
	}
}
