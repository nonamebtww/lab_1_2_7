#include "BinaryOperation.h"

BinaryOperation::BinaryOperation(Expression const* left, int op, Expression const* right) : left_(left), op_(op), right_(right) {
	assert(left_ && right_);
}

BinaryOperation::~BinaryOperation() {
	delete left_;

	if (left_ != right_) {
		delete right_;
	}
}

// Properties
Expression const* BinaryOperation::left() const {
	return left_;
}

Expression const* BinaryOperation::right() const {
	return right_;
}

int BinaryOperation::operation() const {
	return op_;
}

// Methods
double BinaryOperation::evaluate() const {
	double left = left_->evaluate();
	double right = right_->evaluate();

	switch (op_) {
	case PLUS:
		return left + right;
	case MINUS:
		return left - right;
	case DIV:
		return left / right;
	case MUL:
		return left * right;
	}

	assert(0);
	return 0.0;
}