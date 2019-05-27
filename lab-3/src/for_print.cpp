#include <iostream>
#include "func.h"

using namespace std;

namespace for_loop
{
	void print(int n, int k)
	{
		int t = 1;		

		for(int i = 0; i < n; i++)
		{
			if(t == k)
			{
				t = 1;
				continue;
			}

			cout << a(i) << " ";

			t++;
		}

		cout << endl;
	}
}
