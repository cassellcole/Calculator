#include "App.h"

wxIMPLEMENT_APP(App);

App::App()
{

}

App::~App()
{

}


bool App::OnInit()
{
	form1 = new Main();
	form1->Show();
	
	return true;
}