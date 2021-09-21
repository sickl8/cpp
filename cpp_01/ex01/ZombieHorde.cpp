/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:33:50 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/21 17:32:18 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ) {
	if (N < 0)
		return NULL;
	Zombie *ret = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		ret[i].setName(name + std::to_string(i + 1));
	}
	return ret;
}