/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:40:52 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/20 17:23:35 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main() {
	Zombie	z("asdf");

	z.announce();
	Zombie *a = Zombie::newZombie("haha");
	a->announce();
	delete a;
	Zombie::randomChump("rando");
}