/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:28:26 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/28 17:39:22 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>


class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &ref);
		Fixed	&operator=(const Fixed &ref);
		Fixed	&operator+(const Fixed &ref);
		Fixed	&operator-(const Fixed &ref);
		Fixed	&operator*(const Fixed &ref);
		Fixed	&operator/(const Fixed &ref);
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		int		operator>(const Fixed &ref);
		int		operator<(const Fixed &ref);
		int		operator<=(const Fixed &ref);
		int		operator>=(const Fixed &ref);
		int		operator==(const Fixed &ref);
		int		operator!=(const Fixed &ref);
		int		getRawBits(void) const;
		int		toInt( void ) const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		static Fixed	&min(Fixed &ref0, Fixed &ref1);
		static Fixed const	&min(Fixed const &ref0, Fixed const &ref1);
		static Fixed	&max(Fixed &ref0, Fixed &ref1);
		static Fixed const	&max(Fixed const &ref0, Fixed const &ref1);
	private:
		int	val;
		static const int fbits = 8;
};

std::ostream &operator<<(std::ostream &ref, const Fixed &ref2);
int		as_int(float num);
float	as_float(int num);

#endif
