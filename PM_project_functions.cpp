#include "headerFile.h"
#include <iostream>
#include <limits>
#include <random>
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
    cout << "7 - View Conversion History" << endl;
    cout << "8 - Delete Record in Conversion History" << endl;
    cout << "9 - Modify Record in Conversion History" << endl;
    cout << "0 - Fill Conversion History with Random Values" << endl;
    cout << "-1 - End Program" << endl;
}

void saveData(float temperature, float convertedTemperature, char degreeType, char convertedDegreeType) {
    if (dataCounter < 100) {
        temperaturesHistory[dataCounter] = temperature;
        temperaturesHistory[dataCounter + 1] = convertedTemperature;
        degreeTypesHistory[dataCounter] = degreeType;
        degreeTypesHistory[dataCounter + 1] = convertedDegreeType;
        dataCounter += 2;
    }
    else { cout << "Conversion history is full!" << endl; }
}

void showHistory() {
    if (dataCounter == 0) {
        cout << "No conversion history available." << endl;
    }
    else {
        int choise, index = 0, counter = 0;

        cout << "Conversion History:" << endl;
        cout << "1 - Celsius -> Any" << endl;
        cout << "2 - Fahr -> Any" << endl;
        cout << "3 - Kelvin -> Any" << endl;
        cout << "4 - Show All" << endl;
        cout << "Enter your choice: ";
        cin >> choise;
        system("cls");

        switch (choise) {
            case 1: {
                for (int i = 0; i < dataCounter; i += 2) {
                    if (degreeTypesHistory[i] == 'C') {
                        cout << "[" << index++ << "] " << temperaturesHistory[i] << degreeTypesHistory[i] << " = "
                             << temperaturesHistory[i + 1] << degreeTypesHistory[i + 1] << endl;
                        counter ++;
                    }
                }
                if (counter == 0 ) { cout << "No Celsius conversion history available." << endl; }
                break;
            }
            case 2: {
                for (int i = 0; i < dataCounter; i += 2) {
                    if (degreeTypesHistory[i] == 'F') {
                        cout << "[" << index++ << "] " << temperaturesHistory[i] << degreeTypesHistory[i] << " = "
                             << temperaturesHistory[i + 1] << degreeTypesHistory[i + 1] << endl;
                        counter ++;
                    }
                }
                if (counter == 0 ) { cout << "No Celsius conversion history available." << endl; }
                break;
            }
            case 3: {
                for (int i = 0; i < dataCounter; i += 2) {
                    if (degreeTypesHistory[i] == 'K') {
                        cout << "[" << index++ << "] " << temperaturesHistory[i] << degreeTypesHistory[i] << " = "
                             << temperaturesHistory[i + 1] << degreeTypesHistory[i + 1] << endl;
                        counter ++;
                    }
                }
                if (counter == 0 ) { cout << "No Kelvin conversion history available." << endl; }
                break;
            }
            case 4: {
                for (int i = 0; i < dataCounter; i += 2) {
                    cout << "[" << index++ << "] " << temperaturesHistory[i] << degreeTypesHistory[i] << " = "
                         << temperaturesHistory[i + 1] << degreeTypesHistory[i + 1] << endl;
                }
                break;
            }
            default:
                cout << "Invalid Choice!" << endl;
                break;
        }
    }
}
void showFullHistory() {
    if (dataCounter == 0) {
        cout << "No conversion history available." << endl;
    }
    else {
        int index = 0;
        for (int i = 0; i < dataCounter; i += 2) {
            cout << "[" << index++ << "] " << temperaturesHistory[i] << degreeTypesHistory[i] << " = "
                 << temperaturesHistory[i + 1] << degreeTypesHistory[i + 1] << endl;
        }
    }
}

