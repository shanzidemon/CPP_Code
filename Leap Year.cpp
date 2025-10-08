#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a;
cout<<"Enter year :";cin>>a;
if(a%4==0 && a%100!=0 || a%400 ==0){cout<<"It is leap year.";}
else{cout<<"It is not leap Year.";}
getch();
}
