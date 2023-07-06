#include "ReadDic.h"
#include "vector"
#include <utility>
void autoCompleteWords(string, TrieNode*, vector<string>&); //Finds all the autoComplete words
vector<string> AutoCompleteSuggestions(string inputString, TrieNode* root); //Take's a prefix and suggests all the suitable strings in vecotr
pair< TrieNode*, string> LCP(string word, TrieNode* root);
void autoCompleteWords(string str, TrieNode* node, vector<string>& auotCompleteWords);
pair<int, int> findMaxElement(vector<pair<int, int>> v);
