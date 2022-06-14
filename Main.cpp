#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)



wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30,30), wxSize(530,700))
{
	button1 = new wxButton(this, 1, "+/-", wxPoint(5, 555), wxSize(100, 100));
	button2 = new wxButton(this, 2, "0", wxPoint(105, 555), wxSize(100, 100));
	button3 = new wxButton(this, 3, ".", wxPoint(205, 555), wxSize(100, 100));
	button4 = new wxButton(this, 4, "=", wxPoint(305, 555), wxSize(200, 100));
	button5 = new wxButton(this, 5, "1", wxPoint(5, 455), wxSize(100, 100));
	button6 = new wxButton(this, 6, "2", wxPoint(105, 455), wxSize(100, 100));
	button7 = new wxButton(this, 7, "3", wxPoint(205, 455), wxSize(100, 100));
	button8 = new wxButton(this, 8, "+", wxPoint(305, 455), wxSize(100, 100));
	button9 = new wxButton(this, 9, "4", wxPoint(5, 355), wxSize(100, 100));
	button10 = new wxButton(this, 10, "5", wxPoint(105, 355), wxSize(100, 100));
	button11 = new wxButton(this, 11, "6", wxPoint(205, 355), wxSize(100, 100));
	button12 = new wxButton(this, 12, "-", wxPoint(305, 355), wxSize(100, 100));
	button13 = new wxButton(this, 13, "7", wxPoint(5, 255), wxSize(100, 100));
	button14 = new wxButton(this, 14, "8", wxPoint(105, 255), wxSize(100, 100));
	button15 = new wxButton(this, 15, "9", wxPoint(205, 255), wxSize(100, 100));
	button16 = new wxButton(this, 16, "*", wxPoint(305, 255), wxSize(100, 100));
	button17 = new wxButton(this, 17, "C", wxPoint(5, 155), wxSize(150, 100));
	button18 = new wxButton(this, 18, "AC", wxPoint(155, 155), wxSize(150, 100));
	button19 = new wxButton(this, 19, "/", wxPoint(305, 155), wxSize(100, 100));
	button20 = new wxButton(this, 20, "Mod", wxPoint(405, 155), wxSize(100, 100));
	button21 = new wxButton(this, 21, "Binary", wxPoint(405, 255), wxSize(100, 100));
	button22 = new wxButton(this, 22, "Hex", wxPoint(405, 355), wxSize(100, 100));
	button23 = new wxButton(this, 23, "Decimal", wxPoint(405, 455), wxSize(100, 100));
	textbox = new wxTextCtrl(this, 24, "", wxPoint(5, 5), wxSize(500, 150));
}

Main::~Main()
{

}

void Main::OnButtonClicked(wxCommandEvent& evt)
{

}