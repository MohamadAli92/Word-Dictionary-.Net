#include "Trie.h"

TrieNode* Trie::root = new TrieNode;

void Trie::addWord(string newWord) {

	TrieNode* addingNode = root;

	for each (char ch in newWord) {

		ch = ch >= 'A' && ch <= 'Z' ? ch + 32 : ch;

		if (!addingNode->children[ch - 'a']) {
			addingNode->validNum++;
			addingNode->children[ch - 'a'] = new TrieNode;
		}

		addingNode = addingNode->children[ch - 'a'];

	}
	
	addingNode->valid = true;

}
bool Trie::wordExists(string word) {
	TrieNode* current = Trie::root;
	for (char c : word) {
		if (current->children[c - 'a'])
			current = current->children[c - 'a'];
		else
			return false;
	}
	if(current->valid)
		return true;
};
