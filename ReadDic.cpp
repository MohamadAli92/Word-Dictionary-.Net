#include "ReadDic.h"
#include "AutoComplete.h"

int readDic(Trie* trie) {

	ifstream myFile("./words.txt");
	
	string temp;

	if (myFile.is_open()) {
		while (myFile.good()) {
			myFile >> temp;
			trie->addWord(temp);
		}
	}



	return 1;
}

int writeDic(Trie* trie) {

	ofstream myFile("./trie.bin");

	frequencies = new map<string, int>();

	return 1;
}