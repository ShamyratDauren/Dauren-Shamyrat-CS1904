#include <iostream>
using namespace std;
int main(){
    double x,a,y,k;
    cin>>x>>a;
    cin>>y;
    y=(y*a)/x;
    cin>>k;
    k=k*x/a;
    cout<<y<<" "<<k;
return 0;
}