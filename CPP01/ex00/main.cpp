/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfreire- <pfreire-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:10:59 by pfreire-          #+#    #+#             */
/*   Updated: 2026/05/19 17:12:06 by pfreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	*zombie_heap;
	Zombie	zombie;
	delete	zombie_heap;

	Zombie zombie_stack("stack");
	zombie.announce();
	zombie_heap = newZombie("heap");
	zombie_stack.announce();
	zombie_heap->announce();
	randomChump("randO");
}
