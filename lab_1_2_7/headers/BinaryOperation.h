#pragma once

#include <cassert>

#include "Expression.h"

struct BinaryOperation : Expression {
private:
	Expression const* left_;
	Expression const* right_;
	int op_;
public:
	enum {
		PLUS = '+',
		MINUS = '-',
		DIV = '/',
		MUL = '*'
	};

	BinaryOperation(Expression const* left, int op, Expression const* right);

	~BinaryOperation();

	// Properties
	Expression const* left() const;
	Expression const* right() const;

	int operation() const;

	// Methods
	double evaluate() const;
};