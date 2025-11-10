#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void usermode()
{
    char *clubs[20] = {"1.SGIPC", "2.HACK", "3.DREAM", "4.SPECTRUM", "5.TRY", "6.DHRUPODI", "7.KBEC", "8.KCC", "9.ABOHO", "10.KUET RADIO", "11.KDC", "12.KUET FLIM SOCIETY", "13.KUET MATH CLUB", "14.KUET SPORTS CLUB", "15.KUET ROBOTICS CLUB", "16.KUET PHOTOGRAPHY SOCIETY","0.Return home"};
    printf("   >> Welcome to KUET User Page <<\n");
    printf("Explore the clubs and choose one to view details.\n\n");
    int num_of_clubs=sizeof(clubs)/sizeof(clubs[0]);
    for(int i=0;i<num_of_clubs;i++){
        printf("%s\n",clubs[i]);
    }
    int choice;
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice<=16&&choice>1){
        printf("=============================================\n");
        printf("     >> %s Selected <<\n", clubs[choice - 1] );
        printf("=============================================\n");
        printf("Features coming soon...\n");
        printf("You will be able to view upcoming events, members,\n");
        printf("and updates from this club here.\n\n");
        printf("Press Enter to return to User Menu...");
    }
else if(choice==0)
{
    printf("Thanks for visiting\n");
    return;
}
else
printf("Invalid club\n");


}