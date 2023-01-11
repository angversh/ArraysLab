//1

#include "MainHeader.h"
#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    cout << "Enter x1: ";
    int x1 = 0;
    cin >> x1;
    cout << "Enter x2: ";
    int x2 = 0;
    std::cout << "Untill swap" << std::endl;
    std::cout << "X1 is " << x1 << std::endl;
    std::cout << "X2 is " << x2 << std::endl;
    swap(&x1, &x2);
    std::cout << "After swap" << std::endl;
    std::cout << "X1 is now: " << x1 << std::endl;
    std::cout << "X2 is now: " << x2 << std::endl;
    return 0;
}



