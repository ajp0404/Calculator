#ifndef OPERATIONS_H
#define OPERATIONS_H


#include<iostream>
#include<cmath>

class Operations
{
private:
	double firstVal;
	double secVal;
	double result = 0;
	char operation;
public:
	Operations();
	Operations(double first, double sec, char operation);
	~Operations();
	void whichOp();
	double getResult();
	void mult();
	void div();
	void add();
	void sub();
	void square();
	void squareRoot();



};
#endif // !OPERATIONS_H

