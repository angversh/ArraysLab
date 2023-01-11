//3

#include "MainHeader.h"
#include <iostream>

using namespace std;

int main() {
    double** p = 0;
	double* p0 = new double(2);
    cout << **p << endl;
    delete* p;
    delete p;
}
