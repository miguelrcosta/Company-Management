
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#define NIF_MESSAGE "\nWrite the NIF of the company (this must be unique) : "
#define MSG_ERROR_NIF "\nThe NIF that you inserted is already exist in the program, please write another one : "
#define COMPANY_MESSAGE "\nWrite the name of the company : "
#define CATHEGORY_MESSAGE "\nWrite the cathegory of the company : "
#define BRANCHACTIVITY_MESSAGE "\nWrite his respective branch activity : "
#define STREET_MESSAGE "\nWrite the street of the company : "
#define LOCAL_MESSAGE "\nWrite the exact of the company : "
#define POSTAL_CODE_MESSAGE "\nWrite the postal code of the company : "
#define NUMBER_OF_ACTUAL_COMPANIES "\n Number of actual companies : %d "

#define NIF "\nNIF : "
#define COMPANY "\nCompany : "
#define CATHEGORY "\nCathegory : "
#define BRANCHACTIVITITY "\nBranch activity: "

#define INSERT_NIF "\n Insert valid NIF to update the company"
#define NIF_ERROR "\n The NIF that you inserted don't exist"

#ifdef __cplusplus
extern "C" {
#endif
    
    void AmpliateCompanies(Companies* companies);
    void CreateCompany(Companies *companies);
    void printCompany(Company company);
    void List_Companies(Companies *companies);
    
#ifdef __cplusplus
}
#endif

#endif /* ADMINISTRATOR_H */

