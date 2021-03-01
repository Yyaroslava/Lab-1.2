#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
	Matrix z;
	z.Read();
	z.Display();
	cout << "The final cost: " << z.getAllSum() << endl;

	return 0;
}
