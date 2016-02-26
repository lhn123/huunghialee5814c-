#include<iostream>
#include<conio.h>
using namespace std;
int snt(int n){
    int dem,j;
    for(j=1;j<=n;j++){
        if(n%j==0)
            dem++;
    }
    if(dem==2)
        return 1;
    return 0;
}
void tach(int a[], int &na, int b[]){
    int nb=0;
    for(int i=0;i<a[i];i++){
        if(snt(a[i])==1){
            b[nb]=a[i];
            nb++;
        }
    }
    for(int i=0;i<na;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<nb;i++){
        cout<<b[i]<<" ";
    }
}
int main(){
    int x[8],y[8],n;
    cout<<"nhap so phan tu: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"nhap phan tu thu "<<i<<" : ";cin>>x[i];
    }
    tach(x,n,y);
}
