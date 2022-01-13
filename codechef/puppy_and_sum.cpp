#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int total (int iter , int num   )
{   
    int sum = 0;
    while (iter--)
    {
        for (int i = 0; i < num +1; i++)
        {
            sum = sum +i ;
            
        }
        num = sum ;
        
    }
    return sum ;
}
int main()
{
    int t, d , n , ans ;
    
    cin >> t  ;

    while (t--)
    {
        cin>>d>>n;
        
       ans = total(d,n);
       cout<<ans<<endl;
    }
    return 0;
}
