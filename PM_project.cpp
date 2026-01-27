#include <iostream>
#include <limits>
#include "PM_project_functions.cpp"
#include "headerFile.h"

using namespace std;

int main()
{
    float temperature;

    while (true)
    {
        system("cls");
        showMenu();
        int choise = choiseValidation("\nEnter your choice: ", showMenu);
        system("cls");

        if (choise == -1) {
            cout << "Thank you for using the temperature converter. Goodbye!" << endl;
            return 0;
        }

        switch (choise) {
            case 1: {
                temperature = getF();
                if (check(temperature, 'F') == 0) {
                    cout << temperature << "F = " << FtoC(temperature) << "C" << endl;
                    saveData(temperature, FtoC(temperature), 'F', 'C');
                }
                break;
            }
            case 2: {
                temperature = getF();
                if (check(temperature, 'F') == 0) {
                    cout << temperature << "F = " << FtoK(temperature) << "K" << endl;
                    saveData(temperature, FtoK(temperature), 'F', 'K');
                }
                break;
            }
            case 3: {
                temperature = getC();
                if (check(temperature, 'C') == 0) {
                    cout << temperature << "C = " << CtoF(temperature) << "F" << endl;
                    saveData(temperature, CtoF(temperature), 'C', 'F');
                }
                break;
            }
            case 4: {
                temperature = getC();
                if (check(temperature, 'C') == 0) {
                    cout << temperature << "C = " << CtoK(temperature) << "K" << endl;
                    saveData(temperature, CtoK(temperature), 'C', 'K');
                }
                break;
            }
            case 5: {
                temperature = getK();
                if (check(temperature, 'K') == 0) {
                    cout << temperature << "K = " << KtoC(temperature) << "C" << endl;
                    saveData(temperature, KtoC(temperature), 'K', 'C');
                }
                break;
            }
            case 6: {
                temperature = getK();
                if (check(temperature, 'K') == 0) {
                    cout << temperature << "K = " << KtoF(temperature) << "F" << endl;
                    saveData(temperature, KtoF(temperature), 'K', 'F');
                }
                break;
            }
            case 7: {
                showHistory();
                break;
            }
            case 8: {
                deleteRecord();
                break;
            }
            case 9: {
                modifyRecord();
                break;
            }
            case 0: {
                fillHistoryWithRandomValues();
                break;
            }
            default:
                cout << "Invalid Choice!" << endl;
                break;
        }
        cout << "\nPress Enter to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}
