#include <iostream>
#include <random>

using namespace std;

int a = 20, b = 10, globalArray[10], arraySize = 10;
float temperatureC[10], temperatureK[10], index = 0;

int sum(int num1, int num2) { return num1+num2; }

void printArray()
{
	for (int& element : globalArray)
	{
		cout << element << " ";
	}
	cout << "\nTable size: " << arraySize << endl;
}

void removeElemnt(int n)
{
	
	for (int i = n; i < arraySize - 1; i++)
	{
		globalArray[i] = globalArray[i + 1];
	}
	globalArray[arraySize - 1] = 0;
	arraySize--;
}

float calculateToKelvin(float temperatue)
{
	return temperatue + 273.15;
}

void saveTemperature(float celsius_temperature, float kelvin_temperature)
{
	if (index < 10)
	{
		temperatureC[(int)index] = celsius_temperature;
		temperatureK[(int)index] = kelvin_temperature;
		index++;
	}
	else
	{
		cout << "Array is full" << endl;
	}
}

void printTemperatures()
{
	for (int i = 0; i < index; i++)
	{
		cout << "index_number: " << i << ": " << temperatureC[i] << " ===> " << temperatureK[i] << endl;
	}
	cout << endl;
}

int main()
{
    //Zadanie 1
	//cout << "Function sum with global variables: " << sum(a, b) << endl;
	//int a = 2, b = 1;
	//cout << "Function sum with local variables: " << sum(a, b) << endl;
	//Zadanie 2
	//srand(time(NULL));

	//for (int i = 0; i < 10; i++)
	//{
	//	globalArray[i] = rand() % 100;
	//}
	//printArray();
	//cout << "\nWhich element would you like to remove [0,9]" << endl;

	//int n;

	//while (true)
	//{
	//	cin >> n;
	//	if (n >= 0 && n <= 9)
	//	{
	//		removeElemnt(n);
	//		printArray();
	//		break;
	//	}
	//}
	//Zadanie 3
	float temperatures [11];

	srand(time(NULL));
	for (int i = 0; i < 11; i++)
	{
		temperatures[i] = -273.15 + rand() % 500 + 0;
		cout << temperatures[i] << " ";
	}
	cout << endl;
	for (float& element : temperatures)
	{
		float kelvin = calculateToKelvin(element);
		saveTemperature(element, kelvin);
	}
	printTemperatures();
	return 0;
}
