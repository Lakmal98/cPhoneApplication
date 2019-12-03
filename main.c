#include <stdio.h>
int menu = 0;
int main(){

    mainMenu();
    scanf("%d",&menu);
    switch(menu){
        case 1:
            contactMenu();
            break;
        case 2:
            smsMenu();
            break;
        case 3:
            printf("Bye");
            break;
            exit(0);
        default:
            printf("Wrong input");
    }

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
}
//contact menu end

void smsMenu(){
    printf("2.Messages\n");
    printf("\ta. Compose Message\n");
    printf("\tb. Display Message\n");
    printf("\tc. Delete Message\n");
}

//Sub menu functions end



