#include "AutoCorrect.h"

vector<string> autoCorrect(Trie* mainTrie, Trie* rTrie, const string inputStr) {

	//Trie* rTrie = new Trie();

	//reverseTrie(mainTrie->root, rTrie);

	//pair<TrieNode*, string> mainRes = LCP(inputStr, mainTrie->root);

	vector<string> normalWords;

	vector<string> reversedWords;

	string preCheckingStr = inputStr;
	string sufCheckingStr = inputStr;

	while (normalWords.size() + reversedWords.size() < 5) {

		pair<TrieNode*, string> prefixRes = LCP(preCheckingStr, mainTrie->root);

		pair<TrieNode*, string> suffixRes = LCP(string(sufCheckingStr.rbegin(), sufCheckingStr.rend()), rTrie->root);

		char temp[100];

		normalWords.clear();

		findWordsFromNode(prefixRes.first, &normalWords, temp);

		for (size_t i = 0; i < normalWords.size(); i++)
		{
			normalWords[i] = prefixRes.second + normalWords[i];
		}

		reversedWords.clear();

		findWordsFromNode(suffixRes.first, &reversedWords, temp);

		auto it = reversedWords.begin();

		while (it != reversedWords.end())
		{
			*it = suffixRes.second + (*it);
			*it = string((*it).rbegin(), (*it).rend());
			bool exists = false;
			for each (auto word in normalWords)
			{
				if (word == *it) {
					exists = true;
					break;
				}
			}
			if (exists)
				it = reversedWords.erase(it);
			else
				it++;
		}

		preCheckingStr = preCheckingStr.substr(0, preCheckingStr.length()-1);
		sufCheckingStr = sufCheckingStr.substr(1, sufCheckingStr.length());

	}

	vector<string> resultWords;

	resultWords.reserve(normalWords.size() + reversedWords.size());
	resultWords.insert(resultWords.end(), normalWords.begin(), normalWords.end());
	resultWords.insert(resultWords.end(), reversedWords.begin(), reversedWords.end());

	sortWordsByDiff(&resultWords, 0, resultWords.size()-1, inputStr);

	return vector<string> (resultWords.begin(), resultWords.begin()+5);
}