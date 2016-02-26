#include<iostream>
#include<conio.h>
using namespace std;

int giaiThua(int x){
    if(x==0){
        return 1;
    }
    int value=1;
    for(int i=1;i<=x;i++){
        value=value*i;
    }
    return value;
}
int main(){
    int a;
    cin>>a;
    cout<<giaiThua(a);
    return 0;
}


