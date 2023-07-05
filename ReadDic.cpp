#include "ReadDic.h"

int readDic(Trie* trie) {

	ifstream myFile("./words.txt");
	
	string temp;

	if (myFile.is_open()) {
		while (myFile.good()) {
			myFile >> temp;
			cout << temp << endl;
			trie->addWord(temp);
		}
	}



	return 1;
}