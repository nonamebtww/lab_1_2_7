#pragma once

struct Expression {
public:
	virtual ~Expression() = default;

	// Methods
	virtual double evaluate() const = 0;
};