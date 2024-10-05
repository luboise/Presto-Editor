#include "Presto/Presto.h"
#include "UI/Frames/MainFrame.h"

class PrestoEditor : public wxApp, public Presto::Application {
   public:
    bool OnInit() override {
        _mainFrame = new MainFrame();
        _mainFrame->Show();

        return true;
    };

   private:
    MainFrame* _mainFrame = nullptr;
};

int main(int argc, char** argv) {
    Presto::Init();
    return wxEntry(argc, argv);
}

PrestoEditor& wxGetApp() {
    return *static_cast<PrestoEditor*>(wxApp ::GetInstance());
}

wxAppConsole* wxCreateApp() {
    wxAppConsole ::CheckBuildOptions(
        "3"
        "."
        "2"
        " ("
        "wchar_t"
        ",compiler with C++ ABI compatible with gcc 4"
        ",wx containers"
        ",compatible with 3.0"
        ")",
        "your program");
    return new PrestoEditor;
}

wxAppInitializer wxTheAppInitializer((wxAppInitializerFunction)wxCreateApp);

/*

float getRandomFloat() {
    // Generate a random float between 0.0 and 1.0
    return static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
}

namespace Pr = Presto;
class _PrestoEditor final : public Pr::Application {
   public:
    void Setup() override {
        auto scene_name = Pr::Scenes::Load("Scenes/level.json");
        Pr::Scenes::SwitchTo(scene_name);
    };

    void GameLoop() override {
        double diff = glm::sin(_currentTime);
        _mainCamera.setPos(glm::vec3(
            glm::sin(_currentTime), glm::sin(_currentTime / 7 - 1),
            1));  // glm::cos(_currentTime)));  //+ glm::vec3(0, 0, diff));
        // _mainCamera.setYaw(diff);
    }

    ~_PrestoEditor() {}
};
*/

////////////////////////////////////////////////////////////////

// Presto::Application* Presto::CreateApplication() { return new PrestoEditor();
// }

/*
// this->_heart = Pr::EntityManager::newEntity();
auto cube_entity = Pr::EntityManager::newEntity();


glm::vec3 colour = {0, 0, 1};

auto thingos = Pr::Meshes::Cube({-1, -1, -1}, 0.3, colour);

auto& mgr = Pr::RenderingManager::Get();

auto* mesh = mgr.NewMesh(thingos.vertices, thingos.indices);
auto* props = mgr.NewRenderableProps();
auto* renderable = mgr.NewRenderable(*mesh, *props);
auto* renderable2 = mgr.NewRenderable(*mesh, *props);

cube_entity->setComponent(renderable);
mgr.AddRenderable(0, renderable);
*/

/**
std::vector<Pr::VulkanVertex> makeHeart(uint32_t points) {
    // Symmetric shape, so need even number of points
    if (points % 2 == 1) points++;

    std::vector<Pr::VulkanVertex> heart(points);

    const float width = 1;
    const float height = width;

    const double denom = glm::two_pi<double>() / (points);

    for (auto i = 0; i < points; i++) {
        double t = i * denom;

        float x = (width / 2.0f) * glm::pow(glm::sin(t), 3);
        // Normalised height
        float y = (13 * glm::cos(t) - 2 * glm::cos(3 * t) - glm::cos(4 * t) -
                   5 * glm::cos(2 * t));
        y += 2.5;
        y /= 15;
        // Scale to desired height
        y *= (height / 2);

        heart[i] = Pr::VulkanVertex{{x, -y, 0.0f}, glm::vec4(1, 0, 0, 1)};
    }

    return heart;
};

const std::vector<uint32_t> makeIndices(uint32_t vertexCount) {
    std::vector<uint32_t> indices(vertexCount);
    for (auto i = 0; i < vertexCount; i++) indices[i] = i;
    return indices;
};

**/
