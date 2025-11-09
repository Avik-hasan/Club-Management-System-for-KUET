#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "AdiminWorkspace.h"
void adminmode()
{
    int ID;
    int password;
    char Club[50];
    printf("Enter Club name:");
    gets(Club);
    printf("Enter ID:");
    scanf("%d",&ID);
    printf("Enter Password:");
    scanf("%d", &password);
    int i;
    for (i = 0; i < strlen(Club); i++)
    {
        Club[i] = toupper(Club[i]);
    }
    Club[i] = '\0';
   FILE *fp1;
   fp1=fopen("admin_info.txt","r");
   char clubname[20];
   int id,pass,is_found=0;
   while(fscanf(fp1,"%s %d %d",clubname,&id,&pass)!=EOF){
     if(strcmp(Club,clubname)==0&&(id==ID)&&(pass==password)){
       printf("welcome %s admin\n",clubname);
         adminworkspace();
       is_found=1;
       break;
     }
   }
   if(!is_found)
    printf("Invalid \n");
   fclose(fp1);
    getchar();

}


