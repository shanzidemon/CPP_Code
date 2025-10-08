#include<iostream>
using namespace std;
int main(){
int shan[4][3];
cout<<"Enter the A matrix Eliment"<<endl;
for(int i=0;i<4;i++){
for(int j=0;j<3;j++){
        cout<<"Element"<<"["<<i+1<<"]["<<j+1<<"]=";
cin>>shan[i][j];}
cout<<endl;
}
/*for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
            cout<<shan[i][j];
    cout<<" ";
    }
cout<<endl;}
*/
int B[4][3];
cout<<"Enter the B matrix Eliment"<<endl;
for(int i=0;i<4;i++){
for(int j=0;j<3;j++){
        cout<<"Element"<<"["<<i+1<<"]["<<j+1<<"]=";
cin>>B[i][j];
}
cout<<endl;
}

int c[4][3];
for(int i=0;i<4;i++){
for(int j=0;j<3;j++){
       c[i][j]=shan[i][j] + B[i][j];
}
}

for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
            cout<<c[i][j];
    cout<<" ";
    }
cout<<endl;}
}

