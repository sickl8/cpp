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
		float toFloat() const;
		int toInt( void ) const;
		Fixed(const Fixed &ref);
		Fixed &operator=(const Fixed &ref);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int	val;
		static const int fbits = 8;
};

std::ostream &operator<<(std::ostream &ref, const Fixed &ref2);
int		as_int(float num);
float	as_float(int num);
#endif
