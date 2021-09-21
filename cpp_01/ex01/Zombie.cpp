/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:28:36 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/21 17:29:16 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name) {
	this->name = name;
}

Zombie::Zombie(std::string name) {
	this->setName(name);
}

Zombie::Zombie() {
	this->name = "";
}

Zombie::~Zombie() {
	std::cout << this->name + " ZZzzzzz..." << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name + " BraiiiiiiinnnzzzZ..." << std::endl;
}