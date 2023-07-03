#include "ReadDic.h"
#include "vector"
#include <utility>
pair< TrieNode*, string> LCP(string, TrieNode*); //Longest Common Prefix node pointer
void autoCompleteWords(string, TrieNode*, vector<string>&); //Finds all the autoComplete words
vector<string> AutoCompleteSuggestions(pair<TrieNode*, string> LCP); //Take's a prefix and suggests all the suitable strings in vecotr
