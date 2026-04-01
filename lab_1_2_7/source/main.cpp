#include <iostream>

#include "Number.h"
#include "BinaryOperation.h"

using namespace std;

int main() {
    Expression* e1 = new Number(1.234);
    Expression* e2 = new Number(-1.234);
    Expression* e3 = new BinaryOperation(e1, BinaryOperation::DIV, e2);

    cout << e3->evaluate() << endl;
    
    //
    delete e3;
}