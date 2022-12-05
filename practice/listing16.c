/* Functions with no arguments */
#include <stdio.h>
#include <time.h>

void GetDateTime(void); /* GetDateTime() definition */

int main()
{
	printf("Before the GetDateTime() function is called.\n");
	GetDateTime();
	printf("After the GetDateTime() function is called.\n");
	return 0;
}

/* GetDateTime() definintion */
void GetDateTime(void)
{
	time_t now; /* fucntion that tells the current date and time */
	printf("Within GetDateTime().\n");
	time(&now);
	printf("Current date and time is: %s\n", asctime(localtime(&now)));
}

