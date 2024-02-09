#pragma once
#include <wx/wx.h>

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

private:
	wxButton* btn = nullptr;
	wxTextCtrl* txtCtrl = nullptr;
	wxListBox* listBox = nullptr;


	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

