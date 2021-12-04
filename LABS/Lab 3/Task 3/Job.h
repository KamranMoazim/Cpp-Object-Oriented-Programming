#ifndef TEAM_H
#define TEAM_H


class Job {
private:
    int jobId;
    int deadline;
public:
    Job();
    Job(int, int);
    void setJobId(int i);
    void setDeadline(int d);
    int getJobId();
    int getDeadline();
};

#endif