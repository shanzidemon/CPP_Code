#include<iostream>
using namespace std;
int main(){
int shan[4][3];
cout<<"Enter the matrix Eliment"<<endl;
for(int i=0;i<4;i++){
for(int j=0;j<3;j++){
        cout<<"Element"<<"["<<i+1<<"]["<<j+1<<"]=";
cin>>shan[i][j];}
}
for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
            cout<<shan[i][j];
    cout<<" ";
    }
cout<<endl;}
}
