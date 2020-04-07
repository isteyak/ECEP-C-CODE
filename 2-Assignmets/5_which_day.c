/*
Title		:WAP to find which day of the year
Author		:Isteyak
Organisation	:Emertxe
Algoritham 	:pf(Enter the number between 1 to 365)
		 read the given number 
		 pf(Enter the first day of the week
		 read the given first day value
		 //logic
          	    x = n % 8 + first_day;
		    and pass the x value to any switch chase
		    switch (x)
		    {
			case 1: sunday
			case 2: monday
			case 3: tuesday
			case 4: wednesday
			case 5: thursday
			case 6: friday
			case 7: saturday
		    }
*/



//inclusion of libarary
#include <stdio.h>

//protypes of calling funtion
int week_days(int, int);
int switch_day(int, int);

int main()
{   
    char choice;
do
{
    
    //declaration of variable
    int num, first_day;
    
    //promt the user to enter the number
    printf("enter the number n : ");

    //read the given num
    scanf("%d", &num);
    
    //logic to check whether the given number value is in beetween range or not
    if (num < 1 || num > 365)
    {
	printf("invalid input\n");
	return 0;
    }

   else 
    //promt the user to choose first day of the week
    printf("choose first_day \n 1. sunday \n 2. monday \n 3. tuesday \n 4. wednesday \n 5. thursday \n 6. friday \n 7. sturday \n");
    printf("enter the first_day : ");
    //read the given first day value
    scanf("%d", &first_day);
    //calling of the funtion of week days
    week_days(num, first_day);

    printf("enter the choice to repeat : [y/Y] : not repeat [n/N] : ");
    scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');
}

//definition of the week_days funtion
int week_days(int num, int first_day)
{
    int x;
    if (num < 8)
    {   
	//logic
	x = first_day + num;
	switch_day(x, num);
	return 1;
    }
    else
    {
         //logic
         x = num % 8 + first_day;
	 switch_day(x, num);
	 return 0;
    }

}
//definition of switch days calling funtion
int switch_day(int x, int num)
{   
    //logic
    switch (x)
    {
	case 1:
		printf("the %dth day is sunday \n", num);
		break;
	case 2:
		printf("the %dth day is monday \n", num);
		break;
	case 3:
		printf("the %dth day is tuesday \n", num);
		break;
	case 4:
		printf("the %dth day is wednesday \n", num);
		break;
	case 5:
		printf("the %dth day is thursday \n", num);
		break;
	case 6:
		printf("the %dth day is friday \n", num);
		break;
	case 7:
		printf("the %dth day is saturday \n", num);
		break;
	default:
	       printf("INVALID INPUT\n");
    }

}
