#include "headerFile.h"
#include <iostream>
#include <limits>
#include <stdlib.h>

using namespace std;

double temperaturesHistory[100];
char degreeTypesHistory[100];
int dataCounter = 0;

float FtoC(float F) { return (F - 32.0) * 5.0 / 9.0; }
float FtoK(float F) { return (F + 459.67) * 5.0 / 9.0; }
float CtoF(float C) { return C * 9.0 / 5.0 + 32.0; }
float CtoK(float C) { return C + 273.15; }
float KtoC(float K) { return K - 273.15; }
float KtoF(float K) { return K * 9.0 / 5.0 - 459.67; }

float getF() { float t; cout << "Enter your temperature in F: "; cin >> t; return t; }
float getC() { float t; cout << "Enter your temperature in C: "; cin >> t; return t; }
float getK() { float t; cout << "Enter your temperature in K: "; cin >> t; return t; }

int check(float temperature, char degreeType) {
    switch (degreeType) {
        case 'F':
            if (temperature < -459.67) {
                cout << "Temperature is below absolute zero in F!" << endl;
                return 1;
            }
            break;
        case 'C':
            if (temperature < -273.15) {
                cout << "Temperature is below absolute zero in C!" << endl;
                return 1;
            }
            break;
        case 'K':
            if (temperature < 0) {
                cout << "Temperature is below absolute zero in K!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid Temperature Type!" << endl;
            return 1;
    }
    return 0;
}

void showMenu() {
    cout << "Temperature Converter Menu" << endl;
    cout << "1 - Fahr -> Celsius" << endl;
    cout << "2 - Fahr -> Kelvin" << endl;
    cout << "3 - Celsius -> Fahr" << endl;
    cout << "4 - Celsius -> Kelvin" << endl;
    cout << "5 - Kelvin -> Celsius" << endl;
    cout << "6 - Kelvin -> Fahr" << endl;
    cout << "7 - End Program" << endl;
    cout << "8 - View Conversion History" << endl;
}

void SaveData(float temperature, float convertedTemperature, char degreeType, char convertedDegreeType) {
    if (dataCounter < 100) {
        temperaturesHistory[dataCounter] = temperature;
        temperaturesHistory[dataCounter + 1] = convertedTemperature;
        degreeTypesHistory[dataCounter] = degreeType;
        degreeTypesHistory[dataCounter + 1] = convertedDegreeType;
        dataCounter += 2;
    }
}