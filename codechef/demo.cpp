// #include <iostream>
// using namespace std;
// #include <math.h>
// #include <stdio.h>

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         

//     }
//     return 0;
// }

// C++ program to count occurrences of a given
// character
#include <iostream>
#include <string>

using namespace std;

// Function that return count of the given
// character in the string

int count(string s, char c)
{

    // Count variable

    int res = 0;

    for (int i = 0; i < s.length(); i++)

        // checking character in string

        if (s[i] == c)

            res++;

    return res;
}

// Driver code

int main()
{
    int t;
    cout<<"enter";
    cin >> t;

    while (t--)
    {
        string num;
        cin >> num;

        string str = num;

        char c = '4';

        cout << count(str, c) << endl;
    }

    return 0;
}