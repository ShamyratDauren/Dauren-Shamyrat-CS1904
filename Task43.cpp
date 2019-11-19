#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    if(m==12 || m==1 || m==2){
        cout<<"Winter";
    }
    if(m>=3 && m<=5){
        cout<<"Spring";
    }
    if(m>=6 && m<=8){
        cout<<"Summer";
    }
    if(m>=9 && m<=11){
        cout<<"Autumn";
    }
return 0;
}