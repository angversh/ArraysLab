//5

#include "MainHeader.h"
#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void param(int* A, int* B, int N) {
    for (int i = 0; i < N; i++) {
        B[i] = A[i];
    }
    int stop = 0;
    for (int i = 0; i < N; i++) {
        if (B[i] < 0) {
            int n1 = i;
            while (n1 != stop) {
                swap(*(B + n1), *(B + n1 - 1));
                n1--;
            }
            stop++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    if (n <= 0) {
        cout << "Oops! Try again!" << endl;
    }
    else {
        int* A = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int* B = new int[n];

        param(A, B, n);
        for (int i = 0; i < n; i++) {
            cout << B[i] << " ";
        }
        cout << "\n";
        delete[] A;
        delete[] B;
    }
    return 0;
}