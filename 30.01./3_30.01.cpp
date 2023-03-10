//3

/*Объявить и заполнить двумерный динамический массив случайными числами от 1 до 100. Показать его на экран.
Для заполнения и показа на экран написать отдельные функции. (подсказка: функции должны принимать три параметра
– указатель на динамический массив, количество строк, количество столбцов). Количество строк и столбцов выбирает
пользователь. Написать функцию, которая вычисляет сумму элементов, расположенных на главной диагонали матрицы. */

#include <iostream>
#include <ctime>

using namespace std;

void matrix(int** arr, int n) {
    cout << "Задаем матрицу: " << endl;
    for (int i = 0; i < n; i++) {               //создаем двумерный массив
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void twoDimArr(int** Array, int a) {
    srand(time(NULL));
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            Array[i][j] = rand() % 100 + 10;       //заполняем массив случайными целыми числами
        }
    }
}


void sums(int** arr, int n) {
    int sum = 0;
    int i = (n - 1);
    for (int j = 0; j < n; j++)
    {
        sum += arr[i][j];
        i--;
    }
    cout << "Суммарно на побочной диагонали: " << sum;
}


int main()
{
    int n;

    cout << "Сколько срок (столбцов) в вашей матрице?: ";
    cin >> n;            //одно значение, т.к. считаем, что матрица квадратная

    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    twoDimArr(arr, n);

    matrix(arr, n);

    sums(arr, n);

    if (arr) {
        delete[]arr;      //освобождаем память из под динамического массива
    }
    return 0;
}