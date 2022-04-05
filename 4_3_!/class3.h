#pragma once
#include"class1.h"
#include"class2.h"
#include <iostream>
using namespace std;
class class3 : public class1, public class2
{
public:
	void exec();
};

