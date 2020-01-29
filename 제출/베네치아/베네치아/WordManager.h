#pragma once
#include"Word.h"

class WordManager
{
private:
	Word* m_Word;
	string* m_strList;
public:
	void AddWord();
	void SearchWord(string name);
	void SearchWord(string name, Word* nextWord);
	WordManager();
	~WordManager();
};

