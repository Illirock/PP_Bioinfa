#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

struct Rectangle {
    int a, b;
};

struct Triangle {
    int a, h;
};

int P(Rectangle r) { return r.a * r.b; }

void transfer(Triangle* parent, Triangle& child) {
    child.a = (*parent).a;
    child.h = (*parent).h;
}

int main()
{
    // Zadanie 1
    //Point punkt;
    //cout << "WprowadŸ wspó³rzêdne punktu P: " << endl;
    //cin >> punkt.x >> punkt.y;
    //cout << "P(" << punkt.x << ", " << punkt.y << ")" << endl;
    // Zadanie 2
    //Rectangle prostokat;
    //cout << "WprowadŸ wymiary prostok¹ta " << endl;
    //cin >> prostokat.a >> prostokat.b;
    //cout << "Pole: " << P(prostokat) << "j^2" << endl;
    // Zadanie 3
    Triangle trojkat_1;
    Triangle* trojakt_2 = new Triangle();
    trojkat_1.a = 0;
    trojkat_1.h = 0;
    cout << "WprowadŸ d³ugoœæ podstawy oraz wysokoœæ trojk¹ta" << endl;
    cin >> (*trojakt_2).a >> (*trojakt_2).h;
    cout << "Trojk¹t 1: a = " << trojkat_1.a << ", h = " << trojkat_1.h << endl;
    cout << "Trojk¹t 2: a = " << (*trojakt_2).a << ", h = " << (*trojakt_2).h << endl;
    transfer(trojakt_2, trojkat_1);
    cout << "================================================" << endl;
    cout << "Trojk¹t 1: a = " << trojkat_1.a << ", h = " << trojkat_1.h << endl;
    cout << "Trojk¹t 2: a = " << (*trojakt_2).a << ", h = " << (*trojakt_2).h << endl;
}

