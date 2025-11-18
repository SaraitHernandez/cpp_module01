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
	std::cout << "=== Creating zombies on HEAP ===" << std::endl;
	Zombie* heapZombie = newZombie("Heap_Foo");
	heapZombie->announce();

	std::cout << "=== Creating zombie on STACK ===" << std::endl;
	std::cout << "Calling randomChump()..." << std::endl;
	randomChump("Stack_Bar");
	std::cout << "After randomChump() returns\n" << std::endl;

	std::cout << "=== Testing scope with STACK ===" << std::endl;
	std::cout << "Before scope:" << std::endl;
	{
		Zombie localZombie("Local_Baz");
		localZombie.announce();
		std::cout << "Inside scope" << std::endl;
		std::cout << "Heap_Foo still exists here...\n" << std::endl;
		heapZombie->announce();
	}
	//localZombie.announce();
	std::cout << "Local Zombie don't exist\n" << std::endl;

	std::cout << "=== Multiple HEAP zombies ===" << std::endl;
	Zombie* zombie1 = newZombie("Heap_One");
	Zombie* zombie2 = newZombie("Heap_Two");
	zombie1->announce();
	zombie2->announce();
	std::cout << "Both still exist...\n" << std::endl;

	std::cout << "Heap_Foo still exists:" << std::endl;
	heapZombie->announce();
	std::cout << std::endl;

	std::cout << "=== Cleaning up HEAP ===" << std::endl;
	delete heapZombie;
	delete zombie1;
	delete zombie2;

	return 0;
}


