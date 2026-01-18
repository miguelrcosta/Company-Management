#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "management.h"
#define INITIAL_TAM 10

Companies initializeCompanies() {
    Companies companies = {};
    companies.list_companies = (Company*) malloc(INITIAL_TAM * sizeof (Company));
    companies.nCompanies = 0;
    companies.nAllocated = 0;
    return companies;
}

void initializeManagement(Management* management) {
    management->companies = initializeCompanies();
}
