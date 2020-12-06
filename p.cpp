#include<bits/stdc++.h>
using namespace std ;
int main()
{
double a,b,c ; cin>>a>>b>>c ;
double pi =3.14159 ;

double tr = (a*c)/2 ;
double cr = pi * (c*c);
double trp = c*(a+b)/2 ;
double qu = b*b ;
double re = a*b ;

printf("TRIANGULO: %.3hlf\nCIRCULO: %.3hlf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tr, cr, trp, qu, re);

    return 0 ;
}
