/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:15:25 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/21 17:53:16 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Zombie {
	public:
		void	announce(void);
		Zombie(std::string _name);
		~Zombie();
		static void	randomChump(std::string name);
		static Zombie	*newZombie(std::string name);
	private:
		std::string name;
};