#include<iostream>
using namespace std;
int main(){
int row,col;
cout<<"Enter the row Number :";
cin>>row;
cout<<"Enter the coloum Number :";
cin>>col;
int r1[row][col],r2[row][col],r3[row][col],transpose[row][col];
cout<<"Enter Input 1st Matrix"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"["<<i+1<<"]["<<j+1<<"] :";
        cin>>r1[i][j];
    }
    }
    cout<<"Enter Input 2nd Matrix"<<endl;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"["<<i+1<<"]["<<j+1<<"] :";
        cin>>r2[i][j];
    }
    }

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        //cout<<"["<<i+1<<"]["<<j+1<<"] :";
        r3[i][j]=r1[i][j]+r2[i][j];
    }
    }
    cout<<"The Addition Matrix is:"<<endl;
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       // cout<<"["<<i+1<<"]["<<j+1<<"] :";
        cout<<r3[i][j]<<" ";
    }
cout<<endl;
}

    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       // cout<<"["<<i+1<<"]["<<j+1<<"] :";
       transpose[j][i]=r3[i][j];   }
}
 cout<<"The Transepose Matrix is:"<<endl;
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       // cout<<"["<<i+1<<"]["<<j+1<<"] :";
        cout<<transpose[i][j]<<" ";
    }
cout<<endl;
}

}


