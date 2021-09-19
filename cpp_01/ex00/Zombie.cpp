/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:28:36 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/19 17:33:15 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << this->name + "ZZzzzzz..." << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name + " BraiiiiiiinnnzzzZ..." << std::endl;
}