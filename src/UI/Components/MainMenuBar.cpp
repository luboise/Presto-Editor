#include "MainMenuBar.h"
#include <wx/event.h>
#include <wx/wx.h>

MainMenuBar::MainMenuBar(wxWindow* parent) : wxMenuBar() {
    wxMenu* fileMenu = new wxMenu();
    fileMenu->Append(wxID_OPEN, "Open Scene");
    fileMenu->Append(wxID_EXIT, "Exit");

    wxMenu* helpMenu = new wxMenu();
    helpMenu->Append(wxID_ABOUT, "About");

    this->Append(fileMenu, "&File");
    this->Append(helpMenu, "&Help");

    fileMenu->Bind(
        wxEVT_MENU,

        [parent](wxCommandEvent& event) {
            wxFileDialog dlg(parent, _("Open file"), "", "",
                             "Presto Scene (*.prsc)|*.prsc",
                             wxFD_OPEN | wxFD_FILE_MUST_EXIST);

            if (dlg.ShowModal() == wxID_OK) {
                // Handle the file open logic here
                std::cout << "Loading scene from " << dlg.GetPath().ToStdString() << std::endl;

                EditorState::Get().loadScene(dlg.GetPath().ToStdString());
            }
        },

        //	EditorState::Get().loadScene,

        wxID_OPEN);
}
