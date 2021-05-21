#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int i;
    int delay = 120;
    int nanoMultiplier = 1000;
    char text [26]= "Teste... Texto de RPG...\n";
    
    for(i=0; i<26; i++)
    {
        printf("%c", text[i]);
        fflush(stdout);
        usleep(delay*nanoMultiplier);
    }

return 0;
}
