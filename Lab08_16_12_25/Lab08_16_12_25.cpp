#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

int* dynamic_add(const int* tab1, const int* tab2, int n) {
    int* result = new int[n];
    for (int i = 0; i < n; i++) {
        *(result + i) = *(tab1 + i) + *(tab2 + i);
    }
    return result;
}
int* dynamic_mult(const int* tab1, const int* tab2, int n) {
    int* result = new int[n];
    for (int i = 0; i < n; i++) {
        *(result + i) = *(tab1 + i) * *(tab2 + i);
    }
    return result;
}
int dynamic_sub(int* tab, int n) {
    int minval = *std::min_element(tab, tab + n);
    int maxval = *std::max_element(tab, tab + n);
    return maxval - minval;
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
    int* tabA = new int[n];
    int* tabB = new int[n];

    cout << "Array A:" << endl;
    for (int i = 0; i < n; i++) {
        tabA[i] = rand() % 67;
        cout << tabA[i] << " ";
    }

    cout << "\n\nArray B:" << endl;
    for (int i = 0; i < n; i++) {
        tabB[i] = rand() % 67;
        cout << tabB[i] << " ";
    }

    int* suma = dynamic_add(tabA, tabB, n);
    int* iloczyn = dynamic_mult(tabA, tabB, n);

    cout << "\n\n5.1 (suma): ";
    for (int i = 0; i < n; i++) cout << suma[i] << " ";
    cout << "\n5.2 (iloczyn): ";
    for (int i = 0; i < n; i++) cout << iloczyn[i] << " ";
    cout << "\n5.3(A): " << dynamic_sub(tabA, n) << endl;
    cout << "5.3(B): " << dynamic_sub(tabB, n) << endl;

    delete[] tabA;
    delete[] tabB;
    delete[] suma;
    delete[] iloczyn;
}
