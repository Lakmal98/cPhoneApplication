#include <stdio.h>

mainf() {
	switch(mainMenu()) {
    	case 1:
            contactMenu();
            break;
        case 2:
            smsMenu();
            break;
        case 3:
            printf("\n\n\tBye\n\n");
            break;
            return 0;
        default:
            printf("\n\tWrong input\n");
            mainf();
	}
}

int main(){
	
	mainf();

    return 0;

}


//Main menu function Start
int mainMenu(){
	printf("\t******************************************\n\n");
	printf("\t\t\tTele Phone\n\n");
	printf("\t******************************************\n\n");
    printf("1.Contacts\n");
    printf("2.Messages\n");
    printf("3.Exit\n");
    int value=0;
    printf("\nEnter the option: ");
    scanf("%d", &value);
    return value;
}
//Main menu function End


//Sub menu functions start
//contact menu start
void contactMenu(){
    printf("\n1.Contacts\n");
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

void switchCaseContactMenu(){
    char menu;
    printf("Enter key for contacts menu\n");
    scanf(" %c",&menu);
    switch(menu){
        case 'a':
            addContact();
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


void addContact(){
    printf("Add contact \n");
}

