#include<stdio.h> 
main()
{
	printf("Pick a Food item: \n1. Pasta-RS 179\n2. Sandwich-Rs 149\n3. Pizza-Rs 239\n4. Burger-Rs 129\n5. French Fries-Rs 99");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Food item pasta-RS 179.");
			break;
			case 2:
				printf("you picked sandwich-RS 149.");
					break;
				case 3:
					printf("you picked pizza-RS 2399.");
						break;
					case 4:
						printf("you picked burger-RS 129.");
							break;
						case 5:
							printf("you picked french fries-RS 99.");
								break;
							default : printf("INVALID CHOICE");
							
	}
}
