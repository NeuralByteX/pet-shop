/*
 * Project  : Enchanted Pet Sanctuary Management System
 * Subject  : Object Oriented Programming using C++
 * Student  : Himanshu
 * UID      : 25bcd10297
 * File     : enchanted_pets.cpp
 */

#include <iostream>
#include <string>
using namespace std;

// ===================== ABSTRACT BASE CLASS =====================
class Pet {
protected:
    string name;
    int energy;      // 0 to 100
    string mood;

public:
    Pet(string n) {
        name = n;
        energy = 70;
        mood = "Happy";
    }

    void feed() {
        energy += 20;
        if (energy > 100) energy = 100;
        mood = "Satisfied";
        cout << name << " has been fed! Energy is now " << energy << endl;
    }

    void play() {
        if (energy >= 15) {
            energy -= 15;
            mood = "Excited";
            cout << name << " is playing happily! Energy left: " << energy << endl;
        } else {
            mood = "Tired";
            cout << name << " is too tired to play." << endl;
        }
    }

    void showStatus() {
        cout << "\n===== " << name << "'s Status =====" << endl;
        cout << "Energy : " << energy << "/100" << endl;
        cout << "Mood   : " << mood << endl;
    }

    // Pure virtual function
    virtual void useMagic() = 0;

    virtual ~Pet() {}
};

// ===================== DRAGON =====================
class Dragon : public Pet {
public:
    Dragon(string n) : Pet(n) {}

    void useMagic() override {
        if (energy >= 25) {
            energy -= 25;
            mood = "Powerful";
            cout << name << " breathes a massive FIREBALL!" << endl;
            cout << "The whole sanctuary lights up in flames!" << endl;
        } else {
            cout << name << " is too weak to breathe fire right now." << endl;
        }
    }
};

// ===================== PHOENIX =====================
class Phoenix : public Pet {
public:
    Phoenix(string n) : Pet(n) {}

    void useMagic() override {
        if (energy >= 20) {
            energy -= 20;
            mood = "Reborn";
            cout << name << " bursts into flames and is REBORN!" << endl;
            cout << "All wounds are healed. Energy restored partially." << endl;
            energy += 30;
            if (energy > 100) energy = 100;
        } else {
            cout << name << " needs more energy to rebirth." << endl;
        }
    }
};

// ===================== UNICORN =====================
class Unicorn : public Pet {
public:
    Unicorn(string n) : Pet(n) {}

    void useMagic() override {
        if (energy >= 15) {
            energy -= 15;
            mood = "Blessed";
            cout << name << " creates a beautiful RAINBOW SHIELD!" << endl;
            cout << "The entire sanctuary is protected by pure magic." << endl;
        } else {
            cout << name << " is too tired to create a rainbow." << endl;
        }
    }
};

// ===================== MAIN FUNCTION =====================
int main() {
    cout << "============================================" << endl;
    cout << "   ENCHANTED PET SANCTUARY MANAGEMENT" << endl;
    cout << "   Case Study by: Himanshu (UID: 25bcd10297)" << endl;
    cout << "============================================\n" << endl;

    Dragon  drake("Ignis the Dragon");
    Phoenix blaze("Aurelia the Phoenix");
    Unicorn luna("Luna the Unicorn");

    Pet* current = nullptr;
    int choice;

    do {
        cout << "\n----------- MENU -----------" << endl;
        cout << "1. Select Dragon (Ignis)" << endl;
        cout << "2. Select Phoenix (Aurelia)" << endl;
        cout << "3. Select Unicorn (Luna)" << endl;
        cout << "4. Feed the selected pet" << endl;
        cout << "5. Play with the selected pet" << endl;
        cout << "6. Use Magical Power" << endl;
        cout << "7. Show Status" << endl;
        cout << "8. Exit Sanctuary" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                current = &drake;
                cout << ">> You selected Ignis the Dragon!" << endl;
                break;
            case 2:
                current = &blaze;
                cout << ">> You selected Aurelia the Phoenix!" << endl;
                break;
            case 3:
                current = &luna;
                cout << ">> You selected Luna the Unicorn!" << endl;
                break;
            case 4:
                if (current) current->feed();
                else cout << "Please select a pet first!" << endl;
                break;
            case 5:
                if (current) current->play();
                else cout << "Please select a pet first!" << endl;
                break;
            case 6:
                if (current) current->useMagic();
                else cout << "Please select a pet first!" << endl;
                break;
            case 7:
                if (current) current->showStatus();
                else cout << "Please select a pet first!" << endl;
                break;
            case 8:
                cout << "\nLeaving the Enchanted Sanctuary... Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 8);

    return 0;
}
