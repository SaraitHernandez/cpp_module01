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

#include <iostream>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory addresses:" << std::endl;
	std::cout << "String variable: " << &str << std::endl;
	std::cout << "stringPTR:       " << stringPTR << std::endl;
	std::cout << "stringREF:       " << &stringREF << std::endl;

	std::cout << "\nValues:" << std::endl;
	std::cout << "String variable: " << str << std::endl;
	std::cout << "stringPTR:       " << *stringPTR << std::endl;
	std::cout << "stringREF:       " << stringREF << std::endl;

	return 0;
}


