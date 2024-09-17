/* Wen Qian Zheng
Lecture 2
September 16th. 2024*/

#include <iostream>
#include <string>
using namespace std;

int main(){
int tni = 1886;           //defines a variable tni
float taolf = 3.14159;    //defines a variable taolf
double elbuod = 6.28318;  //defines a variable elbuod
char rahc = 'Q';          //defines a variable rahc
char ahcr = 'z';          //defines a variable ahcr
bool loob = false;        //defines a variable bool
string gnirts = "Cheese"; //defines a variable gnirts

cout << "\n\nInteger: " << tni << "\n";  //prints int 1886
cout << "Float: " << taolf << "\n";      //prints float 3.14159
cout << "Double: " << elbuod << "\n";    //prints double 6.28318
cout << "Character: " << rahc << "\n";   //prints char Q
cout << "Character2: " << ahcr << "\n";  //prints char z
cout << "Boolean: " << loob << "\n";     //prints bool false
cout << "String: " << gnirts << "\n\n";  //prints string Cheese

int inches;                                   //variable to store total inches
inches = 100;                                 //store 100 in the variable inches
cout << inches << " inch(es) = ";             //output the value of inches and the equal sign
cout << inches / 12 << " feet (foot) and";    //output maximum number of feet (foot)
cout << inches % 12 << " inch(es)\n" << endl; //output remaining inches


cout << "2 + 3.5 = " << 2 + 3.5 <<"\n";                                       //outputs the answer of 2 + 3.5
cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 <<"\n";                               //outputs the answer of 6 / 4 + 3.9
cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2)  << endl; //outputs the answer of 5.4 * 2 - (13.6 + 18 / 2)


cout << "\n" << rahc << " is 'Q', and " << ahcr << " is 'z'." << endl; //outputs Q is 'Q', and z is 'z'.
cout << "Q < z = " << (rahc < ahcr) << "." << endl << endl;            //is "Q < z" true? yes.

return 0;} //returns 0 when program completes
