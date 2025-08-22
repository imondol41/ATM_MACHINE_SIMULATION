#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent an account
struct Account {
    int accountNumber;
    double balance;
    char password[20];
};

// Function to read account details from a file
struct Account readAccountFromFile(const char *acinfo, int accountNumber) {
    struct Account acc;
    FILE *file = fopen(acinfo, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fread(&acc, sizeof(struct Account), 1, file)) {
        if (acc.accountNumber == accountNumber) {
            fclose(file);
            return acc;
        }
    }

    fclose(file);
    printf("Account not found.\n");
    exit(1);
}

// Function to update account details in the file
void updateAccountToFile(const char *acinfo, struct Account acc) {
    FILE *file = fopen(acinfo, "r+");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    struct Account temp;
    while (fread(&temp, sizeof(struct Account), 1, file)) {
        if (temp.accountNumber == acc.accountNumber) {
            fseek(file, -sizeof(struct Account), SEEK_CUR);
            fwrite(&acc, sizeof(struct Account), 1, file);
            fclose(file);
            return;
        }
    }

    fclose(file);
    printf("Account not found.\n");
    exit(1);
}

int main() {
    char acinfo[] = "accounts.txt";
    int accountNumber;
    char password[20];

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    printf("Enter password: ");
    scanf("%s", password);

    // Read account from file
    struct Account acc = readAccountFromFile(acinfo, accountNumber);

    // Check password
    if (strcmp(acc.password, password) != 0) {
        printf("Incorrect password.\n");
        exit(1);
    }

    int choice;
    printf("1. Check Balance\n2. Change Password\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Account Balance: %.2lf\n", acc.balance);
            break;
        case 2:
            printf("Enter new password: ");
            scanf("%s", acc.password);
            updateAccountToFile(acinfo, acc);
            printf("Password changed successfully.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
