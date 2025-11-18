/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarherna <sarherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:00:00 by sarherna          #+#    #+#             */
/*   Updated: 2025/11/18 10:00:00 by sarherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int hordeSize = 5;
	
	std::cout << "Creating a horde of " << hordeSize << " zombies..." << std::endl;
	Zombie* horde = zombieHorde(hordeSize, "HordeZombie");
	
	std::cout << "\nZombies announcing themselves:" << std::endl;
	for (int i = 0; i < hordeSize; i++) {
		horde[i].announce();
	}
	
	std::cout << "\nDeleting the horde:" << std::endl;
	delete[] horde;
	
	return 0;
}


