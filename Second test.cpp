/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long n[10]; long c = 0;
    
    for (int I = 0; I < 10; ++I) {
        cout << "Введите число " << I + 1 << ": ", cin >> n[I], cout << endl;
    }
    
    for (int J = 0; J < 10; ++J) {
        if (n[J] % 3 == 0) {
            cout << n[J] << " кратно 3" << endl;
            ++c;
        }
    }
    
    cout << "Количество: " << c << endl;
    return 0;
}
