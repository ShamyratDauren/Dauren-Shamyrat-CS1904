#include <iostream>
using namespace std;
int main(){
    int a[4];
    for (int i=0; i<4;i++){
        cin>>a[i];
    }
    int m = 0;
    for (int i=0;i<4;i++){
        if (a[i]%2==0){
        if (a[i]>m){
            m = a[i];
        }
        }
    }
    if (m!=0){
        cout<<m;
    } else {
        cout<<"Not found";
    }
return 0;
}