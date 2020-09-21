#include <iostream>
#include <cmath>

using namespace std;

 //int
 //overflow
 int value1=2147483650; // same to long datatype
 
 //underflow
 int value2=-2147483650;
 
 //overflow
 unsigned int value3=429496729989;

 //underflow
 unsigned long int value4=-4294967299;

 //shart int
 //overflow
 signed short int value5=32769;
 
 //underflow
 signed short int value6=-32769;
 
 //overflow
 unsigned short int value7=65539;

 //underflow
 unsigned short int value8=-65542;
 
 //char
 //overflow
 signed char value9= 129;
 
 //underflow
 signed char value10 =-129;
 
 //overflow
 unsigned char value11= 258;
 
 //underflow
 unsigned char value12= -25;
 
 int main() {
	//int unsigned and signed 
	//short
	//char
  cout<<value1<<endl;
  cout<<value2<<endl;
  cout<<value3<<endl;
  cout<<value4<<endl;
  cout<<value5<<endl;
  cout<<value6<<endl;
  cout<<value7<<endl;
  cout<<value8<<endl;
  cout<<value9<<endl;
  cout<<value10<<endl;
  cout<<value11<<endl;
  cout<<value12<<endl;
  return 0;
  }
