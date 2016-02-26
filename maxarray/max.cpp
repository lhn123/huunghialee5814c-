#include<iostream>
using namespace std;

void maxx(int a[],int na){
    int i,tam;
    for(i=0;i<na;i++){
        for(j=i+1;j<na;j++){
            if(a[i]>a[j]){
                tam=a[i];a[i]=a[j];a[j]=tam;
            }
        }
    }
    for(i=0;i<na;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int c[5],n;
    cout<<"nhap so phan tu";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"nhap phan tu thu "<<i<<" :";cin>>c[i];
    }
    maxx(c,n);
}
