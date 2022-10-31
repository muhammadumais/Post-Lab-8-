		else if(seat_class == 2){
			while(book == 0){
			    printf("You selected Economy class\n\n");
				
				printf("Seats available are: \n");
				
				for(int i = 31; i <= e; i++){
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
				
				if(seat_selected < 31 || seat_selected > 100){
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
		_sleep(1500);
		system("cls");
		book = 0;
	}
	return 0;
}
