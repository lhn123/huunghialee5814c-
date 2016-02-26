#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main (int argc, char *argv[]){
    float s=0,k;
    int i;
    for(i=1;i<argc;i++){
        k=atof(argv[i]);
        s+=k;
    }
    cout<<"tong s=: "<<s;
    return(s);
}
