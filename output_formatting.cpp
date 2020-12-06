#include<bits/stdc++.h>
using namespace std ;

int main()
{

// take number after decimal
double a= 39.333333, b= 1.755577 ;
cout << fixed << setprecision(2)  << "The result is : " << a+b << endl;


// another way

double c = 29.3333393, d = 5.322222222 ;
printf("The result is : %.2lf\n",c+d);


//setw method
string name = "Shakil Babu" , dep = "Computer"  ;
cout << "My name is : " << setw(10) << name << endl ;
cout << "My deparment is : "<< setw(10) << dep << "\n";



    return 0 ;
}

