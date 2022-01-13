#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include<string>
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str ;
        cin>>str;
        int n = str.length();
        string a = "0";
        for (int i = n-1;  i>=0; i--)
        {
            
            int value = stoi(str);
            for (int i = 0; i < n and value %10  != 0 ; i++)
            {
                /* code */
                value = value/10;
                n = n-1;
            }         
                cout<<str[i];               
        }
        
    cout<<endl;
    }
    return 0;
}
