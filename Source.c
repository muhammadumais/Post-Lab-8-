#include <stdio.h>
int array[100] = { 0 };
void print();
void book();
void menu();
void cancel();
int main()
{ 
    printf("\n\t\t\tAIRLINE RESERVATION SYSTEM\n");
    printf("****************************************************************************\n\n");
    menu();
}

void menu() {
    unsigned short int choice;
    printf("\n  Press  1 to  BOOK    a    ticket \n");
    printf("  Press  2 to  PRINT  seats  chart \n");
    printf("  Press  3 to  CANCEL  your ticket  \n");
    printf("  Press  4 to  EXIT   the  program \n");    ;
    scanf_s("%hu", &choice);
    if (choice == 1)
    {
        book();
    }
    else if (choice == 2)
    {
        print();
    }
    else if (choice == 3) {
        cancel();
    }
    else if (choice == 4)
    {
        printf("\n\tSee you soon . ALLAH HAFIZ \n");
    }
    else
    {
        printf("Invalid Input. Try Again !\n");
        menu();
    }
}
void book()
{
    unsigned short int type, seatNo,flag=0;

    printf("\nSelect type of class ( 1 or 2 ) : ");
    scanf_s("%hu", &type);
    if (type == 1)
    {

        printf("\n  Select seat no (1-30) :");
        scanf_s("%hu", &seatNo);
        if (seatNo > 0 && seatNo <= 30)
        {
            if (array[seatNo] == 0)
            {
                array[seatNo] = 1;
                flag = 0;
            }
            else
            {
                printf("\n\tSeat is already booked \n\n");
                flag = -1;
            }
            if (flag != -1) {
                printf("------------------------------------");
                printf("\n|\t*** BOARDING PASS *** \t   |\n|\t\t\t\t   |");
                printf("\n|\tBUSINESS CLASS\t\t   |\n|\tSEAT no is  %d \t\t   |\n", seatNo);
                printf("------------------------------------\n\n");
            }
        }
        else
            printf("\n\tInvaid input . Try Again !\n");
    }
    else if (type == 2)
    {

        printf("\nSelect seat no (31-100) :");
        scanf_s("%hu", &seatNo);
        if (seatNo > 30 && seatNo <= 100)
        {
            if (array[seatNo] == 0)
            {
                array[seatNo] = 1;
                flag = 0;
            }
            else
            {
                printf("\n\t Seat is already booked \n\n");
                flag = -1;
            }
            if (flag != -1) {
                printf("-----------------------------------------");
                printf("\n|\t  BOARDING PASS  \t\t|\n|\t\t\t\t\t|");
                printf("\n|  You have selected ECONOMY CLASS\t|\n|  Your SEAT no is  %d \t\t\t|\n", seatNo);
                printf("-----------------------------------------\n\n");
            }
        }
        else
            printf("\nInvaid input . Try Again !\n");
    }
    else
        printf("\nInvaid input . Try Again !\n");
    menu();
}
void cancel() {
    unsigned short int seatNo;
    printf("\nEnter the seat no to cancel \n");
    scanf_s("%hu",&seatNo);
    if (array[seatNo] == 1) {
        array[seatNo] = 0;
        printf("Your Seat is cancelled \n");
    }
    else
        printf("It is NOT booked \n");

    menu();
}
void print()
{
    printf("\n\tSEATS STATUS. AVAILABLE(0) , BOOKED(1) \n----------------------------------------------------\n");
    for (int i = 0; i < 100; i++)
    {
        if (i % 10 == 0)
            printf("\n\t\t");

        else
            printf("%d ", array[i]);
    }
    printf("\n\n");
    menu();
}