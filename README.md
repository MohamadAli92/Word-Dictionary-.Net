# A simple dictionary using .NET Framework
### Introduction
This project focuses on implementing Autocomplete, SpellCheck, and Correction suggestions
for misspelled words using the Trie data structure.

I assume that our system is used by one user, and is used multiple times (e.g a keyboard
that the user uses daily).

For each word, I keep track of the frequency or the number of times the user has
typed it.

### Implementation
**Distance definition:**
In the context of this project, the distance between two words is a simple comparison of the
characters at corresponding positions (indexes) in two strings. This distance metric is
called the character-by-character distance or position-based distance.

- **Inserting Words into the Trie:**<br>
Trie has been built using the words.txt file.

- **Functionality Implementation:**<br>
  - Autocomplete:<br>
    - The autocomplete functionality generates word suggestions for a given input.
    - Showing all words that can be a correct autocompleted version of the given word
    - Suggestions have been prioritized based on their frequency. (words with higher
frequency have higher priorities)
    - Displaying the top 5 results to the user. If multiple words have the same frequency,
one of them is displayed.
  - Spell Check:<br>
It is easily achieved by checking whether the word exists in the trie.
  - Correction Suggestions for Misspelled Words:<br>
Providing correction suggestions for misspelled words can be achieved using various
approaches. Here I've implemented a simple approach to accomplish this
functionality.<br><br>
The implemented approach follows these steps:


    1. Identifying the longest correct prefix for the misspelled word.
    2. Finding all words in the Trie that start with the longest correct prefix.
    3. Reversing the misspelled word and building a Trie from the reversed words.
    4. Identifying the longest correct suffix for the reversed misspelled word. I've
implemented this by keeping a trie of reversed words
    5. Finding all reversed words in the Trie that start with the longest correct suffix.
    6. Calculating the distance between the misspelled word and each suggestion.
    7. Showing the top 5 suggestions based on the lowest distance to the user.
if the longest correct prefix/suffix did not generate enough suggestions,
I considered using the second-longest prefix/suffix as well.

  - Notes:<br>
    - Using the Tab button you can switch between suggestions and then select them.
    - Also by right-clicking on a misspelled word, you can see its correct suggestions.
