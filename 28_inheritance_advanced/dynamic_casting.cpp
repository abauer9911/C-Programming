#include <iostream>

// abstract class
class Weapon {
public:
    virtual void use() = 0; // abstract function (method)
};

class Gun : public Weapon {
public:
    void use() override {
        std::cout << "BANG!" <<std::endl;
    }
};

class MachineGun : public Gun {
public:
    MachineGun() : magazine(20) {

    }

    void use() override {
        while(magazine--) {
            std::cout << "BANG ";
        }
        std::cout << "\n";
        magazine = 20;
    }
private:
    int magazine;
};

class Bazooka : public Gun {
public:
    void use() override {
        std::cout << "BOOM!" << std::endl;
    }
};

class Knife : public Weapon {
public:
    Knife(bool stainless = false) : is_stainless(stainless) {

    }
    void use() override {
        std::cout << "Stabby Stabby!" << std::endl;
    }

    bool getIsStainless() const {
        return is_stainless;
    }

private: 
    bool is_stainless;
};

class Player {
public: 
    void use(Weapon& weapon) {
        // dynaminc casting
        Knife* knife = dynamic_cast<Knife*>(&weapon);

        if (!knife) {
            std::cout << "Not a knife\n";
        }
        else {
            if (knife->getIsStainless()) {
                std::cout << "Stainless knife. Can use it!\n";
                knife->use();
            }
            else {
                std::cout << "Non-stainless knife. Cannot use it!\n";
            }
        }
    }
};

int main(void) {
    Gun gun;
    MachineGun mg;

    mg.use();

    std::cout << "Array\n";
    Gun* guns[2] = {&gun, &mg};

    for (int i = 0; i < 2; i++) {
        guns[i]->use();
    }

    std::cout << "Player\n";
    Player player;
    Bazooka bazooka;
    Knife knife(true);
    player.use(gun);
    player.use(mg);
    player.use(bazooka);
    player.use(knife);

    return 0;
}