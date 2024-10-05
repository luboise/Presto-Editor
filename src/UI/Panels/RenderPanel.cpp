#include "RenderPanel.h"

RenderPanel::RenderPanel(wxWindow* parent) : wxPanel(parent, wxID_ANY) {
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);

    wxButton* button = new wxButton(this, wxID_ANY, "Click Me");
    button->Bind(wxEVT_BUTTON, &RenderPanel::OnButtonClick, this);
    sizer->Add(button, 0, wxALIGN_CENTER | wxALL, 10);

    this->SetSizer(sizer);
}

void RenderPanel::OnButtonClick(wxCommandEvent& event) {
    wxMessageBox("Button clicked!", "Info", wxOK | wxICON_INFORMATION);
}
