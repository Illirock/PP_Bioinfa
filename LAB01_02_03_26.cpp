#include <iostream>

using namespace std;

class Triangle
{
public:
    int a, h;

    Triangle() {
        cout << "Podaj dlugosc podstawe i wysokosc" << endl;
        cin >> a >> h;
    }

    void Area() {
        cout << "\nPole: " << (a * h) / 2 << endl;
    }
};

int main() {
    int counter = 0;
    for (int i = 0; i < 3; i++) {
        Triangle trojkat;
        trojkat.Area();
        counter++;
    }
    cout << "Istnieją: " << counter << "obiekty";
}