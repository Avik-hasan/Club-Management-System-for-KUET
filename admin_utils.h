#ifndef ADMIN_UTILS_H
#define ADMIN_UTILS_H

typedef struct {
    char name[100];
    char roll[20];
    char department[50];
    char phone[20];
    char email[50];
    char semester[10];
} Member;

typedef struct {
    char name[100];
    char about[200];
    char date[20];
    char venue[100];
} Event;

void clearInputBuffer();
void clearNewline(char *str);
void printMember(Member m);
void printEvent(Event e);
void showMenu();

#endif