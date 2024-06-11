#include<iostream>
#include "Windows.h"

int main() {
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib8.dll");
	typedef int (*sum) (int, int);
	sum Sum;
	Sum = (sum)GetProcAddress(load, "Sum");
	std::cout << Sum(5, 7);
	FreeLibrary(load);
}