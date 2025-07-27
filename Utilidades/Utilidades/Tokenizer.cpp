#include <algorithm> // sort()
#include <iostream>
#include <conio.h>
#include <vector>
#include "Tokenizer.h"
using namespace std;

utils::Tokenizer::Tokenizer(string _str, string _del) :m_phrase(_str), m_delimiters(_del) {
	m_tokens = 0;
	m_size = 0;
	m_capacity = 0;
	start();
}

utils::Tokenizer::~Tokenizer() {
	delete[]m_tokens;
	//cout << "~Tokenizer()..." << endl;
}

void utils::Tokenizer::start() {
	string str = "";
	for (unsigned int i = 0; i < m_phrase.size(); i++) {
		str += m_phrase[i];
		bool found = false;
		if (m_delimiters.find(m_phrase[i]) != -1) {
			found = true;
			if (!(i == m_phrase.size())) {
				if (str.size() > 1) {
					str = str.substr(0, str.size() - 1);
					if (m_capacity == m_size)
						inflate();
					m_tokens[m_size] = str;
					m_size++;
				}
				str = "";
			}
		}
		if (i == m_phrase.size() - 1) {
			if (found)
				str = str.substr(0, str.size() - 1);
			if (!(str.size() == 0)) {
				if (m_capacity == m_size)
					inflate();
				m_tokens[m_size] = str;
				m_size++;
				str = "";
			}
		}
	}
}

void utils::Tokenizer::inflate() {
	m_capacity += 10;
	string *temp = new string[m_capacity];
	for (int i = 0; i < m_size; i++)
		temp[i] = m_tokens[i];
	delete[] m_tokens;
	m_tokens = temp;
}

string utils::Tokenizer::get_at(int index) {
	if (index < 0 || index >(m_size - 1))
		return "invalid index";
	return m_tokens[index];
}
// ***************** <<_USAGE_>> *****************
void utils::TokenizerUsage() {
	//Tokenizer2 *token = new utils::Tokenizer2("Claudio Marcio Ferreira da Silva", "aeiou ");//, "aeiouAEIOU");
	//Tokenizer token("Claudio Marcio Ferreira da Silva Andrade", "aeiou ");
	Tokenizer *token = new utils::Tokenizer("Claudio Marcio Ferreira da Silva", "aeiou ");//, "aeiouAEIOU");

	cout << "size: " << token->get_size() << endl;
	for (int i = 0; i < token->get_size(); i++)
		cout << token->get_at(i) << endl;

	delete token;
}