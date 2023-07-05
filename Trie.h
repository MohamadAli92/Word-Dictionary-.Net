#include<string>

using namespace std;

const int maxNodeNum = 10000;

class TrieNode {
public:
	bool valid = false;
	int validNum{};
	TrieNode* children[26]{};
};

class Trie {
public :
	TrieNode* root;
	
	void addWord(string newWord);

	bool wordExists(string word);

	// Constructor
	Trie();

};