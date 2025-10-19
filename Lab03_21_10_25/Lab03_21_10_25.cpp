#include <iostream>

using namespace std;

int main()
{
    // Zadanie 1
    int a,b;
    cout << "Podaj dwie liczby calkowite: " << endl;
    cin >> a >> b;
    if (a == b) {
    cout << "Liczba 'a' jest równa liczbie 'b'" << endl;
    }
    else if (a > b) {
        cout << "Liczba 'a' jest większa od liczby 'b'" << endl;
    }
    else {
        cout << "Liczba 'a' jest mniejsza od liczby 'b'" << endl;
    }
}