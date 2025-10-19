#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Zadanie 1
    // int a,b;
    // cout << "Podaj dwie liczby calkowite: " << endl;
    // cin >> a >> b;
    // cout << "'a' = " << a << "\n'b' = " << b << endl;
    // if (a == b) {
    // cout << "Liczba 'a' jest równa liczbie 'b'" << endl;
    // }
    // else if (a > b) {
    //     cout << "Liczba 'a' jest większa od liczby 'b'" << endl;
    // }
    // else {
    //     cout << "Liczba 'a' jest mniejsza od liczby 'b'" << endl;
    // }
    // Zadanie 2
    // int a,b;
    // cout << "Podaj dwie liczby calkowite: " << endl;
    // cin >> a >> b;
    // cout << "'a' = " << a << "\n'b' = " << b << endl;
    // if (a == b) {
    //     cout << "Liczba 'a' jest równa liczbie 'b'" << endl;
    // }
    // else {
    //     if (a > b) {
    //         cout << "Liczba 'a' jest większa od liczby 'b'" << endl;
    //     }
    //     else {
    //         cout << "Liczba 'a' jest mniejsza od liczby 'b'" << endl;
    //     }
    // }
    // Zadanie 3
    // float r;
    // cout << "Podaj współczynnik r " << endl;
    // cin >> r;
    // if (0.7 <= r and r <= 1.0) {
    //     cout << "Bardzo silna korelacja dodatnia" << endl;
    // }
    // else if (r >= 0.5) {
    //     cout << "Silna korelacja dodatnia" << endl;
    // }
    // else if (r >= 0.3) {
    //     cout << "Umiarkowana korelacja dodatnia" << endl;
    // }
    // else if (r >= 0.2) {
    //     cout << "Słaba korelacja dodatnia" << endl;
    // }
    // else if (r >= 0.0) {
    //     cout << "Brak korelacji" << endl;
    // }
    // else {
    //     cout <<"Wartość r jest spoza zakresu 0.0 - 1.0" << endl;
    // }
    // Zadanie 4
    // float a,b;
    // char operation;
    // cout << "Podaj dwie liczby rzeczywiste: " << endl;
    // cin >> a >> b;
    // cout << "Podaj znak operacji (+, -, *, /): " << endl;
    // cin >> operation;
    // if (operation == '+') {
    //     cout << "Wynik dodawania: " << a + b << endl;
    // }
    // else if (operation == '-') {
    //     cout << "Wynik odejmowania: " << a - b << endl;
    // }
    // else if (operation == '*') {
    //     cout << "Wynik mnożenia: " << a * b << endl;
    // }
    // else if (operation == '/') {
    //     if (b != 0) {
    //         cout << "Wynik dzielenia: " << a / b << endl;
    //     }
    //     else {
    //         cout << "Nie można dzielić przez 0" << endl;
    //     }
    // }
    // else {
    //     cout << "Błąd: Nieznana operacja!" << endl;
    // }
    // Zadanie 5
    // string infinity = "";
    // while (infinity.empty()) {
    //     cout << "Pętla jest nieskończona!" << endl;
    // }
    // Zadanie 6
    // bool condition = true;
    // while (condition) {
    //     float a,b;
    //     char operation;
    //     cout << "Podaj dwie liczby rzeczywiste: " << endl;
    //     cin >> a >> b;
    //     cout << "Podaj znak operacji (+, -, *, /): " << endl;
    //     cin >> operation;
    //     if (operation == '+') {
    //         cout << "Wynik dodawania: " << a + b << endl;
    //     }
    //     else if (operation == '-') {
    //         cout << "Wynik odejmowania: " << a - b << endl;
    //     }
    //     else if (operation == '*') {
    //         cout << "Wynik mnożenia: " << a * b << endl;
    //     }
    //     else if (operation == '/') {
    //         if (b != 0) {
    //             cout << "Wynik dzielenia: " << a / b << endl;
    //         }
    //         else {
    //             cout << "Nie można dzielić przez 0" << endl;
    //         }
    //     }
    //     else {
    //         cout << "Błąd: Nieznana operacja!" << endl;
    //     }
    //     cout << "Czy chcesz kontynuować? (t/n): " << endl;
    //     char answer;
    //     cin >> answer;
    //     if (tolower(answer) == 'n') {
    //         condition = false;
    //     }
    // }
    // Zadanie 7
    for (int i = 0; i > -1; i++) {
        if (i%2 != 0) {
            cout << i << endl;
        }
        if (i >=200) {
            break;
        }
    }
    // Zadanie 8
    int n;
    bool condition = true;

    while (condition) {
        cout << "Podaj liczbe naturalną dodatnią" << endl;
        cin >> n;
        if (n > 0) {
            condition = false;
        }
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cout << "Pierwszy dzielnik liczby " << n << " to " << i << endl;
                break;
            }
        }
    }
}