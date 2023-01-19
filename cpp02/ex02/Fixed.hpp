#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

# define floatToFixed(x) (x * (float)(1 << nbrBits))
# define fixedToFloat(x) ((float)x / (float)(1 << nbrBits))

class Fixed {
private:
	int nbr;
	static const int nbrBits = 8;
public:
	Fixed();
	Fixed(const Fixed& var);
	Fixed(int getNum);
	Fixed(float getFloat);
	int getRawBits(void)const;
	void setRawBits(int const raw);
	int	toInt() const;
	float toFloat() const;
	Fixed &operator = (const Fixed &other); 

	bool operator == (const Fixed &var) const; 
	bool operator != (const Fixed &var) const; 
	bool operator < (const Fixed &var) const; 
	bool operator > (const Fixed &var) const; 
	bool operator >= (const Fixed &var) const; 
	bool operator <= (const Fixed &var) const; 

	Fixed operator + (const Fixed &var) const; 
	Fixed operator - (const Fixed &var) const; 
	Fixed operator / (const Fixed &var) const; 
	Fixed operator * (const Fixed &var) const; 

	Fixed &operator++(); 
	Fixed operator++ (int); 
	Fixed &operator--(); 
	Fixed operator--(int); 

	static	Fixed &min(Fixed& a, Fixed& b); 
	static	Fixed &max(Fixed& a, Fixed& b); 
	static const	Fixed &min(const Fixed& a,const Fixed& b); 
	static const	Fixed &max(const Fixed& a,const Fixed& b); 

	~Fixed();
};

std::ostream &operator << (std::ostream &os, const Fixed &a);

#endif