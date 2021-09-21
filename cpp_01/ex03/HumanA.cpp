/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:40:45 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/21 19:12:37 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon weapon) {
	this->name = name;
	this->weapon.setType(weapon.getType());
}

void	HumanA::setName(std::string name) {
	this->name = name;
}

void	HumanA::setWeapon(std::string weapon) {
	this->weapon.setType(weapon);
}

HumanA::HumanA() {
	this->name = "";
	this->weapon.setType("None");
}