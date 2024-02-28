#include "Combination.h"
#include <iostream>
using namespace std;

int main()
{
    Combination comb;
    comb.Read();
    comb.Display();
    cout << "Combination result: " << comb.combination() << endl;

    return 0;
}