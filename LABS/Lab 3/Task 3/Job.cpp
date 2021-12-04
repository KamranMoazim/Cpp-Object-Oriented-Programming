#include <iostream>
#include "Job.h"

using namespace std;

Job::Job() {
    jobId = 1;
    deadline = 10;
}

Job::Job(int s, int w) {
    if (s > 0)
    {
        jobId = s;
    }
    else
    {
        cout << "Invalid JOB Id." << endl;
    }
    if (w > 0)
    {
        deadline = w;
    }
    else
    {
        cout << "Invalid JOB Deadline." << endl;
    }
}


void Job::setJobId(int i) {
    if (i > 0)
    {
        jobId = i;
    }
    else
    {
        cout << "Invalid JOB Id." << endl;
    }
}
void Job::setDeadline(int d) {
    if (d > 0)
    {
        deadline = d;
    }
    else
    {
        cout << "Invalid JOB Deadline." << endl;
    }
}

int Job::getJobId() {
    return jobId;
}
int Job::getDeadline() {
    return deadline;
}