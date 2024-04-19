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