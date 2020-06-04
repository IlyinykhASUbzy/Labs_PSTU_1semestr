#include <iostream>
#include <math.h>
#include <iomanip>
#include <complex>
#include <locale>
using namespace std;

int sum(int a, int b) {
	int si = a + b;
	return si;
}
complex <int> sum(complex <int> a, complex <int> b) {
	/*int re = a.real() + b.real();
	int im = a.imag() + b.imag();
	complex <int> sc(re, im);*/
	complex <int> sc = a + b;
	return sc;
}
int main() {
	setlocale(LC_ALL, "rus");
	int a = 2, b = 3;
	complex <int>  c(3, 5), d(5, 8);
	cout << "Сумма целых чисел 2 и 3="  <<sum(a, b);
	cout << "\nСумма комплексных чисел "<<c<<" и "<<d<<" =" << sum(c, d);
	return 0;
 }