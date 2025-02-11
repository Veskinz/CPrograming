#include "processes.h"
#include <stdio.h>

void printProcesses()
{
    for(int i; i < processescount; i++)
    {
        printf("Process %d:\n", i + 1);
        printf("Id: %d\n", processes[i].id);
        printf("Name: %s\n\n", processes[i].name);
    }
}

int main()
{
    printf("Enter 1 to create a process\n");
    printf("Enter 2 to get a list of all processes\n");
    printf("Enter 3 to stop a process\n");
    printf("Enter 4 to exit the program\n");
    while(0)
    {
        int command;
        scanf("%d", command);
        if(command == 1)
        {
            char name[30];
            scanf("%s", name)
            int result = createnewprocess(name);
            else if(result == 0)
            {
                printf("There are already 5 started processes. To start a new one you need to delete an old process.");
            }
            else
            {
                printf("A process with an id %d is started.", result);
            }
        }
        else if(command == 2)
        {
            printProcesses();
        }
        else if(command == 3)
        {
            unsigned int id
            scanf("%d", id)
            stopprocess(id);
        }
        else if(command == 4)
        {
            break;
        }
        else
        {
            printf("Invalid command.")
        }
    }
}