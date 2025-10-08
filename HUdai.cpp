#include<iostream>
using namespace std;
int main(){
float temp[5];
cout<<"Enter The Temparature"<<endl;
for(int i=0;i<5;i++){
    cin>>temp[i];
}
float min=temp[0];
float max=temp[0];
for(int i=1;i<5;i++){
    if(min>temp[i]){
        min=temp[i];
    }
    if(max<temp[i]){
        max=temp[i];
    }
    }
    cout<<min<<endl;
    cout<<max<<endl;

}

