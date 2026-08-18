#include <stdio.h>
#include <stdlib.h>

#include <xenos/xenos.h>
#include <console/console.h>

int main(void)
{
    xenos_init(VIDEO_MODE_AUTO);
    console_init();

    printf("\n");
    printf("========================================\n");
    printf("          TomaScript Loader\n");
    printf("========================================\n\n");

    printf("TomaScript keresés...\n\n");

    printf("TomaScript ellenőrzése folyamatban...\n");
    printf("TomaScript_OK.txt ellenőrzése...\n\n");

    printf("Tesztverzio: libXenon build sikeres!\n");
    printf("\n");
    printf("========================================\n");

    while (1)
    {
        printf("\r");
    }

    return 0;
}