void deleteRecord() {
    if (dataCounter == 0) {
        cout << "No conversion history available." << endl;
    }
    else {
        int index = 0, recordIndex;
        for (int i = 0; i < dataCounter; i += 2) {
            cout << "[" << index++ << "] " << temperaturesHistory[i] << degreeTypesHistory[i] << " = "
                 << temperaturesHistory[i + 1] << degreeTypesHistory[i + 1] << endl;
        }

        cout << "Enter the index of the record to delete: ";
        while (true) {
            cin >> recordIndex;
            if (cin.fail() || recordIndex < 0 || recordIndex >= dataCounter / 2) {
                cout << "Invalid index. Please enter a valid index: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }

        for (int i = recordIndex * 2; i < dataCounter - 2; i++) {
            temperaturesHistory[i] = temperaturesHistory[i + 2];
            degreeTypesHistory[i] = degreeTypesHistory[i + 2];
        }
        dataCounter -= 2;
        cout << "Record deleted successfully." << endl;
    }
}

void modifyRecord() {
    if (dataCounter == 0) {
        cout << "No conversion history available." << endl;
    }
    else {
        showFullHistory();

        int recordIndex = 0;
        cout << "Enter the index of the record to modify: ";
        while (true) {
            cin >> recordIndex;
            if (cin.fail() || recordIndex < 0 || recordIndex >= dataCounter / 2) {
                cout << "Invalid index. Please enter a valid index: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
        float newTemperature;
        char newDegreeType, convertToType;
        cout << "What is the new temperature degree type? (F/C/K): ";
        cin >> newDegreeType;
        switch (newDegreeType) {
            case 'F': {
                newTemperature = getF();
                if (check(newTemperature, 'F') == 0) {
                    temperaturesHistory[recordIndex * 2] = newTemperature;
                    degreeTypesHistory[recordIndex * 2] = 'F';
                    cout << "Convert to (C/K): ";
                    cin >> convertToType;
                    if (convertToType == 'C') {
                        temperaturesHistory[recordIndex * 2 + 1] = FtoC(newTemperature);
                        degreeTypesHistory[recordIndex * 2 + 1] = 'C';
                    } else if (convertToType == 'K') {
                        temperaturesHistory[recordIndex * 2 + 1] = FtoK(newTemperature);
                        degreeTypesHistory[recordIndex * 2 + 1] = 'K';
                    } else {
                        cout << "Invalid Choice!" << endl;
                    }
                }
                break;
            }
            case 'C': {
                newTemperature = getC();
                if (check(newTemperature, 'C') == 0) {
                    temperaturesHistory[recordIndex * 2] = newTemperature;
                    degreeTypesHistory[recordIndex * 2] = 'C';
                    cout << "Convert to (F/K): ";
                    cin >> convertToType;
                    if (convertToType == 'F') {
                        temperaturesHistory[recordIndex * 2 + 1] = CtoF(newTemperature);
                        degreeTypesHistory[recordIndex * 2 + 1] = 'F';
                    } else if (convertToType == 'K') {
                        temperaturesHistory[recordIndex * 2 + 1] = CtoK(newTemperature);
                        degreeTypesHistory[recordIndex * 2 + 1] = 'K';
                    } else {
                        cout << "Invalid Choice!" << endl;
                    }
                }
                break;
            }
            case 'K': {
                newTemperature = getK();
                if (check(newTemperature, 'K') == 0) {
                    temperaturesHistory[recordIndex * 2] = newTemperature;
                    degreeTypesHistory[recordIndex * 2] = 'K';
                    cout << "Convert to (F/C): ";
                    cin >> convertToType;
                    if (convertToType == 'F') {
                        temperaturesHistory[recordIndex * 2 + 1] = KtoF(newTemperature);
                        degreeTypesHistory[recordIndex * 2 + 1] = 'F';
                    } else if (convertToType == 'C') {
                        temperaturesHistory[recordIndex * 2 + 1] = KtoC(newTemperature);
                        degreeTypesHistory[recordIndex * 2 + 1] = 'C';
                    } else {
                        cout << "Invalid Choice!" << endl;
                    }
                }
                break;
            }
            default:
                cout << "Invalid Choice!" << endl;
                break;
        }
    }
}