#ifndef FUZZY_H
#define FUZZY_H
#include <algorithm>

class Fuzzy
{
public:
	double FuzzyGrade(double value, double x0,double x1);
	double FuzzyTriangle(double value, double x0, double x1, double x2);
	double FuzzyTrapezoid(double value, double x0, double x1, double x2, double x3);

	double FuzzyAND(double A, double B);
	double FuzzyOR(double A, double B);
	double FuzzyNOT(double A);

};



#endif // !FUZZY_H
