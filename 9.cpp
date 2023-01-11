//9

#include "MainHeader.h"
#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int positive(int* arr, int N) {
    int c = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] > 0) {
            c++;
        }
    }
    return c;
}

int negative(int* arr, int N) {
    int c = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            c++;
        }
    }
    return c;
}

int zero(int* arr, int N) {
    int c = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == 0) {
            c++;
        }
    }
    return c;
}

void sortdown(int* arr, int N) {
    for (int j = 1; j < N; j++) {
        int p = j;
        while (arr[p] > arr[p - 1]) {
            swap(*(arr + p), *(arr + p - 1));
            p--;
            if (p - 1 < 0) {
                break;
            }
        }
    }
}
void sortup(int* arr, int N) {
    for (int i = 1; i < N; i++) {
        int m = i;
        while (arr[m] < arr[m - 1]) {
            swap(*(arr + m), *(arr + m - 1));
            m--;
            if (m - 1 < 0) {
                break;
            }
        }
    }
}

int main()
{
    int* a = new int[15];
    for (int i = 0; i < 15; i++) {
        std::cin >> a[i];
    }
    int n1 = positive(a, 15);
    int n2 = negative(a, 15);
    int n3 = zero(a, 15);
    int* a1 = new int[n1];
    int* a2 = new int[n2];
    int* a3 = new int[n3];
    int ind = 0;
    for (int i = 0; i < 15; i++) {
        if (a[i] > 0) {
            a1[ind] = a[i];
            ind++;
        }
    }
    ind = 0;
    for (int i = 0; i < 15; i++) {
        if (a[i] < 0) {
            a2[ind] = a[i];
            ind++;
        }
    }
    ind = 0;
    for (int i = 0; i < 15; i++) {
        if (a[i] == 0) {
            a3[ind] = a[i];
            ind++;
        }
    }


    sortdown(a1, n1);
    sortup(a2, n2);


    for (int i = 0; i < n2; i++) {
        a[i] = a2[i];
    }
    ind = 0;

    for (int i = n2; i < n2 + n3; i++) {
        a[i] = a3[ind];
        ind++;
    }
    ind = 0;

    for (int i = n2 + n3; i < 15; i++) {
        a[i] = a1[ind];
        ind++;
    }

    for (int i = 0; i < 15; i++) {
        cout << a[i] << " ";
    }

    delete[] a;
    delete[] a1;
    delete[] a2;
    delete[] a3;
    return 0;
}