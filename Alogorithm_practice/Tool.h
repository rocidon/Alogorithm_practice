#ifndef _TOOL_H_
#define _TOOL_H_
#pragma once

template <typename T>
void swap(T &a, T &b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
};


#endif // !