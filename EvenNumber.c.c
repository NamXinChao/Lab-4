#include <stdio.h>
#include <conio.h>
int main()
{
	int i ,n;
	printf ("nhap so nguyen duong n: \n");
	scanf ("%i", &n);
	printf("cac so nguyen chan nho hon hoac bang %i la \n",n);
	for (i=0; i<=n;i++){
		if(i%2==0){
			printf("%i\n",i);
		}
	}
	getch();
	return 0;
}
