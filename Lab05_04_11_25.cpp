#include <iostream>
#include <random>

using namespace std;

int main()
{
	// Zadanie 1
	//int* array = new int[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "Enter " << i + 1 << " element: " << endl;
	//	cin >> array[i];
	//}
	//for (int i = 9; i >= 0; i--)
	//{
	//	cout << array[i] << " ";
	//}
	// Zadanie 2
	//int n;

	//cout << "Enter lenght of fibonacci sequence (< 100): ";
	//cin >> n;

	//int* fibonacci_sequence = new int[n];
	//fibonacci_sequence[0] = 0;
	//fibonacci_sequence[1] = 1;

	//for( int i = 2; i < n; i++ )
	//{
	//	fibonacci_sequence[i] = fibonacci_sequence[i - 1] + fibonacci_sequence[i - 2];
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	cout << fibonacci_sequence[i] << " ";
	//}
	// Zadanie 3
	//int avg = 0, min, max;
	//int array[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	array[i] = rand() % 1000;
	//	cout << array[i] << " ";
	//}
	//cout << endl;
	//for (int i = 0; i < 10; i++)
	//{
	//	avg += array[i];
	//	if (i == 0)
	//	{
	//		min = array[i];
	//		max = array[i];
	//	}
	//	else
	//	{
	//		if (array[i] < min)
	//		{
	//			min = array[i];
	//		}
	//		if (array[i] > max)
	//		{
	//			max = array[i];
	//		}
	//	}
	//}
	//avg /= 10;
	
	//cout << "Average: " << avg << endl;
	//cout << "Min: " << min << endl;
	//cout << "Max: " << max << endl;
	// Zadanie 4
	//int row, col, entry;
	//cout << "Enter number of rows and collums " << endl;
	//cin >> row >> col;
	//int** matrix = new int* [row];

	//for (int i = 0; i < row; i++)
	//{
	//	int* tmp = new int[col];
	//	matrix[i] = tmp;
	//}

	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout << "Enter element [" << i << "][" << j << "]: ";
	//		cin >> entry;
	//		matrix[i][j] = entry;
	//	}
	//}
	//cout << endl;
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout << matrix[i][j] << " ";
	//		if (j == col - 1)
	//		{
	//			cout << endl;
	//	}
	//	}
	//	cout << endl;
	//}
	// Zadanie 5
	int avg = 0, min, max, n, entry;
	int* array = new int[10];
	
	cout << "Enter lenght of array (max 10): ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> entry;
		array[i] = entry;
	}

	for (int i = 0; i < 10; i++)
	{
		avg += array[i];
		if (i == 0)
		{
			min = array[i];
			max = array[i];
		}
		else
		{
			if (array[i] < min)
			{
				min = array[i];
			}
			if (array[i] > max)
			{
				max = array[i];
			}
		}
	}

}

