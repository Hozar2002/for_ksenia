/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double a = 0, sum = 1; long n = 1;
    cout << "Введите a: ", cin >> a, cout << endl;
    while(sum < a) {
        cout << "n: " << n << endl;
        ++n;
        sum += 1.0 / double(n);
    }

    return 0;
}
