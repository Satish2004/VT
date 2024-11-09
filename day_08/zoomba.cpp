#include <iostream>
#include <vector>
using namespace std;
class Character
{
    // variables and data types
public:
    string name;
    string species;
    string skills;
    vector<string> inventory;
    int health;
    int level;
    bool status; // live or not
public:
    // constructor(1) without parameter

    Character(string species)
    {
        this->name = "Unknown";
        this->species = species;
        this->skills = "Unknown";
    }

    // constructor(2) with parameter
    Character(string name, string species, string skills) // if i want to pass 7th paramenter under the main constructor gives an error

    {
        this->name = name;
        this->species = species;
        this->skills = skills;
        this->inventory = {};
        this->health = 100;
        this->level = 0;
        this->status = true;
    }
    // to set the skils
    string setSkill(string skills)
    {
        this->skills = skills;
    }
    // to get the skills
    string getSkill()
    {
        cout << "player name = " << name << "has skill is =" << skills << endl;

        return this->skills;
    }
    void setInventory(string item)
    {
        inventory.push_back(item);
    }

    vector<string> getInventory()
    {
        return inventory;
    }

    void performAction(string direction)
    {
        cout << "player " << name << "is walking toward " << direction << endl;
    }

    void performAction(Character target)
    {
        cout << "Player " << name << "is attacking " << target.name << endl;
    }

    void Weapon(string Weapon)
    {
        cout << "player " << name << "having " << Weapon;
    }
};

int main()
{ // fox inventroy no weapon and health is full and level and status for all animals is true;

    Character nix = Character("Nix", "Fox", "Dash");
    nix.setSkill("Dash");
    nix.getSkill();
    nix.performAction("left");
    Character fuzzy = Character("Fuzzy", "penguine", "Bubmble");
    nix.performAction(fuzzy);
    Character weapon = Character("AWM", "KAR-98K", "M24");
    nix.Weapon("AWM");
    //   cout<<nix.name<<q
    return 0;
}