#include <iostream>
#include <limits>
#include <stdlib.h>
#include "PM_project_functions.cpp"
#include "headerFile.h"

using namespace std;

int main()
{
    int choise;
    float temperature;

    while (true)
    {
        system("cls");
        showMenu();
        cin >> choise;
        system("cls");

        if (choise == 7) {
            cout << "Thank you for using the temperature converter. Goodbye!" << endl;
            return 0;
        }

        switch (choise) {
            case 1: {
                temperature = getF();
                if (check(temperature, 'F') == 0) {
                    cout << temperature << "F = " << FtoC(temperature) << "C" << endl;
                    SaveData(temperature, FtoC(temperature), 'F', 'C');
                }
                break;
            }
            case 2: {
                temperature = getF();
                if (check(temperature, 'F') == 0) {
                    cout << temperature << "F = " << FtoK(temperature) << "K" << endl;
                    SaveData(temperature, FtoK(temperature), 'F', 'K');
                }
                break;
            }
            case 3: {
                temperature = getC();
                if (check(temperature, 'C') == 0) {
                    cout << temperature << "C = " << CtoF(temperature) << "F" << endl;
                    SaveData(temperature, CtoF(temperature), 'C', 'F');
                }
                break;
            }
            case 4: {
                temperature = getC();
                if (check(temperature, 'C') == 0) {
                    cout << temperature << "C = " << CtoK(temperature) << "K" << endl;
                    SaveData(temperature, CtoK(temperature), 'C', 'K');
                }
                break;
            }
            case 5: {
                temperature = getK();
                if (check(temperature, 'K') == 0) {
                    cout << temperature << "K = " << KtoC(temperature) << "C" << endl;
                    SaveData(temperature, KtoC(temperature), 'K', 'C');
                }
                break;
            }
            case 6: {
                temperature = getK();
                if (check(temperature, 'K') == 0) {
                    cout << temperature << "K = " << KtoF(temperature) << "F" << endl;
                    SaveData(temperature, KtoF(temperature), 'K', 'F');
                }
                break;
            }
            case 8: {
                int index = 0;
                if (dataCounter == 0) {
                    cout << "No conversion history available." << endl;
                    break;
                }
                for (int i = 0; i < dataCounter; i += 2) {
                    cout << "[" << index++ << "] " << temperaturesHistory[i] << degreeTypesHistory[i] << " = "
                          << temperaturesHistory[i + 1] << degreeTypesHistory[i + 1] << endl;
                }
                break;
            }
            default:
                cout << "Invalid Choice!" << endl;
                continue;
        }
        cout << "\nPress Enter to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}