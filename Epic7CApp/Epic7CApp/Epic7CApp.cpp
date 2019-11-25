#include "pch.h"
#include "stdafx.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Epic7CApp::EpicSeven nameObjectForm;
	Epic7CApp::My2nd nameObjectForm2;
	Application::Run(%nameObjectForm);

    return 0;
}
