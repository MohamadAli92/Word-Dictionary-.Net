#ifndef TRIE_H
#define TRIE_H

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
public:
	TrieNode* root;

	int wordsNum;

	void addWord(string newWord);

	// Constructor
	Trie();

};
bool wordExists(string word, Trie* tire);
bool prefixExists(string word, Trie* trie);

#endif // !TRIE_H


