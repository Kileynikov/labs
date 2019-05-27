#include <stdio.h>
#include "../headers/Wrap.h"

template <typename T>
Wrap<T>::Wrap(T _data, Wrap<T> *_prev, Wrap<T> *_next) : data(_data), prev(_prev), next(_next) {}

template <typename T>
Wrap<T>::Wrap(T _data) : data(_data), prev(NULL), next(NULL) {}

template <typename T>
Wrap<T>::Wrap() : data(NULL), prev(NULL), next(NULL) {}

template <typename T>
T Wrap<T>::getData() { return data; }

template <typename T>
Wrap<T>* Wrap<T>::getPrev() { return prev; }

template <typename T>
Wrap<T>* Wrap<T>::getNext() { return next; }

template <typename T>
void Wrap<T>::setPrev(Wrap *_prev) { prev = _prev; }

template <typename T>
void Wrap<T>::setNext(Wrap *_next) { next = _next; }