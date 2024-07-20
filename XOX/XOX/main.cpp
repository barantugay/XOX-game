#include <iostream>
#include "XOX.h"
using namespace std;


int main() {
	XOX* xox = new XOX();
	xox->interface();
	delete xox;


	cout << endl;
	return 0;
}