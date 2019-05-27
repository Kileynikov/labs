#pragma once
#include "Wrap.h"

template <typename T>
class AbstractStack
{
public:
	virtual void Push(T item) = 0;
	virtual Wrap<T>* Pop(int _pos) = 0;
	virtual Wrap<T>* Get(int _pos) = 0;
	virtual int getSize() = 0;
};