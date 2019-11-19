#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,ave,dif;
    cin>>a>>b>>c;
    ave=(a+b+c)/3;
    dif=2*(a+c)-3*b;
    cout<<ave<<" "<<dif;
return 0;
}