﻿// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int* Arr;
	int* Arr2;
	int num, a, b, n, n2, j = 0;
	cout << "Введите a "; cin >> a;
	cout << "Введите b>=a "; cin >> b;
	cout << "Введите n "; cin >> n;
	n2 = n;
	Arr = new int[n]; // динамический массив
	for (int i = 0; i < n; i++)
	{
		num = rand() % (b - a + 1) + a;
		Arr[i] = num;
	}
	for (int i = 0; i < n; i++) { cout << Arr[i] << " "; }
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if ((Arr[i] % 2)!=0 )
		{
			n2--;
		}
	}
	Arr2 = new int[n2]; // динамический массив 2
	for (int i = 0; i < n; i++)
	{
		if ((Arr[i] % 2)== 0)
		{
			Arr2[j] = Arr[i];
			j++;
		}
	}
	for (int i = 0; i < n2; i++) { cout << Arr2[i] << " "; }
	system("pause");


	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
