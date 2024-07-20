#include "XOX.h"
XOX::~XOX() {}

int XOX::interface() { 
	cout << num1 << num2 << num3 << endl << num4 << num5 << num6 << endl << num7 << num8 << num9 << endl << endl;

	turnX();
	cout << num1 << num2 << num3 << endl << num4 << num5 << num6 << endl << num7 << num8 << num9 << endl << endl;
	winner();
	cout << endl;
	if (num == 1) {
		return 1;
	}
	turnO();
	winner();
	cout << endl;
	if (num == 1) {
		return 1;
	}
	interface();
}

void XOX::turnX() {
	int num;
	cout << "Turn X: ";
	cin >> num;
	cout << endl;
	
	switch (num)
	{
	case 1:
		if (num1 != 95)
			break;
		num1 = 88;
		break;
	case 2:
		if (num2 != 95)
			break;
		num2 = 88;
		break;
	case 3:
		if (num3 != 95)
			break;
		num3 = 88;
		break;
	case 4:
		if (num4 != 95)
			break;
		num4 = 88;
		break;
	case 5:
		if (num5 != 95)
			break;
		num5 = 88;
		break;
	case 6:
		if (num6 != 95)
			break;
		num6 = 88;
		break;
	case 7:
		if (num7 != 95)
			break;
		num7 = 88;
		break;
	case 8:
		if (num8 != 95)
			break;
		num8 = 88;
		break;
	case 9:
		if (num9 != 95)
			break;
		num9 = 88;
		break;

	default:
		break;
	}

}

void XOX::turnO() {
	int num;
	cout << "Turn O: ";
	cin >> num;
	cout << endl;

	switch (num)
	{
	case 1:
		if (num1 != 95)
			break;
		num1 = 79;
		break;
	case 2:
		if (num2 != 95)
			break;
		num2 = 79;
		break;
	case 3:
		if (num3 != 95)
			break;
		num3 = 79;
		break;
	case 4:
		if (num4 != 95)
			break;
		num4 = 79;
		break;
	case 5:
		if (num5 != 95)
			break;
		num5 = 79;
		break;
	case 6:
		if (num6 != 95)
			break;
		num6 = 79;
		break;
	case 7:
		if (num7 != 95)
			break;
		num7 = 79;
		break;
	case 8:
		if (num8 != 95)
			break;
		num8 = 79;
		break;
	case 9:
		if (num9 != 95)
			break;
		num9 = 79;
		break;

	default:
		break;
	}

}

void XOX::winner() {
	if (num1 == 88 && num2 == 88 && num3 == 88) {
		cout << "X won the XOX";
		num = 1;
	}
	else if (num4 == 88 && num5 == 88 && num6 == 88) {
		cout << "X won the XOX";
		num = 1;
	}
	else if (num7 == 88 && num8 == 88 && num9 == 88) {
		cout << "X won the XOX";
		num = 1;
	}
	else if (num1 == 88 && num4 == 88 && num7 == 88) {
		cout << "X won the XOX";
		num = 1;
	}
	else if (num2 == 88 && num5 == 88 && num8 == 88) {
		cout << "X won the XOX";
		num = 1;
	}
	else if (num3 == 88 && num6 == 88 && num9 == 88) {
		cout << "X won the XOX";
		num = 1;
	}
	else if (num1 == 88 && num5 == 88 && num9 == 88) {
		cout << "X won the XOX";
		num = 1;
	}
	else if (num3 == 88 && num5 == 88 && num7 == 88) {
		cout << "X won the XOX";
		num = 1;
	}
	else if (num1 == 79 && num2 == 79 && num3 == 79) {
		cout << "O won the XOX";
		num = 1;
	}
	else if (num4 == 79 && num5 == 79 && num6 == 79) {
		cout << "O won the XOX";
		num = 1;
	}
	else if (num7 == 79 && num8 == 79 && num9 == 79) {
		cout << "O won the XOX";
		num = 1;
	}
	else if (num1 == 79 && num4 == 79 && num7 == 79) {
		cout << "O won the XOX";
		num = 1;
	}
	else if (num2 == 79 && num5 == 79 && num8 == 79) {
		cout << "O won the XOX";
		num = 1;
	}
	else if (num3 == 79 && num6 == 79 && num9 == 79) {
		cout << "O won the XOX";
		num = 1;
	}
	else if (num1 == 79 && num5 == 79 && num9 == 79) {
		cout << "O won the XOX";
		num = 1;
	}
	else if (num3 == 79 && num5 == 79 && num7 == 79) {
		cout << "O won the XOX";
		num = 1;
	}
	else if (num1 != 95 && num2 != 95 && num3 != 95 && num4 != 95 && num5 != 95 && num6 != 95 && num7 != 95 && num8 != 95 && num9 != 95) {
		cout << "Nobody won the XOX";
		num = 1;
	}
}