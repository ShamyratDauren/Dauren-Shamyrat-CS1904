#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a=0.1, b=0.2, x=1;
    cout<<pow((pow(x,2)+b), 0.2)-(b*b*pow(sin(x+a), 3))/x;
return 0;
}