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

#include "Harl.hpp"

int getLevelIndex(std::string level) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
			return i;
	}
	return -1;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
		return 1;
	}
	
	Harl harl;
	std::string level = argv[1];
	int levelIndex = getLevelIndex(level);
	
	switch (levelIndex) {
		case 0:
			harl.complain("DEBUG");
			std::cout << std::endl;
			// fallthrough
		case 1:
			harl.complain("INFO");
			std::cout << std::endl;
			// fallthrough
		case 2:
			harl.complain("WARNING");
			std::cout << std::endl;
			// fallthrough
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	
	return 0;
}


