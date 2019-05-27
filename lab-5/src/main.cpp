#include <iostream>
#include "../headers/Stack.h"
#include "../headers/Wrap.h"
#include "Stack.cpp"
#include "Wrap.cpp"

using namespace std;

int main()
{
	int size = 5;
	Stack<int> s(size);

	for (int i = 0; i < size; i++)
	{
		s.Push(i);
	}

	s.printStack();

	cout << endl;
	cout << "POPPED--------------------------------" << endl;
	cout << endl;

	s.Pop(0);
	s.printStack();

	system("pause");
}