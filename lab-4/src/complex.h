#include <iostream>

class Complex
{
	private:
		double re;
		double im;
	public:
		Complex(double, double);
		Complex(double);
		Complex();

		double Re() const; 
		double Im() const;
		double R() const;
		double Phi() const;

		friend std::ostream& operator<<(std::ostream &out, const Complex &ex);
		friend std::istream& operator>>(std::istream &in, Complex &ex);
		Complex operator+(Complex &expr);
		Complex operator+=(Complex &expr);
		Complex operator-(Complex &expr);
		Complex operator-=(Complex &expr);
		Complex operator*(Complex &expr);
		Complex operator*=(Complex &expr);
		Complex operator/(Complex &expr);
		Complex operator/=(Complex &expr);
};