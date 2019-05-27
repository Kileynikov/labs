#include <cmath>
#include "func.h"

namespace for_loop
{
	int findFirstNegativeElement(double eps)
	{
		int i;

		for(i = 0; ; i++)
		{
			if( abs(a(i)) <= eps && a(i) < 0) break;
			
		}

		return i;
	}
}
