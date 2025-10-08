#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter your marks Number"<<endl;
cin>>marks;
if(marks>=90 && marks<=100){
cout<<"CGPA 4.00 which is A+";}
else if(marks>=85 && marks<90){
cout<<"CGPA is 3.75 which is A";}
else if(marks>=80 && marks<85){
cout<<"CGPA is 3.50 which is B+";}
else if(marks>=75 && marks<80){
cout<<"CGPA is 3.25 which is B";}
else if(marks>=70 && marks<75){
cout<<"CGPA IS 3.00 which is C+";}
else if(marks>=65 && marks<70){
cout<<"CGPA is 2.75 which is C";}
else if(marks>=60 && marks<65){
cout<<"Your CGPA is 2.50 which is D+";}
else if(marks>=50 && marks<60){
cout<<"CGPA is 2.25 which is D and also Probation";}
else if(marks<50 && marks>=0){
cout<<"You are fail.Shame man;";}
else {cout<<"Invalid Input";}
return 0;
}