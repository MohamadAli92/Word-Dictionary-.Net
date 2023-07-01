#include "MainForm.h"
#include "ReadDic.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

//void main(array<String^>^ args)
void main()
{

    int res = readDic();

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    DsProject::MainForm form;

    Application::Run(% form);


}

