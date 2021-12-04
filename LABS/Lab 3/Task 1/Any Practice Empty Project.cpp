#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Team.cpp"

using namespace std;


int main() {
    
    Team team1, team2;
    int score = 0, wickets = 0;

    cout << "Enter Score for Team 1 : ";
    cin >> score;
    cout << "Enter Wickets for Team 1 : ";
    cin >> wickets;
    team1.setScore(score);
    team1.setWickets(wickets);

    cout << "Enter Score for Team 2 : ";
    cin >> score;
    cout << "Enter Wickets for Team 2 : ";
    cin >> wickets;
    team2.setScore(score);
    team2.setWickets(wickets);

    cout << "Team1 has score " << team1.getScore() << " and number of wickets " << team1.getWickets() << endl;
    cout << "Team2 has score " << team2.getScore() << " and number of wickets " << team2.getWickets() << endl;


    Team team3, team4(25, 7);

    cout << "Team3 (default constructor) has score " << team3.getScore() << " and number of wickets " << team3.getWickets() << endl;
    cout << "Team4 (parameterized constructor) has score " << team4.getScore() << " and number of wickets " << team4.getWickets() << endl;
    

    Team teams[4];

    teams[0].setScore(3);
    teams[0].setWickets(4);

    teams[1].setScore(1);
    teams[1].setWickets(8);

    teams[2].setScore(45);
    teams[2].setWickets(2);

    teams[3].setScore(98);
    teams[4].setWickets(9);

    int minScr = teams[0].getScore(), maxScr = teams[0].getScore();
    int minInd = 0, maxInd = 0;

    for (int i = 0; i < 4; i++)
    {
        if (minScr > teams[i].getScore())
        {
            minScr = teams[i].getScore();
            minInd = i;
        }

        if (maxScr < teams[i].getScore())
        {
            maxScr = teams[i].getScore();
            maxInd = i;
        }
    }

    cout << "Team " << minInd + 1 << " has Min Score " << teams[minInd].getScore() << endl;
    cout << "Team " << maxInd + 1 << " has Max Score " << teams[maxInd].getScore() << endl;

    for (int i = 0; i < 4; i++)
    {
        if (teams[i].getWickets() > 6)
        {
            cout << "Team " << i + 1 << " has Wickets greater than 6." << endl;
        }
    }



    return 0;
}

