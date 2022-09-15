#include "Operations.h"
Operations::Operations() {
	this->firstVal = 0;
	this->secVal = 0;
	this->operation = '*';

	whichOp();
}

Operations::Operations(double first, double sec, char operation) {
	this->firstVal = first;
	this->secVal = sec;
	this->operation = operation;


	//std::cout << firstVal << " " << secVal << std::endl;			

	whichOp();

}

Operations::~Operations() {}

void Operations::whichOp() {//switch that goes to the right function
	switch (operation) {
	case '*':
		mult();
		break;
	case '/':
		div();
		break;
	case '+':
		add();
		break;
	case '-':
		sub();
		break;
	case '^':
		square();
		break;
	case '#':
		squareRoot();
		break;
	default:
		std::cout << "ERROR: invalid operation!\n";
		break;
	}

}


double Operations::getResult() {
	return result;
}

void Operations::mult() {
	result = firstVal * secVal;
}

void Operations::div() {
	if (secVal == 0) throw 0;

	result = firstVal / secVal;
}

void Operations::add() {
	result = firstVal + secVal;
}

void Operations::sub() {
	result = firstVal - secVal;
}

void Operations::square() {
	result = std::pow(firstVal, secVal);
}

void Operations::squareRoot() { //ony uses the first value
	result = std::sqrt(firstVal);
}