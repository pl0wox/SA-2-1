// This program demonstrates the IntStack class.
#include <iostream>
#include "Data.h"
#include "Implementation.cpp"
using namespace std;

int main()
{
	classStack <int>stack(5);
	int catchVarint;

  cout << "-=-=-=-=-=-=-=-=-=-\n";
  cout << "INTEGERS\n\n";
	cout << "Pushing 5\n";
	stack.push(5);
	cout << "Pushing 10\n";
	stack.push(10);
	cout << "Pushing 15\n";
	stack.push(15);
	cout << "Pushing 20\n";
	stack.push(20);
	cout << "Pushing 25\n\n";
	stack.push(25);
  cout << "Popping...\n";
	stack.pop(catchVarint);
	cout << catchVarint << endl;
	stack.pop(catchVarint);
	cout << catchVarint << endl;
	stack.pop(catchVarint);
	cout << catchVarint << endl;
	stack.pop(catchVarint);
	cout << catchVarint << endl;
	stack.pop(catchVarint);
	cout << catchVarint << endl << endl;

  classStack <char>stackChar(5);
  char catchVarchar;

  cout << "-=-=-=-=-=-=-=-=-=-\n";
  cout << "CHARACTERS\n\n";
  
  cout << "Pushing 'H' \n";
  stackChar.push('H');
  cout << "Pushing 'E' \n";
  stackChar.push('E');
  cout << "Pushing 'L' \n";
  stackChar.push('L');
  cout << "Pushing 'L' \n";
  stackChar.push('L');
  cout << "Pushing 'O' \n\n";
  stackChar.push('O');

  cout << "Popping...\n";
  stackChar.pop(catchVarchar);
  cout << catchVarchar << endl;
	stackChar.pop(catchVarchar);
	cout << catchVarchar << endl;
	stackChar.pop(catchVarchar);
	cout << catchVarchar << endl;
	stackChar.pop(catchVarchar);
	cout << catchVarchar << endl;
	stackChar.pop(catchVarchar);
	cout << catchVarchar << endl << endl;

  classStack <double>stackFloat(5);
  double catchVarfloat;

  cout << "-=-=-=-=-=-=-=-=-=-\n";
  cout << "FLOATS\n\n";

  cout << "Pushing 1.5\n";
  stackFloat.push(1.5);
  cout << "Pushing 2.5\n";
  stackFloat.push(2.5);
  cout << "Pushing 3.5\n";
  stackFloat.push(3.5);
  cout << "Pushing 4.5\n";
  stackFloat.push(4.5);
  cout << "Pushing 5.5\n\n";
  stackFloat.push(5.5);

  cout <<"Popping...\n";
  stackFloat.pop(catchVarfloat);
  cout << catchVarfloat << endl;
  stackFloat.pop(catchVarfloat);
  cout << catchVarfloat << endl;
  stackFloat.pop(catchVarfloat);
  cout << catchVarfloat << endl;
  stackFloat.pop(catchVarfloat);
  cout << catchVarfloat << endl;
  stackFloat.pop(catchVarfloat);
  cout << catchVarfloat << endl;


  
  
  
  
  

  
}
