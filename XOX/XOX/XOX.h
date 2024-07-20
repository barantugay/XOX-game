#pragma once
#include <iostream>
using namespace std;

class XOX {
private:
	char num1 = 95;
	char num2 = 95;
	char num3 = 95;
	char num4 = 95;
	char num5 = 95;
	char num6 = 95;
	char num7 = 95;
	char num8 = 95;
	char num9 = 95;
	int num = 0;

public:
	~XOX();
	int interface();
	void turnX();
	void turnO();
	void winner();
};