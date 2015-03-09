#include "ViewLog.h"

//(*InternalHeaders(ViewLog)
#include <wx/string.h>
#include <wx/intl.h>
//*)

//(*IdInit(ViewLog)
const long ViewLog::ID_TEXTCTRL1 = wxNewId();
const long ViewLog::ID_STATICTEXT1 = wxNewId();
const long ViewLog::ID_TEXTCTRL2 = wxNewId();
const long ViewLog::ID_STATICTEXT3 = wxNewId();
const long ViewLog::ID_TEXTCTRL3 = wxNewId();
const long ViewLog::ID_STATICTEXT4 = wxNewId();
const long ViewLog::ID_STATICTEXT2 = wxNewId();
const long ViewLog::ID_LISTBOX1 = wxNewId();
const long ViewLog::ID_BUTTON1 = wxNewId();
const long ViewLog::ID_BUTTON2 = wxNewId();
const long ViewLog::ID_BUTTON4 = wxNewId();
const long ViewLog::ID_BUTTON5 = wxNewId();
const long ViewLog::ID_BUTTON3 = wxNewId();
const long ViewLog::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ViewLog,wxDialog)
	//(*EventTable(ViewLog)
	//*)
END_EVENT_TABLE()

ViewLog::ViewLog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ViewLog)
	wxFlexGridSizer* FlexGridSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;

	Create(parent, id, _("Install Log"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FlexGridSizer1->AddGrowableRow(3);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer1->Add(TextCtrl1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Game path"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer1->Add(TextCtrl2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Log file"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	FlexGridSizer1->Add(TextCtrl3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Backup path"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer1->Add(StaticText4, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("List of installed mods for current path:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(0,0,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ListBox1 = new wxListBox(Panel1, ID_LISTBOX1, wxDefaultPosition, wxSize(411,416), 0, 0, wxLB_SINGLE|wxLB_ALWAYS_SB, wxDefaultValidator, _T("ID_LISTBOX1"));
	FlexGridSizer1->Add(ListBox1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Load installer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->Disable();
	BoxSizer2->Add(Button1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Load uninstaller"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->Disable();
	BoxSizer2->Add(Button2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("Batch installer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	BoxSizer2->Add(Button4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button5 = new wxButton(Panel1, ID_BUTTON5, _("Batch uninstaller"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	BoxSizer2->Add(Button5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Close log"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer2->Add(Button3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 0);
	Panel1->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(Panel1);
	FlexGridSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&ViewLog::OnSelectItem);
	Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,(wxObjectEventFunction)&ViewLog::OnDoubleClickItem);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ViewLog::OnLoadInstaller);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ViewLog::OnLoadUninstaller);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ViewLog::OnMakeBatchInstaller);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ViewLog::OnMakeBatchUninstaller);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ViewLog::OnCloseLog);
	//*)

	SetEscapeId(ID_BUTTON3);

	bInstaller = true;
	bBatch = false;
}

ViewLog::~ViewLog()
{
	//(*Destroy(ViewLog)
	//*)
}


void ViewLog::OnSelectItem(wxCommandEvent& event)
{
    Button1->Enable(true);
    Button2->Enable(true);
}

void ViewLog::OnDoubleClickItem(wxCommandEvent& event)
{
    SelectionIdx = ListBox1->GetSelection();
    bInstaller = true;
    EndModal(wxID_OK);
}

void ViewLog::OnLoadInstaller(wxCommandEvent& event)
{
    SelectionIdx = ListBox1->GetSelection();
    bInstaller = true;
    EndModal(wxID_OK);
}

void ViewLog::OnLoadUninstaller(wxCommandEvent& event)
{
    SelectionIdx = ListBox1->GetSelection();
    bInstaller = false;
    EndModal(wxID_OK);
}

void ViewLog::OnCloseLog(wxCommandEvent& event)
{
    EndModal(wxID_CANCEL);
}

void ViewLog::InitModList(wxArrayString ModList)
{
    if (ModList.size() > 0)
        ListBox1->InsertItems(GetModNames(ModList), 0);
}

wxArrayString ViewLog::GetModNames(wxArrayString ModList)
{
    wxArrayString ret;
    for (unsigned i = 0; i < ModList.GetCount(); ++i)
    {
        ret.Add(ModList[i].substr(ModList[i].find_last_of("/\\") + 1));
    }
    return ret;
}

void ViewLog::OnMakeBatchInstaller(wxCommandEvent& event)
{
    bInstaller = true;
    bBatch = true;
    EndModal(wxID_OK);
}

void ViewLog::OnMakeBatchUninstaller(wxCommandEvent& event)
{
    bInstaller = false;
    bBatch = true;
    EndModal(wxID_OK);
}
