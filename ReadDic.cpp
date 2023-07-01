#include "ReadDic.h"

int readDic() {

	ifstream myFile("./words.txt");
	
	string temp;

	if (myFile.is_open()) {
		while (myFile.good()) {
			myFile >> temp;
			cout << temp << endl;
			Trie::addWord(temp);
		}
	}



	return 1;
}