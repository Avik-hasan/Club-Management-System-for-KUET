#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "adminWorksapceFunction.h"

void adminworkspace() {
    void (*menu_functions[])() = {
        addMember,
        viewAllMembers,
        removeMember,
        createEvent,
        viewAllEvents,
        cancelEvent
    };

    int choice;

    do {
        system("cls || clear");
        showMenu();
        printf("Enter your choice (0-6): ");
        
        if (scanf("%d", &choice) != 1) {
            choice = -1;
        }
        clearInputBuffer();

        if (choice >= 1 && choice <= 6) {
            menu_functions[choice - 1]();
        } else if (choice == 0) {
            printf("Thank you... Goodbye!\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
        if (choice != 0) {
            printf("\nPress Enter to return to the menu...");
            getchar();
        }
    } while (choice != 0);
}
