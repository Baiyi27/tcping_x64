//
// Created by admin on 2023/11/29.
//
#include <iostream>
#include "Base64Encode.hh"
using namespace std;

int main()
{
	// std::cout << "hello" << std::endl;
	Base64Encode encode;
	cout << encode.Encode("hello world") << endl;

	return 0;
}
