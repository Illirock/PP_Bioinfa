#include <iostream>

using namespace std;

int Fibbonaci(int n) 
{
    if (n <= 1) { return n; }
    return Fibbonaci(n - 1) + Fibbonaci(n - 2);
}

int Power(int base, int exponent)
{
    int result = 1;
    if (exponent == 0) { return result; }
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int Power_recursive(int base, int exponent)
{
    if (exponent == 0) { return 1; }
    return base * Power(base, exponent - 1);
}


int Factorial_recurive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * Factorial_recurive(n - 1);
}

int Natural_sum_recurive(int n)
{
    if (n == 0) { return n; }
    return n + Natural_sum_recurive(n - 1);
}

int GCD_recursive(int a, int b) {
}

int main()
{
    //Zadanie 6
    //cout << "Enter nth element of fibbonaci" << endl;
    //int answear;
    //cin >> answear;
    //cout << answear << " element of Fibbonaci sequence: " << Fibbonaci(answear-1) << endl;
    //Zadanie 7
    //cout << "Enter base and exponent for Power function" << endl;
    //int base, exponent;
    //cin >> base >> exponent;
    //cout << "Iteration Ver. " << Power(base, exponent) << "\nRecursive Ver. " << Power_recursive(base, exponent) << endl;
    //Zadanie 8
    //cout << "Enter nth Factorial " << endl;
    //int answear;
    //cin >> answear;
    //cout << "Result: " << Factorial_recurive(answear);
    //Zadanie 9
    //cout << "Enter nth natural number " << endl;
    //int answear;
    //cin >> answear;
    //cout << "Result: " << Natural_sum_recurive(answear);
    //Zadanie 10
}
