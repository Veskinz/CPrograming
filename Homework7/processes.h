#ifndef GUARD
#define GUARD

struct Process
{
    unsigned int id;
    char name[30];
};

extern struct Process processes[5];
extern int processescount;

#endif