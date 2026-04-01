#include <string>
#include <stdexcept>
#include "Expression.h"
#include "FunctionCall.h"

FunctionCall::FunctionCall(string name, Expression const* arg) : name_(name), arg_(arg) { }

FunctionCall::~FunctionCall() {
	delete arg_;
}

// Properties
string const& FunctionCall::name() const {
	return this->name_;
}

Expression const* FunctionCall::arg() const {
	return this->arg_;
}

// Methods
double FunctionCall::evaluate() const {
	if (this->name_ == "sqrt") {
		return sqrt(this->arg_->evaluate());
	}

	if (this->name_ == "abs") {
		return abs(this->arg_->evaluate());
	}

	throw std::invalid_argument("name");
}