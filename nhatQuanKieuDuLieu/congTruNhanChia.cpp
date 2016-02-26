#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<io.h>
using namespace std;

long int tong(int a,int b){
    return((long)a+(long)b);
}
int hieu(int a,int b){
    return(a-b);
}
long int tich(int a,int b){
    return((long)a*(long)b);
}
float thuong(int a, int b){
    return((float)a/(float)b);
}
int main(){
    int a=30000,b=20000;
    cout<<"tong: "<<tong(a,b)<<endl;
    cout<<"hieu: "<<hieu(a,b)<<endl;
    cout<<"tich: "<<tich(a,b)<<endl;
    cout<<"thuong: "<<thuong(a,b);
}
