#include <iostream>

#include "Number.h"
#include "BinaryOperation.h"
#include "FunctionCall.h"

using namespace std;

void task_1() {
    Expression* e1 = new Number(1.234);
    Expression* e2 = new Number(-1.234);
    Expression* e3 = new BinaryOperation(e1, BinaryOperation::DIV, e2);

    cout << e3->evaluate() << endl;

    //
    delete e3;
}

void task_2() {
    Expression* n32 = new Number(32.0);
    Expression* n16 = new Number(16.0);
    Expression* minus = new BinaryOperation(n32, BinaryOperation::MINUS, n16);
    Expression* callSqrt = new FunctionCall("sqrt", minus);

    Expression* n2 = new Number(2.0);
    Expression* mult = new BinaryOperation(n2, BinaryOperation::MUL, callSqrt);
    Expression* callAbs = new FunctionCall("abs", mult);

    cout << callAbs->evaluate() << endl;

    //
    delete callAbs;
}

int main() {
    task_2();
}