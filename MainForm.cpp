#include "MainForm.h"
#include "AutoComplete.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

//void main(array<String^>^ args)
void main()
{
    int res = readDic();

    Application::EnableVisualStyles();

    //LCP("ab", Trie::root);    
    for (string s : AutoCompleteSuggestions("abc", Trie::root))
        cout << "abc"+s << endl;

        
    Application::SetCompatibleTextRenderingDefault(false);

    DsProject::MainForm form;

    Application::Run(% form);
}

