#include "MainFrame.h"
#include "UI/Components/MainMenuBar.h"

#include "UI/Panels/RenderPanel.h"
#include "UI/Panels/ScenePanel.h"

MainFrame::MainFrame(wxWindow* parent)
    : wxFrame(NULL, wxID_ANY, "Hello World") {
    auto* sizer = new wxBoxSizer(wxHORIZONTAL);
    sizer->Add(new ScenePanel(this));
    sizer->AddStretchSpacer(1);
    sizer->Add(new RenderPanel(this));

    this->SetSizer(sizer);

    this->SetMenuBar(new MainMenuBar(this));
}

void MainFrame::OnHello(wxCommandEvent& event) {
    std::cout << "AKSDJH";

    wxLogMessage("Hello!");
}

void MainFrame::OnAbout(wxCommandEvent& event) {
    wxMessageBox("This is a Hello World program using wxWidgets.", "About",
                 wxOK | wxICON_INFORMATION);
}

void MainFrame::OnExit(wxCommandEvent& event) { return; }
