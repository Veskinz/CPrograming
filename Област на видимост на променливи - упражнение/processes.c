#include "processes.h"
#include "limits.h"
#include "string.h"

struct Process processes[5];
int processescount = 0;
static unsigned int freeId = 0;

static unsigned int nextprocessid()
{
    if(freeId == UINT_MAX)
    {
        freeId = 0;
        return freeId;
    }
    freeId++;
    return freeId;
}

unsigned int createnewprocess(char nameOfProcess[])
{
    if(processescount == 5)
    {
        return 0;
    }
    unsigned int processId = nextprocessid();
    processes[processescount].id = processId;
    strcpy(processes[processescount].name, nameOfProcess);
    processescount++;
    return processId;
}

void stopprocess(unsigned int processId)
{
    for(int i = 0; i < processescount; i++)
    {
        if(processes[i].id == processId)
        {
            for(int j = i; j < processescount - 1; j++)
            {
                processes[j] = processes[j + 1];
            }
            processescount--;
            break;
        }
    }
}

