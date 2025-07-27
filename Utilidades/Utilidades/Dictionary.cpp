#pragma once
#include "Dictionary.h"

utils::Dictionary::Dictionary() {
	m_verbetes = 0;
	// Initialize with predefined entries
	utils::DictionaryEntry entradas;
	entradas.keyword = "Número Mágico";
	entradas.meaning = "meaning1";
	entries.push_back(entradas);
	entradas.keyword = "keyword2";
	entradas.meaning = "meaning2";
	entries.push_back(entradas);
	entradas.keyword = "keyword3";
	entradas.meaning = "meaning3";
	entries.push_back(entradas);
	entradas.keyword = "keyword4";
	entradas.meaning = "meaning4";
	entries.push_back(entradas);
}

// Method to search for a keyword and return its meaning
std::string utils::Dictionary::search(const std::string& keyword) {
	for (unsigned int i = 0; i < entries.size(); i++) {
		if (entries.at(i).keyword == keyword) {
			return entries.at(i).meaning;
		}
	}
	return "Keyword not found in the dictionary.";
}

// Method to sort the dictionary by keyword
void utils::Dictionary::sort() {
	std::sort(entries.begin(), entries.end(), [](const DictionaryEntry& a, const DictionaryEntry& b) {
		return a.keyword < b.keyword;
	});
}

// Method to display all items in the dictionary
void utils::Dictionary::displayAll() {
	for (unsigned int i = 0; i < entries.size(); i++) {
		std::cout << "Keyword: " << entries.at(i).keyword << " - Meaning: " << entries.at(i).meaning << std::endl;
	}
}

// Method to save the dictionary entries to a text file
void utils::Dictionary::saveToFile(const std::string& filename) {
	std::ofstream file(filename);
	if (file.is_open()) {
		for (unsigned int i = 0; i < entries.size(); i++) {
			file << entries.at(i).keyword << '#' << entries.at(i).meaning << '\n';
		}
		file.close();
		std::cout << "Dictionary saved to " << filename << std::endl;
	}
	else {
		std::cerr << "Error: Unable to open the file for writing." << std::endl;
	}
}

// Method to load dictionary entries from a text file
void utils::Dictionary::loadFromFile(const std::string& filename) {
	std::ifstream file(filename);
	if (file.is_open()) {
		entries.clear(); // Clear existing entries
		std::string line;
		while (std::getline(file, line)) {
			size_t commaPos = line.find('#');
			if (commaPos != std::string::npos) {
				DictionaryEntry entry;
				entry.keyword = line.substr(0, commaPos);
				entry.meaning = line.substr(commaPos + 1);
				entries.push_back(entry);
			}
			m_verbetes++;
		}
		file.close();
		//std::cout << "Dictionary loaded from " << filename << std::endl;
	}
	else {
		std::cerr << "Error: Unable to open the file for reading." << std::endl;
	}
}
// **************<<_USAGE_>>****************
void utils::_dictionaryUsage() {
	setlocale(LC_ALL, "Portuguese");

	Dictionary myDictionary;
	// Save the dictionary to a text file
	//myDictionary.saveToFile("I:\\Programming\\CPP\\VS2010\\Utilidades\\Debug\\dictionary.txt");

	// Load dictionary entries from a text file
	myDictionary.loadFromFile("I:\\Programming\\CPP\\VS2010\\Lib\\dictionary.txt");

	// Search for a keyword
	std::string key = "Número Mágico";
	std::cout << "Meaning of '" << key << "': " << myDictionary.search(key) << std::endl;

	// Sort the dictionary by keyword
	myDictionary.sort();

	// Display all items in the dictionary
	std::cout << "All Entries in the Dictionary:" << std::endl;
	myDictionary.displayAll();
}

