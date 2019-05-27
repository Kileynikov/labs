#include <iostream>
#include "func.h"

using namespace std;

namespace while_loop
{
	void print(int n, int k)
	{
		int i = 0;
		int t = 1;		

		while(i < n)
		{
			if(t == k)
			{
				t = 1;
				i++;
				continue;
			}

			cout << a(i) << " ";

			t++;
			i++;
		}

		cout << endl;
	}
}
