#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* we using function to validate password */
int validatePassword(char password[]) {
    int hasDigit = 0;
    int hasUpper = 0;
    int length;

    length = strlen(password);

    /* to check minimum length of password */
    if (length < 8) {
        return 0;
    }

    
    for (int i = 0; password[i] != '\0'; i++) {
        if (isdigit(password[i])) {
            hasDigit = 1;
        }
        if (isupper(password[i])) {
            hasUpper = 1;
        }
    }

   
    if (hasDigit == 1 && hasUpper == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char password[50];

    printf("Enter password: ");
    scanf("%s", password);

    if (validatePassword(password)) {
        printf("Password is STRONG\n");
    } else {
        printf("Password is WEAK\n");
    }

    return 0;
}
