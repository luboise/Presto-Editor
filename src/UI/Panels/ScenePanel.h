class ScenePanel : public wxPanel {
   public:
    ScenePanel(wxWindow* parent);

   private:
    void OnButtonClick(wxCommandEvent& event);
    void OnAddEntity(wxCommandEvent& event);

    enum { ID_ADD_ENTITY };
};
