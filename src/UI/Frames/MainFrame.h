#pragma once

#include <wx/wx.h>

class MainFrame : public wxFrame {
   public:
    MainFrame(wxWindow* parent = nullptr);

   private:
    wxMenuItem* _hello;

    void OnHello(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
};
