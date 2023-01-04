#include<iostream>
using namespace std;
main(){
string name;
float matric_marks;
float intermediate_marks;
float ecat_marks;
float aggregate;
float ecat;
float intermediate;
float matric;

cout<< "Enter name: ";
cin >> name;
cout << "Enter Matric Marks(out of 1100): ";
cin >> matric_marks;
cout << "Enter Intermediate Marks(out of 550): ";
cin >> intermediate_marks;
cout << "Enter ecat marks(out of 400):  ";
cin >> ecat_marks;
ecat = 50 * ecat_marks/400;
intermediate = 40 * intermediate_marks/550;
matric = 10 * matric_marks/1100;
aggregate = ecat + intermediate + matric;
cout << "Your aggregate is: "<< aggregate;

}