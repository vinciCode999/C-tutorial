#include <stdio.h>
#include <string.h>

int main() {
    char conti;
    char name[25];

    printf("Hey Shadreck! Let's play the surname guessing game.\n");

    do {
        printf("\nEnter first name and I will guess the last name: ");
        scanf("%24s", name);

        // Use strcmp for string comparison
        if (strcmp(name, "mphatso") == 0) {
            printf("The surname of Mphatso is Nkhoma.\n");
        } else if (strcmp(name, "chance") == 0) {
            printf("The surname of Chance is Mwalwanda.\n");
        } else if (strcmp(name, "shadreck") == 0) {
            printf("The surname of Shadreck is Mwabutwa.\n");
        } else if (strcmp(name, "ndaona") == 0) {
            printf("The surname of Ndaona is... oops, I forgot, but her other name is Juliet.\n");
        } else if (strcmp(name, "ndagha") == 0) {
            printf("The surname of Ndagha is Mwalukomo.\n");
        } else if (strcmp(name, "vincent") == 0) {
            printf("Vincent does not have a surname haha.\n");
        } else if (strcmp(name, "fyabupi") == 0) {
            printf("The surname of Fyabupi is Mwabutwa.\n");
        } else {
            printf("Sorry, enter a name of a person living in this house.\n");
        }

        // Prompt to play again
        printf("Do you want to play again? Enter y for yes and n for no: ");
        // To avoid reading leftover newline, add a space before %c
        //  Always use " %c" instead of "%c" when reading a character after any other scanf call (especially string or number input).
        scanf(" %c", &conti);

    } while (conti == 'y' || conti == 'Y');

    printf("\nThank you Shadreck for playing our game. Bye!\n");

    return 0;
}
