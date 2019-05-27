#include <cmath>
#include "func.h"

namespace do_while_loop
{
	int findFirstNegativeElement(double eps)
	{
		int i = 0;

		do
		{
			if( abs(a(i)) <= eps && a(i) < 0) break;
			i++;
		}
		while(true);

		return i;
	}
}
