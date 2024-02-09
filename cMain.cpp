#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()



cMain::cMain() : wxFrame(nullptr, wxID_ANY, "WX Widgets Lesson")
{
	btn = new wxButton(this, 10001, "Click Me", wxPoint(10, 10), wxSize(150, 50));
	txtCtrl = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 60), wxSize(300, 30));
	listBox = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{ 
	listBox->AppendString(txtCtrl->GetValue());
	evt.Skip();
}