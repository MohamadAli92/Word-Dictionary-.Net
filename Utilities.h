#ifndef UTILITIES_H
#define UTILITIES_H

#include"Trie.h"
#include<vector>

void reverseTrie(Trie* mainTrie, Trie* rTrie);
bool isEmptyString(string s);
int strDiff(string, string);

pair< TrieNode*, string> LCP(string word, TrieNode* root);

void findWordsFromNode(TrieNode* node, vector<string>* words, char* temp, int index = 0);

void sortWordsByDiff(vector<string>* words, int left, int right, const string mainWord);

#endif

