#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

namespace utils {

	struct DictionaryEntry {
		std::string keyword;
		std::string meaning;
	};

	class Dictionary {
	private:
		int m_verbetes; // Tamanho do dicionário
		std::vector<DictionaryEntry> entries;
	public:
		// Constructor to populate the dictionary with predefined entries
		Dictionary();
		// Method to search for a keyword and return its meaning
		std::string search(const std::string& keyword);
		// Method to sort the dictionary by keyword
		void sort();
		// Method to display all items in the dictionary
		void displayAll();
		// Method to save the dictionary entries to a text file
		void saveToFile(const std::string& filename);
		// Method to load dictionary entries from a text file
		void loadFromFile(const std::string& filename);
	};
	// **************<<_USAGE_>>****************
	void _dictionaryUsage();
} // ~utils

