#include <stdio.h>
#include <string.h>

int main()
{
    printf("Switch lights: Enter a room number and it turns on the light in a given room if it is off or turns it off if it is on.\n");
    printf("Print state: Prints all the rooms with lights on\n");
    printf("Enter 1 for Switch lights.\n");
    printf("Enter 2 for Print state.\n");
    printf("Enter 3 to quit the program.\n");
    unsigned char lights = 0;
    while(1)
    {
        int option;
        printf("Enter an option: ");
        scanf("%d", &option);
        if(option == 1)
        {
            int lightToChange;
            printf("Enter a room(from 1 to 8): ");
            scanf("%d", &lightToChange);
            {
                if(lightToChange < 1 || lightToChange > 8)
                {
                    printf("Invalid room.");
                    continue;
                }
                lights = lights ^ (1 << (lightToChange - 1));
            }
        }
        else if(option == 2)
        {
            for(int i = 0; i < 8; i++)
            {
                if(lights & (1 << i))
                {
                    printf("The light in room %d is on.\n", i+1);
                }
            }
        }
        else if(option == 3)
        {
            break;
        }
        else
        {
            printf("Invalid option");
        }
    }
}