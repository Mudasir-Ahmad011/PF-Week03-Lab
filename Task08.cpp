#include<iostream>
using namespace std;
main(){
double bits;
double bytes;
double KB;
double MB;

cout << "Enter bits: ";
cin >> bits;
bytes = bits/8;
KB = bits/(8*1024);
MB = bits/(8*1024*1024);

cout << bits << "is equal to "<< bytes << "Bytes"<<endl;
cout << bits << "is equal to "<< KB << "KB"<<endl;
cout << bits << "is equal to "<< MB << "MB"<<endl;

}