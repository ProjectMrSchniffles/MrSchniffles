#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char w[200];
    char input[200];
    int counter = 200;
    char number[300];
    while (counter<1000)
    {
        scanf(" %s", input); 
	strcpy(w,"espeak \"");
	strcat(w, input);
	strcat(w, "\"");
	strcat(w, " -s ");	
	sprintf(number, "%d", counter);
	strcat(w, number);	
	system (w);
    }
    return 0;
}
