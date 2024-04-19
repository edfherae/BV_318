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
	//���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		//arr[i] = 50 + rand() % 50;
		//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767 (RAND_MAX)
		//��� ��������������� ����� ����� ������� �� �����, ��������� � ����������, ��� ������� �������.
	}
}

template<typename T>
void Print(const T arr[], const int n)
{
	//����� ������� �� �����:
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
//	cout << "������������� ��������: ";
//	T temp[n];
//	int count = 0, count_elem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		//if ������� ��� � temp, ����������
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
//	cout << "\n���������� ����������: " << count << endl;
//}

//void Search(const int arr[], const int n)
//{
//	cout << "������������� ��������: ";
//	int temp[n];
//	int count = 0, count_elem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		//if ������� ��� � temp, ����������
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
//	cout << "\n���������� ����������: " << count << endl;
//}