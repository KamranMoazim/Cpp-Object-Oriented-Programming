#include <iostream>
#include "Team.h"

using namespace std;

Team::Team() {
    score = 0;
    numberOfWickets = 11;
}

Team::Team(int s, int w) {
    if (s > 0)
    {
        score = s;
    }
    else
    {
        cout << "Invalid Score for Team" << endl;
    }
    if (w > 0)
    {
        numberOfWickets = w;
    }
    else
    {
        cout << "Invalid Wickets for Team" << endl;
    }
}
void Team::setScore(int s) {
    if (s > 0)
    {
        score = s;
    }
    else
    {
        cout << "Invalid Score for Team" << endl;
    }
}
void Team::setWickets(int w) {
    if (w > 0)
    {
        numberOfWickets = w;
    }
    else
    {
        cout << "Invalid Wickets for Team" << endl;
    }
}

int Team::getScore() {
    return score;
}

int Team::getWickets() {
    return numberOfWickets;
}
