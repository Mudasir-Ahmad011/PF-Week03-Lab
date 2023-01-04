#include<iostream>
using namespace std;
main(){
int megabytes;
double bits;
int useinput;
int kilobytes;
int bytes;

cout << "Enter value in megabyte: ";
cin >> userinput;
megabytes = 1024;
kilobytes =1024;
bytes =8;
bits = megabytes * kilobytes * bytes* userinput;
cout << "In bits: "<< bits; 

}