#include "stdafx.h"
#include "Constants.h"

template<typename T>
void FillRand(T arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		//arr[i] = 50 + rand() % 50;
		//Функция rand() генерирует псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
		//Это псевдослучайное число можно вывести на экран, сохранить в переменную, или элемент массива.
	}
}

template<typename T>
void Print(const T arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template<typename T>
T Sum(const T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>
T Avg(const T arr[], const int n)
{
	return (T)Sum(arr, n) / n;
}



//template<typename T>
//void Search(const T arr[], const int& n)
//{
//	cout << "Повторяющиеся элементы: ";
//	T temp[n];
//	int count = 0, count_elem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		//if элемент уже в temp, пропускаем
//		bool is_elem_in_the_box = false;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i] == temp[j])
//			{
//				is_elem_in_the_box = true;
//			}
//		}
//		if (is_elem_in_the_box)
//		{
//			continue;
//		}
//		else
//		{
//			temp[i] = arr[i];
//			for (int j = 0; j < n; j++)
//			{
//				if (j != i && arr[j] == arr[i])
//				{
//					cout << arr[i] << tab;
//					count++;
//				}
//			}
//		}
//	}
//	cout << "\nКоличество повторений: " << count << endl;
//}

//void Search(const int arr[], const int n)
//{
//	cout << "Повторяющиеся элементы: ";
//	int temp[n];
//	int count = 0, count_elem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		//if элемент уже в temp, пропускаем
//		bool is_elem_in_the_box = false;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i] == temp[j])
//			{
//				is_elem_in_the_box = true;
//			}
//		}
//		if (is_elem_in_the_box)
//		{
//			continue;
//		}
//		else
//		{
//			temp[i] = arr[i];
//			for (int j = 0; j < n; j++)
//			{
//				if (j != i && arr[j] == arr[i])
//				{
//					cout << arr[i] << tab;
//					count++;
//				}
//			}
//		}
//	}
//	cout << "\nКоличество повторений: " << count << endl;
//}