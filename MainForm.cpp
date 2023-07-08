#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace DsProject;
[STAThread]

void main()
{

    MainTrie = new Trie();

    ReverseTrie = new Trie();

    readDic(MainTrie);

    reverseTrie(MainTrie, ReverseTrie);

    vector<string> resWords = autoCorrect(MainTrie, ReverseTrie, "celabrate");

    cout << "Correct Words:" << endl;

    for each (auto word in resWords)
    {
        cout << word << endl;
    }

    Application::EnableVisualStyles();

    //LCP("ab", Trie::root);    
    for (string s : AutoCompleteSuggestions("ab", MainTrie->root))
        cout << s << endl;

        
    Application::SetCompatibleTextRenderingDefault(false);

    DsProject::MainForm form;

    Application::Run(% form);
}

