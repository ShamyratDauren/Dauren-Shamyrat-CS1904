#include <iostream>
using namespace std;
int main(){
    int chastnoe, cifra, x, y=237;
    cifra=y/100;
    chastnoe=y%100;
    x=chastnoe*10+cifra;
    cout<<x;
return 0;
}