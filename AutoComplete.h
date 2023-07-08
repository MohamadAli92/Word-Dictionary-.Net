#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include "ReadDic.h"
#include "vector"
#include "AutoCorrect.h"
#include <utility>
#include <map>
void autoCompleteWords(string, TrieNode*, vector<string>&); //Finds all the autoComplete words
vector<string> AutoCompleteSuggestions(string inputString, TrieNode* root); //Take's a prefix and suggests all the suitable strings in vecotr
pair< TrieNode*, string> LCP(string word, TrieNode* root);
void autoCompleteWords(string str, TrieNode* node, vector<string>& auotCompleteWords);
int findMinFreq(vector<pair<int, int>> v);
void addFreq(string);
map<string, int>* getMap();
void putOnMap(map<string, int>* input);
#endif // !AUTOCOMPLETE_H

