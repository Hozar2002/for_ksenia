/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double len = 10.0, sum = 10.0;
    long day = 1;
    
    while (sum < 100.0) {
        len *= 1.1;
        sum += len;
        ++day;
    }
    
    cout << "Ответ: " << day << " День" << endl;
    return 0;
}
