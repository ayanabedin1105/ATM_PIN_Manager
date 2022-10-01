/*This is a program that depicts the working of an ATM machine with four options to choose from the menu.
The user will able to enter PIN, change PIN and also check the no.of times PIN was entered correctly or incorrectly.

Author name:- Ayan Abedin (D19125792)
Date of Completion:- 14/11/2020
*/

#include<stdio.h>
int main()
{
	int option, pin = 1234;
	int new_pin; int counter = 0; int uncounter = 0;

	
	
	//do-while loop to loop the program until user wants to terminate.
	do{
		printf("\n\n**************Welcome to ATM**************\n");
		printf("1. Enter PIN.\n");
		printf("2. Change PIN.\n");
		printf("3. Number of times PIN was entered.\n");
		printf("4. EXIT Program.\n");
		printf(".............................................");
		
		printf("\nEnter your option: ");//Lettig user choose option from above menu
		scanf("%d", &option);
		
		//Using switch case for the different option from the menu above
		switch(option)
		{
			case 1:
				{
					//while loop to enter the pin again and again
					//while(pin!=1234)
					//{
						//Allow user to enter the pin
						printf("\nEnter your PIN Number: ");
						scanf("%d", &pin);
						
						
						if(pin != 1234)// as default pin is 1234
						{
							printf("\tWrong PIN. Enter a valid PIN.\n");
							uncounter = uncounter + 1;
							
						}//end if
						else
						{
							printf("\n\tEntered PIN is correct.");
							counter = counter + 1;
						}//end if-else
					//}//end while
					break;
				}//end case 1
			case 2:
				{
					
					//ask user for original PIN
					printf("Enter your existig PIN: ");
					scanf("%d", &pin);
					
					//if original pin != 1234 the user will not able to change PIN
					if(pin == 1234)
					{
						//ask user for their new PIN
					printf("Enter New PIN: ");
					scanf("%d", &new_pin);
					
					
						//checking if new PIN is four digit number
						if((new_pin>999) && (new_pin<10000))
						{
							//storing new pin in store and checking if the new pin is same
							int store;
							//ask user to enter new pin
							printf("Enter your new PIN again: ");
							scanf("%d", &store);
								//checking if store is same as new pin
								if(store == new_pin)
								{
									//printing new PIN
									printf("\n\tYour new PIN is %d", new_pin);
									
									//setting new PIN as current PIN
									pin = new_pin;
									counter = counter + 1;//counter for checking the no of times PIN was correct.
							
								}
								else
								{
									//printing PIN is invalid
									printf("\tWrong PIN. New PIN doesn't matches. Try again.");
									uncounter = uncounter + 1;//uncounter for checking the no of times PIN was incorrect.
								
									
								}//end if & else
							
						}//end if
					}//end if for pin 1234
					else
					{
						printf("\n\tINVALID PIN. Please enter the valid Original PIN.");
						uncounter = uncounter + 1;
					}//end else
					
					
						break;
					
				}//end case 2
			case 3:
				{
				printf("\n\tThe number of times PIN was entered correctly: %d\n", counter);
				
				printf("\n\tThe number of times PIN was entered incorretly: %d", uncounter);	
				break;
				}//end case 3
			case 4:
				{
					//Exiting the Program
					printf("\n THANK YOU for using ATM. Exiting.....");
					break;
				}
			default:
				{
					printf("\n INVALID CHOICE");
				}//end default
		}//end switch case
		
		
		
	}while(option != 4 );//end do-while
	//Program terminates when user enters 4.
	printf("\n\n\n Thank You for using ATM Service.");

	
	return 0;
}
