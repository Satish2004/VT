#include <iostream>
#include <vector>
#include <set>

using namespace std;
class Character
{
    // variables and data types
public:
    string name;
    string species;
    string skills;
    vector<string> inventory={"AWM", "KAR-98K", "M24"};
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
        this->inventory;
        this->health = 100;
        this->level = 0;
        this->status = true;
    }
    // to get the skils
    string setSkill(string skills)
    {
        this->skills = skills;
    }
    // to get the skills
    string getSkill()
    {
        cout << "player name = " << name << " has skill is =" << skills << endl;

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

    void Weapon(string W)
    {
        // maximum weapon should be three
    //weapon.length() = 3;
        // should not be doublicate
        for (auto i = 0; i<inventory.size(); i++)
        {
            // cout<<*it<<" ";f
            if (inventory[i]==W)
            {
                cout << "already exixt in weapon";
                // return;
            }
                cout << "new weapon added = ";
            
        }
    }
};

int main()
{ // fox inventroy no weapon and health is full and level and status for all animals is true;

    Character nix = Character("Nix", "Fox", "Dash");
    nix.setSkill("Dash");
    nix.getSkill();
    nix.performAction("left");
    Character fuzzy = Character("Fuzzy", "penguine", "Bumble");
    nix.performAction(fuzzy);
    nix.Weapon("akm");

    //   cout<<nix.name<<q
    return 0;
}