#include <iostream>

class Character {
public:
    Character(int hp = 100) : hp(hp) {
        std::cout << "Character's constructor\n";
    }

// protected:
    int hp;
};


class Elf : virtual public Character {
public:
    Elf() {
        std::cout << "I am an Elf!\n";
    }
    
    void think() {
        std::cout << "Let's not fight!\n";
    }
};

class Warrior : virtual public Character {
public:
    Warrior() {
        std::cout << "I am a Warrior!\n";
    }

    void fight() {
        std::cout << "Slash!!!\n";
    }
};


class ElfWarrior : public Elf, public Warrior {
public:
    ElfWarrior(int hp) : Character(hp) {
        
    }
};


int main() {
    ElfWarrior elfi(150);

    elfi.fight();
    elfi.think();
    
    std::cout << elfi.hp;

    return 0;
}
