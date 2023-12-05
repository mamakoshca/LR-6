#include <iostream>
using namespace std;
/*
Дана матрица размера M × N. Для каждого столбца матрицы найти
произведение его элементов.
*/
int main()
{
    setlocale(LC_ALL, "RU");
    int m, n, p;
    cout << "Введите значение М: ";
    cin >> m;
    cout << "Введите значение N: ";
    cin >> n;
    int** a = new int* [m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Введите элемент матрицы под номером " << i + 1 << "." << j + 1 << ": ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        p = 1;
        for (int j = 0; j < m; ++j)
            p *= a[j][i];
        cout << "Произведение первого столбца = " << p << endl;
    }

    for (int i = 0; i < m; i++) {
        delete[]a[i];
    }
    delete []a;
}