
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int num ; cout << "Enter a number : " ; cin>> num ;
    if(num %2 == 0)
    {
        goto print;
    }else
    {
        cout << "ODD number" << endl ;
    }
    print:
        cout << "Even Number";

    return 0 ;
}
