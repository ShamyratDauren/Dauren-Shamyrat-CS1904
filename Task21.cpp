#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,p,s,c;
    cin>>a>>b;
    c=sqrt(a*a+b*b);
    s=(a*b)/2;
    p=a+b+c;
    cout<<s<<" "<<p<<" "<<c;
return 0;
}