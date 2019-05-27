
	return *this;
}

Complex Complex::operator-(Complex &ex)
{
	return Complex(re - ex.Re(), im - ex.Im());
}

Complex Complex::operator-=(Complex &ex)
{
	re -= ex.Re();
	im -= ex.Im();

	return *this;
}

Complex Complex::operator*(Complex &ex)
{
	return Complex( re * ex.Re() - im * ex.Im(), re * ex.Im() + im * ex.Re() );
}

Complex Complex::operator*=(Complex &ex)
{
	double _re = re;

	re = re * ex.Re() - im * ex.Im();
	im = _re * ex.Im() + im * ex.Re();

	return *this;
}

Complex Complex::operator/(Complex &ex)
{
    	double r = ex.Re() * ex.Re() + ex.Im() * ex.Im();

    	return Complex( ( re * ex.Re() + im * ex.Im() ) / r, ( im * ex.Re() - re * ex.Im() ) / r );
}

Complex Complex::operator/=(Complex &ex)
{
	double _re = re;
	double r = ex.Re() * ex.Re() + ex.Im() * ex.Im();

	re = ( re * ex.Re() + im * ex.Im() ) / r;
	im = ( im * ex.Re() - _re * ex.Im() ) / r;

	return *this;
}