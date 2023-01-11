//4

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
    int n = 12;
    double* a = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ReAr = 0;
    for (int i = n - 2; i >= 0; i--) {
        int k = i;
        while (a[k] < a[k + 1]) {
            swap(*(a + k), *(a + k + 1));
            ReAr++;
            k++;
            if (k == n - 1) {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    cout << "Rearrangements are equal to " << ReAr << endl;
    delete[] a;
    return 0;
}