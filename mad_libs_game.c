#include <stdio.h>
#include <string.h>

int main()
{
    char noun[50];
    char verb[50];
    char adjective1[50];
    char adjective2[50];
    char adjective3[50];

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);

    printf("Enter a verb (ing): ");
    fgets(verb, sizeof(verb), stdin);

    printf("Enter another adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);

    printf("Enter another adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);

    printf("One day, a %s", noun);
    printf("was feeling very %s", adjective1);
    printf("while %s", verb);
    printf("through a %s", adjective2);
    printf("forest. Suddenly, everything became %s", adjective3);

    return 0;
}