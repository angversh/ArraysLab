//7

#include "MainHeader.h"
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "Error!" << endl;
    }
    else {
        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int k = 0;
        for (int i = 1; i <= n - 2; i++) {
            if ((a[i] < a[i - 1]) && (a[i] < a[i + 1])) {
                k++;
            }
        }
        cout << "Loc.min are: " << k << endl;
        delete[] a;
    }
    return 0;
}