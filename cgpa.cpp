#include <iostream>
 
using namespace std;
 
int main()
{
    int nSubject;
    float gpa=0, cgpa=0;
 
    cout << "Enter the number of subjects: ";
    cin >> nSubject;
 
    float obtainedNumber[nSubject];
    float obtainedGrade[nSubject];
 
    for(int i=0; i<nSubject; i++){
        cout << "Enter obtained marks of subject " << i+1 << " :";
        cin >> obtainedNumber[i];
 
        if (obtainedNumber[i] >= 90 && obtainedNumber[i] <= 100){
            obtainedGrade[i] = 4;
        }
        else if (obtainedNumber[i] >= 85 && obtainedNumber[i] < 90){
            obtainedGrade[i] = 3.75;
        }
        else if (obtainedNumber[i] >= 80 && obtainedNumber[i] < 85){
            obtainedGrade[i] = 3.5;
        }
        else if (obtainedNumber[i] >= 75 && obtainedNumber[i] < 80){
            obtainedGrade[i] = 3.25;
        }
        else if (obtainedNumber[i] >= 70 && obtainedNumber[i] < 75){
            obtainedGrade[i] = 3;
        }
        else if (obtainedNumber[i] >= 65 && obtainedNumber[i] < 70){
            obtainedGrade[i] = 2.75;
        }
        else if (obtainedNumber[i] >= 60 && obtainedNumber[i] < 65){
            obtainedGrade[i] = 2.5;
        }
        else if (obtainedNumber[i] >= 50 && obtainedNumber[i] < 60){
            obtainedGrade[i] = 2.25;
        }
        else if (obtainedNumber[i] >= 0 && obtainedNumber[i] < 50){
            obtainedGrade[i] = 0;
        }
        gpa = gpa+obtainedGrade[i];
    }
    cgpa = gpa/nSubject;
    cout << "CGPA: " << cgpa;
    return 0;
}