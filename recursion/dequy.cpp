#include<iostream>
#include<conio.h>
using namespace std;

int giaiThua(int n){
    if(n==0)
        return 1;
    return(n*giaiThua(n-1));
}
int main(){
    int x;
    cout<<"nhap : ";cin>>x;
    cout<<giaiThua(x);

}
