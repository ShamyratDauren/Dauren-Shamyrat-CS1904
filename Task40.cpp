#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>-10 && a<10){
        a=a+5;
    }
    else{
        a=a-10;
    }
    cout<<a;
return 0;
}