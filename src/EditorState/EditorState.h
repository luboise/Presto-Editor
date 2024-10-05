#pragma once

class EditorState {
   public:
    static void loadScene(const std::string&);
    static EditorState& Get();

   private:
    static EditorState* _state;
    std::string _currentScene;
};
