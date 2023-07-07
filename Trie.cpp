#include "Trie.h"

Trie::Trie() {
	this->root = new TrieNode;
	this->wordsNum = 0;
}

void Trie::addWord(string newWord) {
	TrieNode* addingNode = this->root;
	for each (char ch in newWord) {
		ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
		if ((ch - 'a' < 0 && ch - 'a' >= 26) || addingNode == NULL)
			return;
		if (addingNode->children[ch - 'a'] == NULL){
			addingNode->validNum++;
			addingNode->children[ch - 'a'] = new TrieNode;
		}
		addingNode = addingNode->children[ch - 'a'];
	}
	
	addingNode->valid = true;

	this->wordsNum++;

}

bool wordExists(string word, Trie* trie) {
	if (word == " ")
		return false;
	TrieNode* current = trie->root;
	for (char c : word) {
		if (c-'a' >= 0 && c-'a' <= 26 && current->children[c - 'a'])
			current = current->children[c - 'a'];
		else
			return false;
	}
	if(current->valid)
		return true;
};
bool prefixExists(string word, Trie* trie) {
	TrieNode* current = trie->root;
	for (char c : word) {
		if (c - 'a' >= 0 && c - 'a' <= 26 && current->children[c - 'a'])
			current = current->children[c - 'a'];
		else
			return false;
	}
	return true;
};
