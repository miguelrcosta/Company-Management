#define MAX_INPUT_LENGTH 100
#define MSG_OPTION "\n Write an option : "
#define MSG_ERROR_MENU "\n Invalid option, please select a correct option"
#define MSG_ROLE "\n Write a role : "

#ifndef INPUT_H
#define INPUT_H

#include <stdio.h>  // Include this line to make sure that standard libraries are included

#ifdef __cplusplus
extern "C" {
#endif

    int safeReadInt();
    void UserMenu();
    void AdministratorMenu(Management *administrator);
    void CompaniesMenu();
    void MainMenu();
    
#ifdef __cplusplus
}
#endif

#endif /* INPUT_H */
