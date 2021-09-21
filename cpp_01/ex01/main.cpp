/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:09:19 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/21 17:30:34 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void test(int n) {
	std::cout << "test start: -------------" << std::endl;
	Zombie *ret = Zombie::zombieHorde(n, "horde");

	if (!ret) {
		std::cout << "ret is NULL for n = " << n << std::endl;
		return ;
	}
	for (int i = 0; i < n; i++) {
		ret[i].announce();
	}
	delete [] ret;
	std::cout << "test   end: -------------" << std::endl;
}

int main() {
	for (int i = -5; i < 10; i++) {
		test(i);
	}
}