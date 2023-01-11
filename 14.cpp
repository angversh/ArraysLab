//14

#include "MainHeader.h"
#include <iostream>

using namespace std;

int inc(int* arr, int N) {
    int left = arr[0];
    int left1 = 0;
    int right = 0;
    int right1 = 0;
    int income = 0;

    for (int i = 1; i < N; i++) {
        if (arr[i] - left < 0) {
            left = arr[i];
            left1 = i;
        }

        else {
            if (arr[i] - left > income) {
                right = arr[i];
                right1 = i;
                income = arr[i] - left;
            }
        }
    }
    return income;
}
int main()
{
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "Well, that was expected... Try again!" << endl;
    }
    else {
        int* arr1 = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        cout << "Max profit is: " << inc(arr1, n) << endl;
        delete[] arr1;
    }
    return 0;
}