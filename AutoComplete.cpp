#include "AutoComplete.h"

pair< TrieNode*, string> LCP(string word, TrieNode* root) {
	string reusltWord = "";
	for (char c : word) {
		if (root->children[c - 'a']) {
			root = root->children[c - 'a'];
			reusltWord += c;
		}
		else{
			//pair< TrieNode*, string> result(root, reusltWord);
			return { root, reusltWord };
		}
	}
	//pair< TrieNode*, string> result(root, reusltWord);
	return { root, reusltWord };
}
void autoCompleteWords(string str, TrieNode* node, vector<string>& auotCompleteWords) {
	if (node->valid)
		auotCompleteWords.push_back(str);
	for (int i = 0; i < 26; i++) {
		if (node->children[i])
			autoCompleteWords(str+(char)('a'+(char)i), node->children[i], auotCompleteWords);

	}
}

vector<string> AutoCompleteSuggestions(pair<TrieNode*, string> LCP) {
	
}