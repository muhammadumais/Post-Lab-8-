#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
{
	int seat_class, seat_selected;
	int b = 30, e = 100, book = 0;
	int seats[100]={0};
	while(1){
		printf("\n\n\t\t\t*********************************************\n");
		printf("\t\t\tWelcome to Airline Seat Reservation System");
		printf("\n\n\t\t\t*********************************************\n\n");
		printf("\n\n\t\t\t*********************************************\n");
	    printf("\n\t\t\tBusiness Class = 1\n\t\t\tEconomy class = 2\n\t\t\tExit = 0\n\n\n\t\t\tSeats Show = 3\n\n");
		printf("\n\n\t\t\t*********************************************\n\n");
		printf("\t\t\tChoose Class: ");
		scanf("%d",&seat_class);
		system("cls");
		if(seat_class == 0){
			printf("\n\n\n\n\n\t\t\t\tThank You!\n\n\n\n\n");
			exit(1);
		}
		else if(seat_class == 3){
			
			printf("Economy Class:\t\t ");
				for(int i = 1; i <= e; i++){
					
					if(i == 31){
						printf("\nBussiness Class:\t\t");
					}
					if((i-1)%10 == 0){
						printf("\n\t\t\t");
					}
					
				printf("%d , ", seats[i - 1]);
				
				}
				
				printf("\n\nPress enter to Exit");
				getche();
		}
		else if(seat_class == 1){
			while(book == 0){
			    printf("You selected Business class\n\n");
				
				printf("Seats available are: \n");
				
				for(int i = 1; i <= b; i++){
					if(seats[i - 1] == 0){
						printf("%d ", i);
					}
				}
				
				printf("\n\n\t\t\t*********************************************\n\n");
				printf("Enter -1 to cancel booking");
				printf("\tOR\t");
				printf("Select seat: ");
				scanf("%d", &seat_selected);
				
				
				if(seat_selected == -1){
					printf("You Cancelled Booking Process");
					break;
				}
				
				if(seat_selected < 1 || seat_selected > 30){
					printf("Wrong Seat!\nPlease Book Again");
					printf("\n\n\t\t\t*********************************************\n\n");
					
				}
				
				else if(seats[seat_selected - 1] == 0){
					printf("Succesfully Booked a Bussiness Class Ticket\n");
					printf("Ticket No. B%d\n", seat_selected);
					seats[seat_selected - 1] = 1;
					book = 1;
				}
				else{
					printf("Seat Already Booked!\nBook Again");
					printf("\n\n\t\t\t*********************************************\n\n");
				}
			}
		}

