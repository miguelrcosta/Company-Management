#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menus.h"
#include "management.h"

// Function to read an integer

int safeReadInt() {
    int value;
    char input[MAX_INPUT_LENGTH];

    do {
        if (fgets(input, sizeof(input), stdin) == NULL) {
            continue;
        }
        // Verificar se a string contém apenas números
        if (sscanf(input, "%d", &value) == 1) {
            break;
        } else {
            printf(MSG_ERROR_MENU);
        }
    } while (1);

    return value;
}

// Show User's Menu

void UserMenu() {
    int option;

    do {
        printf("\n----------------");
        printf("\n1 - Search company");
        printf("\n2 - Classify company");
        printf("\n3 - Comment company");
        printf("\n4 - Return to main menu");
        printf("\n5 - Quit program");
        printf("\n-----------");

        printf(MSG_OPTION);
        option = safeReadInt();

        switch (option) {
            case 1:
                // Search company
                break;
            case 2:
                // Classify company
                break;
            case 3:
                // Comment company
                break;
            case 4:
                MainMenu();
            case 5:
                exit(0);
            default:
                printf(MSG_ERROR_MENU);
        }

    } while (option != 5);
}

// Show Administrator Menu

void AdministratorMenu(Management *administrator) {
    int option;

    do {
        printf("\n---------------------------------");
        printf("\n1 - Manage Companies");
        printf("\n2 - Manage branchs of activity");
        printf("\n3 - View reports");
        printf("\n4 - Return to main menu");
        printf("\n5 - Quit program");
        printf("\n---------------------------------");

        printf(MSG_OPTION);
        option = safeReadInt();

        switch (option) {
            case 1:
                CreateCompany(&administrator->companies);
                break;
            case 2:
                // Function of Manage branchs of activity
                break;
            case 3:
                // Function of View reports
                break;
            case 4:
                MainMenu();
            case 5:
                exit(0);
            default:
                printf(MSG_ERROR_MENU);
        }

    } while (option != 5);
}

void CompaniesMenu(){
    int role;

    do {
        printf("\n---------------------------------");
        printf("\n1 - View comments");
        printf("\n2 - View research");
        printf("\n3 - Return to main menu");
        printf("\n4 - Quit program");
        printf("\n---------------------------------");

        printf(MSG_ROLE);
        role = safeReadInt();

        switch (role) {
            case 1:
                // view comments
            case 2:
                // view researchs
            case 3:
                MainMenu();
            case 4:
                exit(0);
            default:
                printf(MSG_ERROR_MENU);
        }

    } while (role != 4);
}

// Show Main Menu

void MainMenu() {
    int role;

    do {
        printf("\n---------------------------------");
        printf("\n1 - Administrator");
        printf("\n2 - User");
        printf("\n3 - Companies");
        printf("\n4 - Quit program");
        printf("\n---------------------------------");

        printf(MSG_ROLE);
        role = safeReadInt();

        switch (role) {
            case 1:
                AdministratorMenu();
            case 2:
                UserMenu();
            case 3:
                CompaniesMenu();
            case 4:
                exit(0);
            default:
                printf(MSG_ERROR_MENU);
        }

    } while (role != 4);
}

