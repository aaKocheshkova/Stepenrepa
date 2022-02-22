#include <cmath>
#include <iostream>
#include <iomanip>
#include "h_step_fun.h"
using namespace std;

//определение функции дл€ подсчета суммы координат вектора с логарифмами
double SumaLN(double x[], int n)
{
	//ќбъ€вление переменных 
	double s; int i;
	//вычислени€ 
	s = 0;
	for (i = 0; i < n; i++)
		s = s + log(x[i]);
	return s;
}
//определение функции дл€ подсчета произведени€ векторов с логарифмами
double ProizLN(double x[], double y[], int n)
{
	//ќбъ€вление переменных 
	double sp; int i;
	//вычислени€ 
	sp = 0;
	for (i = 0; i < n; i++)
		sp = sp + log(x[i]) * log(y[i]);
	return sp;
}
//определение функции дл€ суммы квадратов координат с логарифмами
double SumKvadLN(double x[], int n)
{
	//ќбъ€вление переменных 
	double sk; int i;
	//вычислени€ 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(log(x[i]), 2);
	return sk;
}