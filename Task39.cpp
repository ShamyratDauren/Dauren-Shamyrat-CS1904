#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    if(a>b){
        cout<<"yes";
    }
    else{
        c=a;
        a=b;
        b=c;
        cout<<a<<" "<<b;
    }
return 0;
}