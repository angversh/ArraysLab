//10

#include "MainHeader.h"
#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int max(int* arr, int n) {
    if (n == 1) {
        return arr[0];
    }
    else {
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
}
int maxindex(int* arr, int n) {
    int ind = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == max(arr, n)) {
            ind = i;
            break;
        }
    }
    return ind;
}
int count(int* arr, int n, int a) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            c++;
        }
    }
    return c;
}
int main()
{
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    if ((n1 <= 0) || (n2 <= 0)) {
        cout << "Try once more" << endl;
    }
    else {
        int* a = new int[n1];
        int* b = new int[n2];
        for (int i = 0; i < n1; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n2; i++) {
            cin >> b[i];
        }
        int maximum1 = max(a, n1);
        int maximum2 = max(b, n2);
        if (not((count(a, n1, maximum1) == 1) && (count(b, n2, maximum2) == 1))) {
            cout << "Error!" << endl;
        }
        else {
            int k1 = maxindex(a, n1);
            int k2 = maxindex(b, n2);
            cout << "The first array is: " << endl;
            for (int i = 0; i < n1; i++) {
                cout << a[i] << " ";
            }

            cout << "The second array is: " << endl;
            for (int i = 0; i < n2; i++) {
                cout << b[i] << " ";
            }

            cout << "\n";
            cout << "Max of the first array is " << maximum1 << endl;
            cout << "Max of the second array is " << maximum2 << endl;
            cout << "After replacement: " << endl;
            swap(*(a + k1), *(b + k2));
            cout << "Array 1" << endl;
            for (int i = 0; i < n1; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
            cout << "Array 2" << endl;
            for (int i = 0; i < n2; i++) {
                cout << b[i] << " ";
            }
        }
        delete[] a;
        delete[] b;
    }
    return 0;
}
