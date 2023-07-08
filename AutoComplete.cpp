#include <algorithm>
#include "AutoComplete.h"
#include <map>
map<string, int> frequencies;

//{
//	{"abandon", 1},
//	{"ability",1},
//	{"able",1},
//	{"abortion",1000},
//	{"about",1},
//
//	{"absorb", 10},
//	{"abuse",110},
//	{"absolutely",12},
//	{"absolute",13},
//	{"absence",14}
//};
void addFreq(string str){
	frequencies[str] += 1;
}

map<string, int>* getMap() {
	return &frequencies;
}

void putOnMap(map<string, int>* input) {
	for (auto pair : *input) {
		frequencies.insert(pair);
	}
}

void autoCompleteWords(string str, TrieNode* node, vector<string>& auotCompleteWords) {
	if (node->valid)
		auotCompleteWords.push_back(str);
	for (int i = 0; i < 26; i++) {
		if (node->children[i])
			autoCompleteWords(str+(char)('a'+(char)i), node->children[i], auotCompleteWords);
	}
}
int findMinFreq(vector<pair<int, int>> v) {
	int minIndex = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[minIndex].second > v[i].second) 
			minIndex = i;
	}
	return minIndex;
}
vector<string> AutoCompleteSuggestions(string inputString, TrieNode* root) {
	string inpStrCopy = inputString;
	vector<string> suggestions;
	pair<TrieNode*, string> LCPPair = LCP(inpStrCopy, root);
	for (int i = LCPPair.second.size(); i >= 0 && suggestions.size() <= 5; i--) {
		autoCompleteWords(LCPPair.second, LCPPair.first, suggestions);
		inpStrCopy.pop_back();
		LCPPair = LCP(inpStrCopy, root);
	}
	vector<pair<int, int>> topSuggestions; //the strings indexe's and their second
	//pair<int, int> maxDiff = { INFINITY, INFINITY }; //value and it's index
	int freq;
	for (int i = 0; i < min(5, (int)suggestions.size()); i++) {
		freq = frequencies[suggestions[i]];
		topSuggestions.push_back({ i,freq });
	}
	int minFreqIndex = findMinFreq(topSuggestions);
	for (int i = min(5, (int)suggestions.size()); i < (int)suggestions.size(); i++) {
		freq = frequencies[suggestions[i]];
		if (freq > topSuggestions[minFreqIndex].second) {
			topSuggestions[minFreqIndex] = { i,freq };
			minFreqIndex = findMinFreq(topSuggestions);
		}
	}
	vector<string> resultSuggestions;
	int maxFreqSugIndex;
	int itrerations = min(5, (int)topSuggestions.size());
	for (int i = 0; i < itrerations; i++){
		maxFreqSugIndex = 0;
		for (int j = 0; j < min(5, (int)topSuggestions.size()); j++){
			if (topSuggestions[j].second > topSuggestions[maxFreqSugIndex].second)
				maxFreqSugIndex = j;
		}
		resultSuggestions.push_back(suggestions[topSuggestions[maxFreqSugIndex].first]);
		topSuggestions.erase(topSuggestions.begin() + maxFreqSugIndex);
}
	return resultSuggestions;
}