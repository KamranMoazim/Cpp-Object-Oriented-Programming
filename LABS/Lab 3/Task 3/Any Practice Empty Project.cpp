#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Job.cpp"

using namespace std;


int main() {
    
    int deadline = 0;
    Job jobs[10];

    jobs[0].setJobId(1);
    jobs[0].setDeadline(12);

    jobs[1].setJobId(2);
    jobs[1].setDeadline(1);

    jobs[2].setJobId(3);
    jobs[2].setDeadline(11);

    jobs[3].setJobId(4);
    jobs[3].setDeadline(45);

    jobs[4].setJobId(5);
    jobs[4].setDeadline(6);

    jobs[5].setJobId(6);
    jobs[5].setDeadline(9);

    jobs[6].setJobId(7);
    jobs[6].setDeadline(66);

    jobs[7].setJobId(8);
    jobs[7].setDeadline(5);

    jobs[8].setJobId(9);
    jobs[8].setDeadline(27);

    jobs[9].setJobId(10);
    jobs[9].setDeadline(34);

    deadline = jobs[0].getDeadline();
    int smallest = 0, secondSmallest = 0;
    for (int i = 0; i < 10; i++)
    {
        if (deadline > jobs[i].getDeadline())
        {
            deadline = jobs[i].getDeadline();
            smallest = i;
        }
    }

    deadline = jobs[0].getDeadline();
    for (int i = 0; i < 10; i++)
    {
        if (i != smallest)
        {
            if (deadline > jobs[i].getDeadline())
            {
                deadline = jobs[i].getDeadline();
                secondSmallest = i;
            }
        }
    }

    cout << "Job " << smallest + 1 << " has earliest and Job " << secondSmallest + 1 << " second most earliest deadline." << endl;
    
    return 0;
}









