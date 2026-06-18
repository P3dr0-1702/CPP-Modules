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
	int		dudes;
	int		i;

	Zombie zombie_stack("stack");
	dudes = 100;
	zombie.announce();
	zombie_heap = zombieHorde(dudes, "Freds");
	zombie_stack.announce();
	// zombie_heap->announce();
	i = 0;
	while (i < dudes)
	{
		zombie_heap[i].announce();
		i++;
	}
	randomChump("randO");
	delete[] zombie_heap;
}
