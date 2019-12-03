#include <stdio.h>

int main(){

    mainMenu();
    switchCaseMainMenu();

    return 0;

}


//Main menu function Start
void mainMenu(){
    printf("1.Contacts\n");
    printf("2.Messages\n");
    printf("3.Exit\n");

}
//Main menu function End


//Sub menu functions start
//contact menu start
void contactMenu(){
    printf("1.Contacts\n");
    printf("\ta. Add Contact\n");
    printf("\tb. Update Contact\n");
    printf("\tc. Display Contacts\n");
    printf("\td. Delete Contact\n");
    printf("\te. Search Contact\n");
    printf("\tf. Back\n");
}
//contact menu end

void smsMenu(){
    printf("2.Messages\n");
    printf("\ta. Compose Message\n");
    printf("\tb. Display Message\n");
    printf("\tc. Delete Message\n");
    printf("\td. back\n");
}

//Sub menu functions end

void switchCaseMainMenu(){
    int menu = 0;
    scanf("%d",&menu);
    switch(menu){
        case 1:
            contactMenu();
            switchCaseContactMenu();
            break;
        case 2:
            smsMenu();
            switchCaseSMSMenu();
            break;
        case 3:
            printf("Bye");
            break;
            exit(0);
        default:
            printf("Wrong input");
    }
}

void switchCaseContactMenu(){
    char menu;
    printf("Enter key for contacts menu\n");
    scanf(" %c",&menu);
    switch(menu){
        case 'a':
            printf("this is for add contact\n");
            break;
        case 'b':
            printf("this is for update contact\n");
            break;
        case 'c':
            printf("this is for display contacts\n");
            break;
        case 'd':
            printf("this is for delete contact\n");
            break;
        case 'e':
            printf("this is for search contact\n");
            break;
        case 'f':
            printf("this is for exit\n");
            exit(0);
            break;
        default:
            printf("Wrong input, Try again.\n");
            switchCaseContactMenu();

    }


}

void switchCaseSMSMenu(){
    char menu;
    printf("Enter key for SMS menu\n");
    scanf(" %c",&menu);
    switch(menu){
        case 'a':
            printf("this is for compose sms\n");
            break;
        case 'b':
            printf("this is for display smss\n");
            break;
        case 'c':
            printf("this is for delete sms\n");
            break;
        case 'd':
            printf("this is for exit\n");
            exit(0);
            break;
        default:
            printf("Wrong input, Try again.\n");
            switchCaseContactMenu();

    }
}

