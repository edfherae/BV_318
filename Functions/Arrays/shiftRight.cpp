#include "shiftRight.h"
#include "shiftLeft.h"

void shiftRight(int arr[], const int n, const int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts % n);
}
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}