#include "stdafx.h"
#include "Constants.h"

template<typename T>
void Search(const T arr[], const int& n)
{
	cout << "Повторяющиеся элементы: ";
	T temp[n];
	int count = 0, count_elem = 0;
	for (int i = 0; i < n; i++)
	{
		//if элемент уже в temp, пропускаем
		bool is_elem_in_the_box = false;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == temp[j])
			{
				is_elem_in_the_box = true;
			}
		}
		if (is_elem_in_the_box)
		{
			continue;
		}
		else
		{
			temp[i] = arr[i];
			for (int j = 0; j < n; j++)
			{
				if (j != i && arr[j] == arr[i])
				{
					cout << arr[i] << tab;
					count++;
				}
			}
		}
	}
	cout << "\nКоличество повторений: " << count << endl;
}

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