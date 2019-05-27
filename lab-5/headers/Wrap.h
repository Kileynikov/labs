#pragma once

template <typename T>
class Wrap
{
private:
	T data;
	Wrap *prev, *next;
public:
	Wrap(T _data, Wrap *_prev, Wrap *_next);
	Wrap(T _data);
	Wrap();

	T getData();
	Wrap* getPrev();
	Wrap* getNext();

	void setPrev(Wrap *_prev);
	void setNext(Wrap *_next);
};