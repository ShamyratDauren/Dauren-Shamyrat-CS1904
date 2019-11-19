#include <iostream>
using namespace std;
int main(){
    double x,y;
    cin>>x>>y;
    if(x>=0 && y>=0){
        cout<<sqrt(x-sqrt(y));
    }
return 0;
}