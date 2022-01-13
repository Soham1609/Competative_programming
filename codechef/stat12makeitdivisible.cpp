#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int digit;
        cin >> digit;
        int limit = pow(10, (digit - 1));
        int num = pow(10, (digit));

        for (int i= limit; i < num; i++)
        {
            if ((i % 3 == 0) && (i % 9 != 0)&& (i%2 != 0))
            {
                cout << i << endl;
               break;
            }
        }
    }
    return 0;
}