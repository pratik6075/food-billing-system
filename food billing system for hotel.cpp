#include<stdio.h>
#include<conio.h>
main()
{
	int n,quantity,amount,price,totalamount=0;
	char addanother;
	
	do
	{
		printf("\n-------------MENU---------------\n");
		printf("1. Pizza     Price=180rs/pcs\n");
		printf("2. Burger    Price=100rs/pcs\n");
		printf("3. Dosa      Price=120rs/pcs\n");
		printf("4. Idli      Price=50rs/pcs\n");
		printf("\nPlease enter your choice... : ");          
		scanf("%d",&n);
		
		switch (n)
		{
			case 1:
				printf("\nyou have selected pizza");
				printf("\nplease select the quantity :");
				scanf("%d",&quantity);						
			    price= 180;
			    break;
			
			case 2:
			    printf("\nyou have selected burger");
				printf("\nplease select the quantity :");
				scanf("%d",&quantity);
				price=100;
				break;
				
			case 3:
			    printf("\nyou have selected dosha");
				printf("\nplease select the qauntity :");
				scanf("%d",&quantity);
				price=120;
				break;
				
			case 4:
			    printf("\nyou have selected idli");
				printf("\nplease select the quantity :");
				scanf("%d",&quantity);
				price=50;
				break;
				
		    default:
                printf("Invalid choice");
                break;		    
		}
		amount= price*quantity;							
		printf("\namount :%d",amount);
		
		totalamount= totalamount + amount;				
		printf("\nTotal amount :%d",totalamount);
		
		printf("\nDo You want place more orders? Y & N:");
		
		addanother= getch();
			
	}while(addanother == 'y' || addanother == 'Y');
}
