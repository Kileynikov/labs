#include <cmath>
#include "func.h"

namespace while_loop
{
	int findFirstNegativeElement(double eps)
	{
		int i = 0;

		while(true)
		{
			if( abs(a(i)) <= eps && a(i) < 0) break;
			i++;
		}

		return i;
	}
}
