#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   if((a+b)>(b+c)&&(a+b)>(b+c)){
        cout<<a<<" "<<b;
   }
   if((b+c)>(a+b)&&(b+c)>(a+c)){
        cout<<b<<" "<<c;
   }
   if((a+c)>(a+b)&&(a+c)>(b+c)){
        cout<<a<<" "<<c;
   }
return 0;
}