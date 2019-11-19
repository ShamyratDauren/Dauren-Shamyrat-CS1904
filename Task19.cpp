#include <iostream>
using namespace std;
int main(){
    double p1, p2;
    cin>>p1>>p2;
    int a=300, b=400, n=1;
    cout<<1*(a*p1/1000+b*p2/1000)<<" ";
    a=1800;
    b=2000;
    n=3;
    cout<<3*(a*p1/1000+b*p2/1000);
return 0;
}