#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;
    int n, c, sum;

    while (t--)
    {
        cin >> n >> c;
        if (c > n)
        {
            cin >> n >> c;
            int a[n];
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
                sum = sum + a[i];
            }
            if (sum < c)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}
