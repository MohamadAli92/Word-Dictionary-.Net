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

    int res = readDic(MainTrie);

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    DsProject::MainForm form;

    Application::Run(% form);



}

