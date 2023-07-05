#include "MainForm.h"
#include "ReadDic.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

//void main(array<String^>^ args)
void main()
{

    // Trie of words
    Trie* MainTrie = new Trie();

    Trie* ReverseTrie = new Trie();

    readDic(MainTrie);

    reverseTrie(MainTrie, ReverseTrie);

    vector<string> resWords = autoCorrect(MainTrie, ReverseTrie, "celabrate");

    cout << "Correct Words:" << endl;

    for each (auto word in resWords)
    {
        cout << word << endl;
    }

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    DsProject::MainForm form;

    Application::Run(% form);



}

