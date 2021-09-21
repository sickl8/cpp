/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:38:48 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/21 19:14:02 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon weapon);
		HumanA();
		void	setName(std::string name);
		void	setWeapon(std::string weapon);
		void	attack();
	private:
		Weapon	weapon;
		std::string	name;
};

#endif
