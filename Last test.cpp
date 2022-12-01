/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    long n[10]; 
    long c = 0;
    long _min = numeric_limits<int>::max();
    long _max = numeric_limits<int>::min();
    
    srand(time(0));
    
    for (int I = 0; I < 10; ++I) {
        n[I] = rand();
    }
    
    for (int J = 0; J < 10; ++J) {
        cout << "N" << J + 1 << ": " << n[J] << endl;
        _max = max(_max, n[J]);
        _min = min(_min, n[J]);
    }
    
    c = _min + _max;
    cout << "Сумма мин. + макс.: " << c << endl;
    return 0;
}
