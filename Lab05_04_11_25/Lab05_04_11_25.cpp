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
	//		if (j == col - 1) {cout << endl;}
	//	}
	//	cout << endl;
	//}
	// Zadanie 5
	// int n, entry;
	// float avg = 0;
	//
	// cout << "Enter lenght of array (max 10): ";
	// cin >> n;
	//
	// if (n <= 0)
	// {
	// 	cout << "No elements provided." << endl;
	// 	return 0;
	// }
	// if (n > 10) n = 10;
	//
	// int* array = new int[n];
	//
	// for (int i = 0; i < n; i++)
	// {
	// 	cin >> entry;
	// 	array[i] = entry;
	// }
	//
	// int min = array[0], max = array[0];
	//
	// for (int i = 0; i < n; i++)
	// {
	// 	avg += static_cast<float>(array[i]);
	// 	if (array[i] < min) min = array[i];
	// 	if (array[i] > max) max = array[i];
	// }
	//
	// cout << "Average: " << avg / n << endl;
	// cout << "Min: " << min << endl;
	// cout << "Max: " << max << endl;
	//
	// delete[] array;
	//Zadanie 6
	// int luckynumber, counter = 0;
	// int randomnumbers [10];
	//
	// cout << "Enter your lucky number (1-10): " << endl;
	// cin >> luckynumber;
	//
	// srand(time(NULL));
	// for (int & randomnumber : randomnumbers)
	// {
	// 	randomnumber = rand() % 10 + 1;
	// 	cout << randomnumber << " ";
	// 	if (randomnumber == luckynumber) {counter++;}
	// }
	//
	// cout << endl << "Your lucky number " << luckynumber << " appeared " << counter << " times." << endl;
	// Zadanie 7
	// int row, column;
	// cout << "Enter number of rows and columns: " << endl;
	// cin >> row >> column;
	//
	// int** matrix1 = new int* [row];
	// int** matrix2 = new int* [row];
	// for (int i = 0; i < row; i++)
	// {
	// 	int* tmp1 = new int[column];
	// 	int* tmp2 = new int[column];
	// 	matrix1[i] = tmp1;
	// 	matrix2[i] = tmp2;
	// }
	//
	// srand(time(nullptr));
	// for (int i = 0; i < row; i++)
	// {
	// 	for (int j = 0; j < column; j++)
	// 	{
	// 		int num1 = rand() % 20 + 1;
	// 		int num2 = rand() % 20 + 1;
	// 		matrix1[i][j] = num1;
	// 		matrix2[i][j] = num2;
	// 	}
	// }
	//
	// cout << "Matrix 1:" << endl;
	// for (int i = 0; i < row; i++) {
	// 	for (int j = 0; j < column; j++) {
	// 		cout << matrix1[i][j] << " ";
	// 		if (j == column - 1) {cout << endl;}
	// 	}
	// }
	//
	// cout << "Matrix 2:" << endl;
	// for (int i = 0; i < row; i++) {
	// 	for (int j = 0; j < column; j++) {
	// 		cout << matrix2[i][j] << " ";
	// 		if (j == column - 1) {cout << endl;}
	// 	}
	// }
	// cout << "Sum of matrices:" << endl;
	// for (int i = 0; i < row; i++) {
	// 	for (int j = 0; j < column; j++) {
	// 		cout << matrix1[i][j] + matrix2[i][j] << " ";
	// 		if (j == column - 1) {cout << endl;}
	// 	}
	// }
	// Zadanie 8
	// int row1, column1, row2, column2;
	// bool condition = true;
	// while (condition) {
	// 	cout << "Enter number of rows and columns for first matrix: " << endl;
	// 	cin >> row1 >> column1;
	// 	cout << "Enter number of rows and columns for second matrix: " << endl;
	// 	cin >> row2 >> column2;
	// 	if (column1 == row2) {
	// 		condition = false;
	// 	}
	// 	else {
	// 		cout << "Error! Number of columns in first matrix must be equal to number of rows in second matrix." << endl;
	// 	}
	// }
	//
	// int** matrix1 = new int* [row1];
	// for (int i = 0; i < row1; i++)
	// {
	// 	int* tmp1 = new int[column1];
	// 	matrix1[i] = tmp1;
	// }
	//
	// int** matrix2 = new int* [row2];
	// for (int i = 0; i < row2; i++)
	// {
	// 	int* tmp1 = new int[column2];
	// 	matrix2[i] = tmp1;
	// }
	// srand(time(nullptr));
	// for (int i = 0; i < row1; i++)
	// {
	// 	for (int j = 0; j < column1; j++)
	// 	{
	// 		int num = rand() % 20 + 1;
	// 		matrix1[i][j] = num;
	// 	}
	// }
	// for (int i = 0; i < row2; i++)
	// {
	// 	for (int j = 0; j < column2; j++)
	// 	{
	// 		int num = rand() % 20 + 1;
	// 		matrix2[i][j] = num;
	// 	}
	// }
	//
	// cout << "Matrix 1:" << endl;
	// for (int i = 0; i < row1; i++) {
	// 	for (int j = 0; j < column1; j++) {
	// 		cout << matrix1[i][j] << " ";
	// 		if (j == column1 - 1) {cout << endl;}
	// 	}
	// }
	//
	// cout << "Matrix 2:" << endl;
	// for (int i = 0; i < row2; i++) {
	// 	for (int j = 0; j < column2; j++) {
	// 		cout << matrix2[i][j] << " ";
	// 		if (j == column2 - 1) {cout << endl;}
	// 	}
	// }
	//
	// cout << "Result of matrix 1 multiplied by matrix 2:" << endl;
	// for (int i = 0; i < row1; i++) {
	// 	for (int j = 0; j < column2; j++) {
	// 		int sum = 0;
	// 		for (int k = 0; k < column1; k++) {
	// 			sum += matrix1[i][k] * matrix2[k][j];
	// 		}
	// 		cout << sum << " ";
	// 		if (j == column2 - 1) {cout << endl;}
	// 	}
	// }
	// Zadanie 9
	// int row, column;
	// cout << "Enter number of rows and columns: " << endl;
	// cin >> row >> column;
	//
	// int** matrix = new int* [row];
	// for (int i = 0; i < row; i++)
	// {
	// 	int* tmp = new int[column];
	// 	matrix[i] = tmp;
	// }
	//
	// for (int i = 0; i < row; i++)
	// {
	// 	for (int j = 0; j < column; j++)
	// 	{
	// 		cout << "Enter element [" << i << "][" << j << "]: ";
	// 		cin >> matrix[i][j];
	// 	}
	// }
	//
	// cout <<"Matrix: "<< endl;
	// for (int i = 0; i < row; i++) {
	// 	for (int j = 0; j < column; j++) {
	// 		cout << matrix[i][j] << " ";
	// 		if (j == column - 1) {cout << endl;}
	// 	}
	// }
	// int sum = 0;
	// for (int i = 0; i < row; i++) {
	// 	for (int j = 0; j < column; j++) {
	// 		if (i == j) {sum += matrix[i][j];}
	// 	}
	// }
	// cout << "The sum of main diagonal numbers is: " << sum <<endl;
	// Zadanie 10
	int array [10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter " << i + 1 << " element: " << endl;
		cin >> array[i];
	}
	for (int & i : array) {
		for (int & j : array) {
			if (i < j) {
				swap(i, j);
			}
		}
	}
	cout << "sorted array: " << endl;
	for (int i : array)
	{
		cout << i << " ";
	}
	return 0;
}