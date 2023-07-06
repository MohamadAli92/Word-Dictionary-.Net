#include <algorithm>
#include "AutoComplete.h"
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
		else{
			return { root, reusltWord };
		}
	}
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
pair<int,int> findMaxElement(vector<pair<int, int>> v) {
	pair<int, int> max = { 0,0 };
	for (int i = 0; i < v.size(); i++) {
		if (v[i].second>max.first){
			max = { v[i].second, i };
		}
	}
	return max;
}
vector<string> AutoCompleteSuggestions(string inputString, TrieNode* root) {
	string inpStrCopy = inputString;
	vector<string> suggestions;
	pair<TrieNode*, string> LCPPair = LCP(inpStrCopy, root);
	for (int i = LCPPair.second.size(); i >= 0 && suggestions.size()<=5; i--) {
		autoCompleteWords("", LCPPair.first, suggestions);
		inpStrCopy.pop_back();
		LCPPair = LCP(inpStrCopy, root);
	}
	vector<pair<int,int>> topSuggestions; //the strings indexe's and their distance
	pair<int, int> maxDiff = { INFINITY, INFINITY }; //value and it's index
	int diff;
	for (int i = 0; i < min(5,(int)suggestions.size()); i++) {
		diff = strDiff(inputString, suggestions[i]);
		topSuggestions.push_back({ i,diff });
	}
	maxDiff = findMaxElement(topSuggestions);
	for (int i = min(5, (int)suggestions.size()); i < (int)suggestions.size(); i++) {
		diff = strDiff(inputString, suggestions[i]);
		if (diff < maxDiff.first) {
			topSuggestions[maxDiff.second] = { i,diff };
			maxDiff = findMaxElement(topSuggestions);
		}
	}
	vector<string> resultSuggestions;
	for (int i = 0; i<min((int)topSuggestions.size(),5); i++)
		resultSuggestions.push_back(suggestions[i]);
	return resultSuggestions;
}