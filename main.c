#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char ulkeler[5][20];
    for(int i=0;i<5;i++){
        scanf("%s",&ulkeler[i]);
    }

    char *ulkelerinAdresleri[5];
    for(int i=0;i<5;i++){
        ulkelerinAdresleri[i] = &ulkeler[i];
    }

    for(int i=0;i<5;i++){
        printf("%s\t%x\n",*(ulkelerinAdresleri+i),(ulkelerinAdresleri+i));
    }

    return 0;
}
