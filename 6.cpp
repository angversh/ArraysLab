//6

#include "MainHeader.h"
#include <iostream>

using namespace std;

void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    double* a1 = new double[14]; //создаем массив
    for (int i = 0; i < 14; i++) {
        cin >> a1[i];
    }
    int ReAr = 0;
    for (int i = 0; i < 7; i++) {
        if (a1[i] != a1[i + 7]) {
            swap(*(a1 + i), *(a1 + i + 7));  //меняем половинки
            ReAr++;
        }
    }

    for (int i = 0; i < 14; i++) {
        cout << a1[i] << " ";
    }
    cout << "\n";
    cout << "Rearrangements are equal to " << ReAr << endl;
    delete[] a1;
    return 0;
}