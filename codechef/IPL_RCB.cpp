#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t , points , matches , wins;
    cin >> t;
    while (t--)
    {
        cin>>points>>matches;
        wins = points - matches;
        if (wins <0 ) wins = 0;
        cout<<wins<<endl;
    }
    return 0;
}
