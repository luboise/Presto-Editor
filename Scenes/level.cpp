class PrestoScene {};

class Cube;
class Player;
class StateMachine;

class BlockedLevel : public PrestoScene {
   private:
    Player* _player;
    std::vector<Cube*> _cubes;

    StateMachine* _state;
};
