#include<bits/stdc++.h>
using namespace std ;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,c ; cin>>a>>b>>c ;
int temp;
if(b>a && a>c){
temp = a ;
}else if(c>a && c>b){
temp = c ;
}else{
temp = b ;
}
cout << temp << " eh o maior" << endl ;


    return 0 ;
}


