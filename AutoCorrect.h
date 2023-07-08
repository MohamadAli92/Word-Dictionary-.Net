#ifndef AUTOCORRECT_H
#define AUTOCORRECT_H

#include<vector>
#include"Utilities.h"
#include "valarray"


vector<string> autoCorrect(Trie* mainTrie, Trie* rTrie, const string inputStr);

#endif // !AUTOCORRECT_H


