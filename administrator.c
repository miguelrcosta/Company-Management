#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "management.h"
#include "administrator.h"

#define INITIAL_TAM 10

// This function serves to increase the number of companies

void AmpliateCompanies(Companies* companies){
    Company *temp = (Company*) realloc(companies->list_companies, sizeof (Company) * (companies->nAllocated * 10));
    if (temp != NULL) {
        companies->nAllocated = INITIAL_TAM;
        companies->list_companies = temp;
    }
}

// This function is managed to create a company 

void CreateCompany(Companies *companies) {
    if(companies->nCompanies == companies->nAllocated) {
        AmpliateCompanies(companies);
    }
    printf(NIF_MESSAGE);
    scanf("%d", &companies->list_companies[companies->nCompanies].nif);
    for (int i = 0; i < companies->nCompanies; i++) {
        if (companies->list_companies[i].nif == companies->list_companies[companies->nCompanies].nif) {
            printf(MSG_ERROR_NIF);
            break;
        }
    }
    printf(COMPANY_MESSAGE);
    scanf("%s", &companies->list_companies[companies->nCompanies].company_name);
    printf(CATHEGORY_MESSAGE);
    scanf("%s", &companies->list_companies[companies->nCompanies].cathegory_name);
    printf(BRANCHACTIVITY_MESSAGE);
    scanf("%s", &companies->list_companies[companies->nCompanies].branch_activity);
    printf(STREET_MESSAGE);
    scanf("%s", &companies->list_companies[companies->nCompanies].street);
    printf(LOCAL_MESSAGE);
    scanf("%s", &companies->list_companies[companies->nCompanies].local);
    printf(POSTAL_CODE_MESSAGE);
    scanf("%d", &companies->list_companies[companies->nCompanies].postal_code); // missing function for correct postal_code 
    companies->list_companies[companies->nCompanies].state = inactive;
    companies->nCompanies++;
    companies->nAllocated++;
    printf(NUMBER_OF_ACTUAL_COMPANIES, companies->nCompanies);
}

// This functions show the information of one company

void printCompany(Company company){
    printf("\nNIF: %d", company.nif);
    printf("\nCompany name: %s", company.company_name);
    printf("\nCathegory: %s", company.cathegory_name);
    printf("\nBranch activity: %s", company.branch_activity);
    printf("\nStreet: %s", company.street);
    printf("\nLocal: %s", company.local);
    printf("\nPostal_code: %d", company.postal_code);
    printf("\nState : %s", company.state);
}

// This function shows all current companies

void List_Companies(Companies *companies){
    for(int i = 0; i < companies->nCompanies; i++){
        printCompany(companies->list_companies[i]);
    }
}

// This function updates a specified company 

void Update_Company(Companies *companies){

    int found_nif;
    printf(INSERT_NIF);
    scanf("%d", &found_nif);
    
    for (int i = 0; i < companies->nCompanies; i++) {
        if (companies->list_companies[i].nif == found_nif) {
            printf(COMPANY_MESSAGE);
            scanf("%s", companies->list_companies[i].company_name);
            printf(CATHEGORY_MESSAGE);
            scanf("%s", &companies->list_companies[companies->nCompanies].cathegory_name);
            printf(BRANCHACTIVITY_MESSAGE);
            scanf("%s", &companies->list_companies[companies->nCompanies].branch_activity);
            printf(STREET_MESSAGE);
            scanf("%s", &companies->list_companies[companies->nCompanies].street);
            printf(LOCAL_MESSAGE);
            scanf("%s", &companies->list_companies[companies->nCompanies].local);
            printf(POSTAL_CODE_MESSAGE);
            scanf("%d", &companies->list_companies[companies->nCompanies].postal_code);
            return;
        }
    }
    printf(NIF_ERROR);

}


