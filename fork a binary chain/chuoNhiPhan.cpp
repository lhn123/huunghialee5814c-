#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
#define TRUE 1
#define FALSE 0
using namespace std;
int stop, Count;
void Init(int *B,int n){
    for(int i=0;i<=n;i++){
        B[i]=0;
        Count=0;
    }
}
void Result(int *B,int n){
    Count++;
    cout<<"chuoi nhi phan thu: "<<Count<<'\t';
    for(int i=1;i<=n;i++){
        cout<<B[i];
    }
    cout<<endl;
}
void nextBitsString(int *B,int n){
    int i=n;
    while(i>0&&B[i]){
        B[i]=0;i--;
    }
    if(i==0)
        stop=TRUE;
    else
        B[i]=1;
}
void Generate(int *B,int n){
    int i;
    stop=FALSE;
    while(!stop){
        Result(B,n);
        nextBitsString(B,n);
    }
}
int main(){
    int i,*B,n;
    cout<<"nhap n= ";cin>>n;
    B=(int*) malloc(n*sizeof(int));
    Init(B,n);
    Generate(B,n);
    free(B);
    getch();
}
