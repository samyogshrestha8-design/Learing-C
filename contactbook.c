#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int number;
} information;

void add_contact(information *info);
void read_contact();

int main() {
    char user_input ='\0';
    while(user_input!='3'){
    printf("_________________\n");
    printf("1)Add contact\n");
    printf("2View contact\n");
    printf("3)to quit\n");
    printf("_________________\n");
    printf("Enter ur choic:");
    scanf(" %c",&user_input);
    getchar();
    if(user_input=='1'){

    information contact = {0};

    printf("Enter name: \n");
    fgets(contact.name, sizeof(contact.name), stdin);

    contact.name[strcspn(contact.name, "\n")] = '\0';

    printf("Enter number:");
    scanf("%d", &contact.number);

    add_contact(&contact);

    }
    else if (user_input == '2')
    {
        read_contact();
    }
    
}

    return 0;
}

void add_contact(information *info) {

    FILE *pfile = fopen("D:\\Learning_C\\contact_book.txt", "a");

    if (pfile == NULL) {
        printf("Error opening file\n");
        return;
    }

    printf("The saved Name: %s\n", info->name);
    printf("The saved Number: %d\n", info->number);

    fprintf(pfile, "Name: %s\n", info->name);
    fprintf(pfile, "Number: %d\n", info->number);
    fprintf(pfile, "----------------\n");

    fclose(pfile);
}
void read_contact(){
    FILE *pfile =fopen("D:\\Learning_C\\contact_book.txt","r");
    if (pfile == NULL){
        printf("ERROR WHILE READING");
        return;
    }
    char buffer[1024]={0};
    while (fgets(buffer,sizeof(buffer),pfile)!=NULL){
        printf("%s",buffer);
    }

}
