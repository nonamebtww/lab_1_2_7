#pragma once

#include "Expression.h"

struct Number : Expression {
private:
	double value_;
public:
	Number(double value);

	// Properties
	double value() const;

	// Methods
	double evaluate() const;
};