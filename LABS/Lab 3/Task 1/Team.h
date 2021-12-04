#ifndef TEAM_H
#define TEAM_H


class Team {
private:
    int score;
    int numberOfWickets;
public:
    Team();
    Team(int, int);
    void setScore(int);
    void setWickets(int);
    int getScore();
    int getWickets();
};

#endif