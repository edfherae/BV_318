#include "stdafx.h"
#include "Constants.h"

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
double Avg(const T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}