/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:19:39 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/24 12:33:55 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug( void ) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void	Karen::info( void ) {
	std::cout << "I cannot believe adding extrabacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void ) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level ) {
	void	(Karen::*f[])() = {&Karen::debug, &Karen::info, &Karen::error, &Karen::warning};
	string v[4] = {"debug", "info", "error", "warning"};
	
	for (int i = 0; i < 4; i++) {
		if (level == v[i]) {
			(this->*(f[i]))();
			break ;
		}
	}
}