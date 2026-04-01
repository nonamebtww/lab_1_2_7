#pragma once

#include <string>
#include "Expression.h"

using namespace std;

struct FunctionCall : Expression {
private:
	string name_;

	Expression const* arg_;
public:
	FunctionCall(string name, Expression const* arg);

	~FunctionCall();

	// Properties
	string const& name() const;

	Expression const* arg() const;

	// Methods
	double evaluate() const;
};