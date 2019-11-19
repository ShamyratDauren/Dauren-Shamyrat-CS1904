#include <iostream>
using namespace std;
int main(){
    int a,b,c, sum, dif, sum3;
    cin>>a>>b>>c;
    sum=a+b;
    dif=c-a;
    sum3=a+b+c;
    a=sum;
    b=dif;
    c=sum3;
    cout<<a<<" "<<b<<" "<<c;
return 0;
}