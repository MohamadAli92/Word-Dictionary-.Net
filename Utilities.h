#include"Trie.h"

void reverseTrie(TrieNode* mainTrieNode, Trie* rTrie, string temp);

int strDiff(string, string);

pair< TrieNode*, string> LCP(string word, TrieNode* root);
