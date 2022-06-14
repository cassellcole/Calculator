#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(1, Main::OnButtonClicked)
EVT_BUTTON(2, Main::OnButtonClicked)
EVT_BUTTON(3, Main::OnButtonClicked)
EVT_BUTTON(4, Main::OnButtonClicked)
EVT_BUTTON(5, Main::OnButtonClicked)
EVT_BUTTON(6, Main::OnButtonClicked)
EVT_BUTTON(7, Main::OnButtonClicked)
EVT_BUTTON(8, Main::OnButtonClicked)
EVT_BUTTON(9, Main::OnButtonClicked)
EVT_BUTTON(10, Main::OnButtonClicked)
EVT_BUTTON(11, Main::OnButtonClicked)
EVT_BUTTON(12, Main::OnButtonClicked)
EVT_BUTTON(13, Main::OnButtonClicked)
EVT_BUTTON(14, Main::OnButtonClicked)
EVT_BUTTON(15, Main::OnButtonClicked)
EVT_BUTTON(16, Main::OnButtonClicked)
EVT_BUTTON(17, Main::OnButtonClicked)
EVT_BUTTON(18, Main::OnButtonClicked)
EVT_BUTTON(19, Main::OnButtonClicked)
EVT_BUTTON(20, Main::OnButtonClicked)
EVT_BUTTON(21, Main::OnButtonClicked)
EVT_BUTTON(22, Main::OnButtonClicked)
EVT_BUTTON(23, Main::OnButtonClicked)


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
	int id = evt.GetId();

	switch (id)
	{
	case 1: {
		textbox->AppendText("");
		break;
	}
	case 2: {
		textbox->AppendText("0");
		break;
	}
	case 3: {
		textbox->AppendText(".");
		break;
	}
	case 4: {
		textbox->AppendText("");
		break;
	}
	case 5: {
		textbox->AppendText("1");
		break;
	}
	case 6: {
		textbox->AppendText("2");
		break;
	}
	case 7: {
		textbox->AppendText("3");
		break;
	}
	case 8: {
		textbox->AppendText("+");
		break;
	}
	case 9: {
		textbox->AppendText("4");
		break;
	}
	case 10: {
		textbox->AppendText("5");
		break;
	}
	case 11: {
		textbox->AppendText("6");
		break;
	}
	case 12: {
		textbox->AppendText("-");
		break;
	}
	case 13: {
		textbox->AppendText("7");
		break;
	}
	case 14: {
		textbox->AppendText("8");
		break;
	}
	case 15: {
		textbox->AppendText("9");
		break;
	}
	case 16: {
		textbox->AppendText("*");
		break;
	}
	case 17: {
		textbox->Clear();
		break;
	}
	case 18: {
		textbox->Clear();
		break;
	}
	case 19: {
		textbox->AppendText("/");
		break;
	}
	case 20: {
		textbox->AppendText("%");
		break;
	}
	case 21: {
		wxString text = textbox->GetValue();
		int number = wxAtoi(text);

		int binary = 0;
		int remainder;
		int product = 1;
		
		while (number != 0) {
			remainder += (number % 2 == 0 ? "0" : "1");
			number /= 2;
		}
		wxString stringnumber = wxString::Format(wxT("%i"), number);
		//textbox->Clear();
		textbox->AppendText(stringnumber);
		break;
	}
	case 22: {
		textbox->AppendText("");
		break;
	}
	case 23: {
		textbox->AppendText("");
		break;
	}
	}
}