#include "ScenePanel.h"

ScenePanel::ScenePanel(wxWindow* parent) : wxPanel(parent, wxID_ANY) {
    // wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);

    wxButton* add_entity_button = new wxButton(this, ID_ADD_ENTITY, "+");
    add_entity_button->Bind(wxEVT_BUTTON, &ScenePanel::OnAddEntity, this);

    auto top_sizer = new wxBoxSizer(wxHORIZONTAL);
    top_sizer->Add(new wxStaticText(this, wxID_ANY, "SCENE"));
    top_sizer->Add(add_entity_button);

    auto button = new wxButton(this, wxID_ANY, "TEST");

    /*
// Add a list control for objects in the scene
wxListCtrl* objectList = new wxListCtrl(this, wxID_ANY, wxPoint(10, 50),
                                        wxSize(360, 200), wxLC_REPORT);
objectList->InsertColumn(0, "Objects", wxLIST_FORMAT_LEFT, 300);

// Add example objects to the list
objectList->InsertItem(0, "Object 1");
objectList->InsertItem(1, "Object 2");
objectList->InsertItem(2, "Object 3");
    */

    auto main_sizer = new wxBoxSizer(wxVERTICAL);
    main_sizer->Add(top_sizer);
    main_sizer->Add(button);

    this->SetSizer(main_sizer);
}

void ScenePanel::OnButtonClick(wxCommandEvent& event) {
    wxMessageBox("Button clicked!", "Info", wxOK | wxICON_INFORMATION);
}

void ScenePanel::OnAddEntity(wxCommandEvent& event) {
    // TODO: Implement this
}
