#include <iostream>
#include <stdlib.h>
#include <limits>
using namespace std;

float FtoC(float F) { return (F - 32.0) * 5.0 / 9.0; }
float FtoK(float F) { return (F + 459.67) * 5.0 / 9.0; }
float CtoF(float C) { return C * 9.0 / 5.0 + 32.0; }
float CtoK(float C) { return C + 273.15; }
float KtoC(float K) { return K - 273.15; }
float KtoF(float K) { return K * 9.0 / 5.0 - 459.67; }

float getF() { float t; cout << "Enter your temperature in F: "; cin >> t; return t; }
float getC() { float t; cout << "Enter your temperature in C: "; cin >> t; return t; }
float getK() { float t; cout << "Enter your temperature in K:"; cin >> t; return t; }

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
    cout << "1 - Fahr -> Celsius\n";
    cout << "2 - Fahr -> Kelvin\n";
    cout << "3 - Celsius -> Fahr\n";
    cout << "4 - Celsius -> Kelvin\n";
    cout << "5 - Kelvin -> Celsius\n";
    cout << "6 - Kelvin -> Fahr\n";
    cout << "7 - end program\n";
}


int main()
{
    int choise;
    float temperature;

    while (true)
    {
        system("cls");
        showMenu();
        cin >> choise;

        if (choise == 7) {
            cout << "Thank you for using the temperature converter. Goodbye!" << endl;
            return 0;
        }

        switch (choise) {
            case 1:
                temperature = getF();
                if (check(temperature, 'F') == 0)
                    cout << temperature << " F = " << FtoC(temperature) << " C" << endl;
                break;
            case 2:
                temperature = getC();
                if (check(temperature, 'F') == 0)
                    cout << temperature << " F = " << FtoK(temperature) << " K" << endl;
                break;
            case 3:
                temperature = getC();
                if (check(temperature, 'C') == 0)
                    cout << temperature << " C = " << CtoF(temperature) << " F" << endl;
                break;
            case 4:
                temperature = getC();
                if (check(temperature, 'C') == 0)
                    cout << temperature << " C = " << CtoK(temperature) << " K" << endl;
                break;
            case 5:
                temperature = getK();
                if (check(temperature, 'K') == 0)
                    cout << temperature << " K = " << KtoC(temperature) << " C" << endl;
                break;
            case 6:
                temperature = getK();
                if (check(temperature, 'K') == 0)
                    cout << temperature << " K = " << KtoF(temperature) << " F" << endl;
                break;
            default:
                cout << "Invalid Choice!" << endl;
                continue;
        }
        cout << "\nPress Enter to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}