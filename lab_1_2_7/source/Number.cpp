#include "Number.h"

Number::Number(double value) : value_(value) { }

// Properties
double Number::value() const {
	return value_;
}

// Methods
double Number::evaluate() const {
	return value_;
}