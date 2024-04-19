//Arrays
#include "stdafx.h"
#include "Constants.h"
#include "Statistics.h"
#include "Statistics.cpp"
#include "FillRand.h" //почему не перегружаем?
#include "FillRand.cpp"
#include "Print.h"
#include "Print.cpp"
#include "Search.h"

int main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	//Search(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;

	const int D_SIZE = 10;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
}

//как создать массив внутри функции и можно ли назначить тип Т?

