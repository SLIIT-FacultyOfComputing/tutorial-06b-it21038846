#include "Student.h"
#include <iostream>
#include<string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sId, char sName[]) {
  studentId = sId;
  strcpy(name, sName);
}

// Display StudentId and Name
void Student::display() {
  cout<<studentId<<" "<<name<<endl;
}
