
#include <iostream>
#include <vector>
using namespace std;

template <typename T1, typename T2, typename T3>
class Shooter
{

private:
    T1 name;   // string
    T2 score;  // int
    T3 points; // int

public:
    Shooter(T1 name, T2 score, T3 points)
    {
        this->name = name;
        this->score = score;
        this->points = points;
    }

    void shoot(T1 name, T3 points)
    {
        this->score += points;
        // cout << "name is = " << this->name << " shoots and scores = " << this->points << endl;
    }

    void displayScore() const
    {
        cout << "player name is = " << this->name << "\n"
             << " score is = " << this->score << endl;
    }
};
int main()
{

    // int====>
    Shooter<string, int, int> player1("john", 0, 0);
    cout << "INTERGER VALUE = \n";
    player1.shoot("john", 10);
    player1.shoot("john", 5);
    player1.shoot("john", 5);
    player1.displayScore();

    // // double==>
    // Shooter<string, double, double> player2("subhramIyer", 0, 0);
    // cout << "DOUBLE VALUE = \n";
    // player2.shoot("subhramIyer", 10.2);
    // player2.shoot("subhramIyer", 5.8);
    // player2.shoot("subhramIyer", 5.3);
    // player2.displayScore();
    vector<Shooter<string, int, int>> allPlayers;

    allPlayers.push_back(player1);
    for (const Shooter <string , int , int> &player: allPlayers){
        player.displayScore();
        // also i write like this -->> auto in place of ---> Shooter <string , int , int> 
            }

        return 0;
}