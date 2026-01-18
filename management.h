#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#define MAX_LENGTH_USERNAME 25
#define MAX_LENGTH_EMAIL 40
#define MAX_LENGTH_TITLE 15
#define MAX_LENGTH_TEXT 100
#define MAX_LENGTH_NAME 50
#define MAX_LENGTH_CATHEGORY 20
#define MAX_LENGTH_BRANCHACTIVITY 15
#define MAX_LENGTH_STREET 25
#define MAX_LENGTH_LOCAL 20
#define MAX_LENGTH_FIELD 20
#define MAX_LENGTH_KEYWORD 15
#define MAX_LENGTH_NIF 9
#define MAX_LENGTH_POSTALCODE 8

#ifdef __cplusplus
extern "C" {
#endif

// Structure to represent a classification
    
    typedef struct {
        int rating; // Nota de classificação
        char username[MAX_LENGTH_USERNAME];
        char email[MAX_LENGTH_EMAIL];
    } Rating;
    
    // Structure to represent a commentary 
    
     typedef struct {
        char title[MAX_LENGTH_TITLE];
        char text[MAX_LENGTH_TEXT];
        char username[MAX_LENGTH_NAME];
        char email[MAX_LENGTH_EMAIL];
    } Comment;
    
    // Structure to represent an activity
    
    typedef struct {
        int code;
        char name[MAX_LENGTH_NAME];
       // enum { active , inactive } state;
    } Activity;
    
    // Structure to search a company
    
    typedef struct {
        char field[MAX_LENGTH_FIELD];
        char keyword[MAX_LENGTH_KEYWORD];
    } Search ;
    
    // Structure to represent a company

    typedef struct {
        int nif;
        char company_name[MAX_LENGTH_NAME];
        char cathegory_name[MAX_LENGTH_CATHEGORY];
        char branch_activity[MAX_LENGTH_BRANCHACTIVITY];
        char street[MAX_LENGTH_STREET];
        char local[MAX_LENGTH_LOCAL];
        int postal_code;
        int nRating;
        Rating *classification;
        enum {inactive , active} state;
        Comment *comments;
        Activity activities;  // Added to structure Acitivity
        Search researchs;    // Added to structure Search
    } Company;
    
    // Structure to represent a number of companies
    
    typedef struct {
        int nCompanies;  // Actual number of companies - counter
        int nAllocated;  // Allocated number of companies
        Company *list_companies;  // Companies array
    } Companies;
    
    typedef struct {
        Activity activies;
        Search researchs;
        Company companies;
    } Management ;


#ifdef __cplusplus
}
#endif

#endif /* MANAGEMENT_H */

