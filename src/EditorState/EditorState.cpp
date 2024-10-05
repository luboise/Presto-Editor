#include "EditorState.h"
#include <wx/filedlg.h>
#include <wx/gtk/filedlg.h>
#include "Presto/Log.h"

EditorState* EditorState::_state = nullptr;

void EditorState::loadScene(const std::string& path) {
    auto _currentScene = Pr::Scenes::Load(path);
    Pr::Scenes::SwitchTo(_currentScene);
}

EditorState& EditorState::Get() {
    if (_state == nullptr) {
        _state = new EditorState();
    }

    return *_state;
}
