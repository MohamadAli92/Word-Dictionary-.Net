#include "Utilities.h"
#include <iostream>

using namespace std;

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
	TrieNode* checkingNode = root;
	for (char c : word) {
		if (checkingNode->children[c - 'a']) {
			checkingNode = checkingNode->children[c - 'a'];
			reusltWord += c;
		}
		else {
			return { checkingNode, reusltWord };
		}
	}
	return { checkingNode, reusltWord };
}

void findWordsFromNode(TrieNode* node, vector<string>* words, char* temp, int index) {

	if (node == nullptr)
		return;
	if (node->valid) {
		(*words).push_back(string(temp, index));
	}
	for (size_t i = 0; i < 26; i++)
	{
		if (node->children[i]) {
			temp[index] = i + 'a';
			findWordsFromNode(node->children[i], words, temp, index+1);
		}
	}

}

void reverseTrie(Trie* mainTrie, Trie* rTrie) {
	
	vector<string> words;

	char temp[100];

	findWordsFromNode(mainTrie->root, &words, temp);

	for each (auto word in words)
	{
		rTrie->addWord(string(word.rbegin(), word.rend()));
	}

}

void merge(vector<string>* words, int l, int m, int r, const string mainWord)
{
	// Find sizes of two subarrays to be merged
	int n1 = m - l + 1;
	int n2 = r - m;

	// Create temp arrays
	vector<string> L;
	vector<string> R;

	// Copy data to temp arrays
	for (int i = 0; i < n1; ++i)
		L.push_back((*words).at(l + i));
	for (int j = 0; j < n2; ++j)
		R.push_back((*words).at(m + 1 + j));

	// Merge the temp arrays

	// Initial indices of first and second subarrays
	int i = 0, j = 0;

	// Initial index of merged subarray array
	int k = l;
	while (i < n1 && j < n2) {
		if (strDiff(L.at(i), mainWord) <= strDiff(L.at(i), mainWord)) {
			(*words)[k] = L[i];
			i++;
		}
		else {
			(*words)[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy remaining elements of L[] if any
	while (i < n1) {
		(*words)[k] = L[i];
		i++;
		k++;
	}

	// Copy remaining elements of R[] if any
	while (j < n2) {
		(*words)[k] = R[j];
		j++;
		k++;
	}
}

void sortWordsByDiff(vector<string>* words, int left, int right, const string mainWord) {

	if (left < right) {

		// Find the middle point
		int middle = left + (right - left) / 2;

		// Sort first and second halves
		sortWordsByDiff(words, left, middle, mainWord);
		sortWordsByDiff(words, middle + 1, right, mainWord);

		// Merge the sorted halves
		merge(words, left, middle, right, mainWord);
	}

}