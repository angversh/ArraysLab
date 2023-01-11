//2

#include "MainHeader.h"
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int* pa = a;
    int* pla = a + n - 1;
    swap(pa, pla);
    cout << "New array is: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}