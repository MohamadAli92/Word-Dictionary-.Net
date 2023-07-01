const int maxNodeNum = 10000;

class TrieNode {
	bool valid = false;
	int validNum{};
	TrieNode* children[26]{};
};

const TrieNode* root = new TrieNode;