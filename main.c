#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main() {
    int option;
    printf("=============================================\n");
    printf("       >> KUET Club Management Portal <<\n");
    printf("=============================================\n");
    printf("Access your club activities, events, and members\n");
    printf("through an easy-to-use management system.\n\n");
    printf("Empowering KUET clubs through smart management and collaboration.\n");
    printf("1. Admin Login\n");
    printf("2. User Mode\n");
    printf("3. Exit\n");
    printf("Select Mode:\n");
    scanf("%d",&option);
    getchar();
    switch (option)
    {
    case 1:{
        adminmode();}

        break;
    case 2:
     usermode();
    case 3:
    printf("Thanks \n");
    return 0;
    default:
            break;
    }

    return 0;
}