#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<io.h>
using namespace std;

int a,b;
void swap(void){
    int a,b,temp;
    a=3;b=5;
    temp=a;a=b;b=temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    a=1;b=8;
    swap();
    cout<<a<<" "<<b;
}
