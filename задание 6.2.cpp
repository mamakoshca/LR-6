#include <iostream>
using namespace std;
/*
Дана квадратная матрица A порядка M. Найти минимальный элемент для каждой ее диагонали,
параллельной главной (начиная с одноэлементной диагонали A1,M ).
*/
int main()
{
	setlocale(LC_ALL, "RU");
	int m,v;
	cout << "Введите ранг матрицы: ";
	cin >> m;

	int** a = new int* [m];
	for (int i = 0; i < m; i++) {
		a[i] = new int[m];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Элемент " << i + 1 << "." << j + 1 << " ";
			cin >> a[i][j];
		}
	}

	//Нижняя часть
	for (int i = 0; i < m; i++) {
		int min = a[m - 1 - i][0];
		for (int j = i; j >= 0; j--) {
			v = a[m - 1 - j][i - j];
			if (min > v) {
				min = v;
			}
		}
		cout << "min = " << min << endl;
	}

	//Верхняя часть
	for (int j = 1; j < m; j++) {
		int min = a[0][j];
		for (int i = j; i < m; i++) {
			v = a[i - j][i];
			if (min > v) {
				min = v;
			}
		}
		cout << "min = " << min << endl;
	}
	for (int i = 0; i < m; i++) {
		delete[] a[i];
	}
	delete[] a;
}

