/* Wen Qian Zheng
Lecture 2
September 16th. 2024*/

#include <iostream>
#include <string>
using namespace std;

int main(){
int tni = 1886;
float taolf = 3.14159;
double elbuod = 6.28318;
char rahc = 'Q';
bool loob = false;
string gnirts = "Cheese";

cout << "\n\nInteger: " << tni << "\n"; // 
cout << "Float: " << taolf << "\n";     //
cout << "Double: " << elbuod << "\n";   //
cout << "Character: " << rahc << "\n";  //
cout << "Boolean: " << loob << "\n";    //
cout << "String: " << gnirts << "\n\n"; //

int inches;                                  //variable to store total inches
inches = 100;                                //store 100 in the variable inches
cout << inches << "inch(es) = ";             //output the value of inches and the equal sign
cout << inches / 12 << "feet (foot) and";    //output maximum number of feet (foot)
cout << inches % 12 << "inch(es)\n" << endl; //output remaining inches


cout << "2 + 3.5 = " << 2 + 3.5 <<"\n";
cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 <<"\n";
cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << endl;

return 0;}
