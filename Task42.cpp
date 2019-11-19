#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>=2 && a<=5){
        b=a+10;
    }
    if(a>7 && a<40){
        b=a-100;
    }
    if(a<=0 || a>3000){
        b=a*3;
    }
    else{
        b=0;
    }
    cout<<b;
return 0;
}