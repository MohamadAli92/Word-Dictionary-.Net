#include "Utilities.h"

int strDiff(string a, string b) {
	int diff = 0;
	for (int i = 0; i < min(a.size(), b.size()); i++)
		if (a[i] != b[i])
			diff++;
	diff += max(a.size(), b.size()) - min(a.size(), b.size());
	return diff;
}

pair< TrieNode*, string> LCP(string word, TrieNode* root) {
	string reusltWord = "";
	for (char c : word) {
		if (root->children[c - 'a']) {
			root = root->children[c - 'a'];
			reusltWord += c;
		}
		else {
			return { root, reusltWord };
		}
	}
	return { root, reusltWord };
}
