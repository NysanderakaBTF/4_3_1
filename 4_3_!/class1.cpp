#include "class1.h"
#include <iostream>

void class1::set_size()
{
	std::cin >> n;
	ar = new int[n];
}

void class1::set_val()
{
	for (int i = 0; i < base1::n; i++) {
		std::cin >> ar[i];
	}
}
