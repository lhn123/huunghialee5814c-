#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<io.h>
using namespace std;

int main(){
    cout<<"kich co kieu ky tu: "<<sizeof(char)<<endl;
    unsigned int a=3,b=5,c ;
    c=a&b; cout<<"c=a&b: "<<c<<endl;
    c=a|b; cout<<"c=a|b: "<<c<<endl;
    c=a^b; cout<<"c=a^b: "<<c<<endl;
    c=~a; cout<<"c=~a: "<<c<<endl;
    c=a<<b; cout<<"c=a<<b: "<<c<<endl;
    c=a>>b; cout<<"c=a>>b: "<<c<<endl;

}



