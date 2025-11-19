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
#include <fstream>
#include <string>

std::string replaceAll(const std::string& content, const std::string& s1, const std::string& s2) {
	if (s1.empty())
		return content;
	
	std::string result;
	size_t pos = 0;
	size_t lastPos = 0;
	
	while ((pos = content.find(s1, lastPos)) != std::string::npos) {
		result.append(content, lastPos, pos - lastPos);
		result.append(s2);
		lastPos = pos + s1.length();
	}
	result.append(content, lastPos, std::string::npos);
	
	return result;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	// Open input file
	std::ifstream infile(filename.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
		return 1;
	}
	
	// Read entire file content
	std::string content;
	std::string line;
	bool first = true;
	while (std::getline(infile, line)) {
		if (!first)
			content += "\n";
		content += line;
		first = false;
	}
	infile.close();
	
	// Replace all occurrences
	std::string result = replaceAll(content, s1, s2);
	
	// Write to output file
	std::string outfilename = filename + ".replace";
	std::ofstream outfile(outfilename.c_str());
	if (!outfile.is_open()) {
		std::cerr << "Error: Could not create file '" << outfilename << "'" << std::endl;
		return 1;
	}
	
	outfile << result;
	outfile.close();
	
	std::cout << "File '" << outfilename << "' created successfully." << std::endl;
	
	return 0;
}


