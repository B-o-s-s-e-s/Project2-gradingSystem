#include <iostream>
using namespace std;

int main() {
  int x[3];
  
  for(int i = 0; i < 3; i++){
    cout << "Exam "<< i + 1 << ":";
    cin >> x[i];
  }

  int total = 0;
  for(int i = 0; i < 3; i++){
    total += x[i];
    
  }
  cout << "Average: "<< total/3.0 <<endl;
  

  for(int i = 0; i <3; i++){
    string grade;
    if(x[i] >= 93) grade = "A";
    else if(x[i] >= 90) grade = "A-";
    else if(x[i] >= 87) grade = "B+";
    else if (x[i] >= 83) grade = "B";
    else if (x[i] >= 80) grade = "B-";
    else if(x[i] >= 77) grade = "C+";
    else if (x[i] >= 73) grade = "C";
    else if (x[i] >= 70) grade = "C-";
    else if(x[i] >= 67) grade = "D+";
    else if (x[i] >= 63) grade = "D";
    else if (x[i] >= 60) grade = "D-";
    else grade = "F";

    cout << "Grade" << i+1 << ":"<<grade << endl;


  }

   return 0;

}
