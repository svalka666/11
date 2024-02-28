#include "Combination.h"
#include <iostream>

using namespace std;
bool Combination::Init(double k, double n)
{
    if (k >= 0 && n >= k)
    {
        first = k;
        second = n;
        return true;
    }
    else
    {
        return false;
    }
}

void Combination::Read()
{
    int k, n;
    do
    {
        cout << "Input values for combination:" << endl;
        cout << " k = "; cin >> k;
        cout << " n = "; cin >> n;
    } while (!Init(k, n));
}

void Combination::Display() const
{
    cout << endl;
    cout << " k = " << first << endl;
    cout << " n = " << second << endl;
}

double Combination::combination() const
{
    int result = 1;
    int diff = second - first;
    for (int i = second; i > diff; --i)
    {
        result *= i;
    }
    for (int i = 2; i <= first; ++i)
    {
        result /= i;
    }
    return result;
}