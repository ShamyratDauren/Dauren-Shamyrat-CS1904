#include <iostream>
using namespace std;
int main(){
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    if(a%5==0){
        sum+=a;
    }
    if(b%5==0){
        sum+=b;
    }
    if(c%5==0){
        sum+=c;
    }
    if(sum==0){
        cout<<"error";
    }
return 0;
}