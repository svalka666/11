#pragma once
class Combination
{
	double first, second;
public:
	bool Init(double, double);
	void Read();
	void Display() const;
	double combination() const;
};