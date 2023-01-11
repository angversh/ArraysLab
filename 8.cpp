//8

#include "MainHeader.h"
#include <iostream>

using namespace std;


int nullcount(int* arr, int N) {
    int c = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == 0) {
            c++;
        }
    }
    return c;
}
int matrix(int** A, int M, int N) {
    for (int i = 0; i < M; i++) {
        if (nullcount(A[i], N) != 2) {
            return 0;
            break;
        }
    }
    return 1;
}
int sumnull(int* arr, int N) {
    int sum = 0;
    int ind = 0;
    while (arr[ind] != 0) {
        ind++;
    }
    do {
        ind++;
        sum += arr[ind];
    } while (arr[ind] != 0);
    return sum;
}
void sum(int** A, int M, int N) {
    for (int i = 0; i < M; i++) {
        cout << "The sum for line " << i << " is:  " << sumnull(A[i], N) << endl;
    }
}
int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    if ((m <= 0) || (n <= 0)) {
        cout << "Try again!" << endl;
    }
    else {
        int** a;
        a = new int* [m];
        for (int i = 0; i < m; i++) {
            a[i] = new int[n];
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        if (matrix(a, m, n) == 0) {
            cout << "Nah, what's this? Try again!" << endl;
        }
        else {
            cout << "Matrix is: " << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    cout << a[i][j] << " ";
                }
                cout << "\n";
            }
            sum(a, m, n);
            for (int i = 0; i < m; i++) {
                delete[] a[i];
            }
            delete[] a;
        }
    }
    return 0;
}