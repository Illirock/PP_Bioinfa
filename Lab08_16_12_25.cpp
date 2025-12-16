#include <iostream>
#include <random>

using namespace std;

int dynamic_add(int* tab, int n) {}
int dynamic_mult(int* tab, int n) {}
int dynamic_sub(int* tab, int n) {
    //int minval = min_element(tab, n);
    //int maxval = max_element(tab, n);
    //return maxval - minval;
}

int main()
{
    //Zadanie 1
    //int n;
    //int* wsk = &n;
    //cout << "Enter value: " << endl;
    //cin >> n;
    //cout << "Value: " << *wsk << "\nAddress: " << wsk << endl;
    //Zadanie 2
    //int tab[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    //int* wsk;
    //for (int item : tab) {
    //    cout << item << " ";
    //}
    //cout << endl;
    //wsk = &tab[7];
    //*wsk = 77;
    //for (int item : tab) {
    //    cout << item << " ";
    //}
    //Zadanie 2.1
    //int tab[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    //int* wsk = tab;

    //for (int item : tab) {
    //cout << item << " ";
    //}

    //for (int i = 0; i < 10; i++) {
    //    *wsk = 9;
    //    wsk++;
    //}

    //cout << endl;
    //for (int item : tab) {
    //    cout << item << " ";
    //}
    //Zadanie 3
    //int n;
    //cin >> n;
    //float* tab = new float[n];

    //for (int i = 0; i < n; i++) {
    //    tab[i] = i;
    //}

    //for (int i = 0; i < n; i++) {
    //    cout << tab[i] << " ";
    //}
    //cout << endl;
    //
    //float* wsk = &tab[n-1];
    //while (true) {
    //    if (*wsk < 0) { break; }
    //    cout << *wsk << " ";
    //    wsk--;
    //}
    //Zadanie 4
    //int n;
    //cin >> n;
    //float avg = 0;
    //float* tab = new float[n];
    //for (int i = 0; i < n; i++) {
    //    tab[i] = rand() % 2137;
    //}
    //for (int i = 0; i < n; i++) {
    //    cout << tab[i] << " ";
    //}
    //Zadanie 5
    int n;
    cin >> n;
    int* tab = new int[n];
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 2137;
        cout << tab[i] << " ";
    }

    cout << "\n5.1: " << dynamic_add(tab, n) << endl;
    cout << "5.2: " << dynamic_mult(tab, n) << endl;
    cout << "5.3: " << dynamic_sub(tab, n) << endl;

    delete[] tab;
}
