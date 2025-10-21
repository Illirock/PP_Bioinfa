#include <iostream>
#include <stdlib.h>

using namespace std;

float FtoC(float degrees) { return (5.0 / 9.0) * (degrees - 32); }
float FtoK(float degrees) { return (degrees - 32) * (5.0 / 9.0) + 273.15; }
float CtoF(float degrees) { return degrees * (9.0 / 5.0) + 32; }
float CtoK(float degrees) { return degrees + 273.15; }
float KtoC(float degrees) { return degrees - 273.15; }
float KtoF(float degrees) { return (degrees - 273.15) * (9.0 / 5.0) + 32; }

int check(float temperature, char degreeType) {
    switch(degreeType) {
        case 'F':
            if (temperature < -459.67) {
                cout << "Error: Temperature below absolute zero" << endl;
                return 1;
            }
            break;
        case 'C':
            if (temperature < -273.15) {
                cout << "Error: Temperature below absolute zero" << endl;
                return 1;
            }
            break;
        case 'K':
            if (temperature < 0) {
                cout << "Error: Temperature below absolute zero" << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Incorrect Degree Type" << endl;
            return 1;
    }
    return 0;
}

int main()
{
    int respond;
    float temperature;
    char degreeType;
    bool infinity = true;

    while (infinity)
    {
        system("cls");
        cout << "1 - przelicz Fahr -> Celsius\n2 - przelicz Fahr->Kelwin\n3 - przelicz Celsius -> Fahr\n4 - przelicz Celsius -> Kelwin\n5 - przelicz Kelwin -> Celsius\n6 - przelicz Kelwin -> Fahr\n7 - zakończ działanie programu" << endl;
        cin >> respond;
        if (respond >=1 && respond <=6)
        {
            cout << "Enter temperature: " << endl;
            cin >> temperature;
            switch (respond) {
                case 1: degreeType = 'F'; break;
                case 2: degreeType = 'F'; break;
                case 3: degreeType = 'C'; break;
                case 4: degreeType = 'C'; break;
                case 5: degreeType = 'K'; break;
                case 6: degreeType = 'K'; break;
            }
            if (check(temperature, degreeType) == 0)
            {
                switch (respond) {
                    case 1:
                        temperature = FtoC(temperature);
                        break;
                    case 2:
                        temperature = FtoK(temperature);
                        break;
                    case 3:
                        temperature = CtoF(temperature);
                        break;
                    case 4:
                        temperature = CtoK(temperature);
                        break;
                    case 5:
                        temperature = KtoC(temperature);
                        break;
                    case 6:
                        temperature = KtoF(temperature);
                        break;
                }
                cout << "Converted temperature: " << temperature << endl;
				cin.ignore();
				cin.get();
            }
        }
        else if (respond == 7)
        {
            infinity = false;
            return 0;
        }
        else
        {
            cout << "Error: Incorrect Value" << endl;
        }
    }
}