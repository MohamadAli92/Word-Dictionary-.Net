#include "ReadDic.h"
#include "AutoComplete.h"

int readDic(Trie* trie) {

	ifstream trieFile("./trie.bin", ios::binary);

	if (trieFile.is_open()) {
		map<string, int>* values = new map<string, int>();
		while (!trieFile.eof()) {
			pair<string, int> pair;
			trieFile.read(reinterpret_cast<char*>(&pair), sizeof(pair));
			(*values).insert(pair);
		}
		putOnMap(values);
		return 1;
	}

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

	ofstream myFile("./trie.bin", ios::binary);

	map<string, int> * freqs = getMap();

	if (myFile.is_open()) {
		for (auto const& pair : *freqs) {
			myFile.write(reinterpret_cast<const char*>(&pair), sizeof(pair));
		}
		myFile.close();
	}

	return 1;
}