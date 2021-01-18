/*Finding an integer represents weekend or weekday*/
#include <stdio.h>
int main(void)

{
	int day;
	scanf("%d",&day);

	switch(day)     /*Condition check for weekend or weekday*/
	  {
	  	 case 1:
	  	    printf("Sunday weekend\n");
	  	    break;

	  	 case 2:
	  	    printf("Monday weekday\n");
	  	    break;

	  	 case 3:
	  	    printf("Tuesday weekday\n");
	  	    break;

	  	 case 4:
	  	    printf("Wednesday weekday\n");
	  	    break;

	  	 case 5:
	  	    printf("Thursday weekday\n");
	  	    break;

	  	 case 6:
	  	    printf("Friday weekday\n");
	  	    break;

	  	 case 7:
	  	    printf("Saturday weekend\n");
	  	    break;

	  	 default:
	  	    printf("Invalid input\n");
	  	    break;                     

	  }

	  return 0;
}