#include <iostream>
using namespace std;
int main(){
    int d, s, sum;
    cin>>d>>s>>sum;
    s=s/100;
    for(int i=0; i<d; i++){
        sum=sum+3;
        sum+=sum*s;
    }
    cout<<sum;
return 0;
}