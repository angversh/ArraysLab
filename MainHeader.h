#pragma once

#include <iostream>

//создаем шаблон, чтобы параметризовать алгоритм
template <typename T>
void swap(T* p_a, T* p_b) {
	T* p_c = new T(*p_a);
	*p_a = *p_b;
	*p_b = *p_c;
	delete p_c;
}

