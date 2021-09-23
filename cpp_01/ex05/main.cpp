/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <isaadi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:11:24 by isaadi            #+#    #+#             */
/*   Updated: 2021/09/23 16:04:31 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main() {
	Karen a;

	a.complain("debug");
	a.complain("info");
	a.complain("warning");
	a.complain("error");
	a.complain("debug");
	a.complain("info");
	a.complain("warning");
	a.complain("error");
}