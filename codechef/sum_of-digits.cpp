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
        int n ,sum;
        sum = 0;
        cin>>n;
        while(n>0)
        {
            /* code */
        
        
           sum = n%10 + sum; 
           n = n/10;
        }
        cout<<sum<<endl;

    }
    return 0;
}
