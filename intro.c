#include <stdio.h>
#include <ctype.h>
int main ()
{
    //WAP to count total no. of notes in amount
    int a;
    printf("Enter the total amount you have\n");
    scanf("%d",&a);
    printf("2000 Notes--> %d\n",a/2000);
    int d=a%2000;
    printf("500 Notes--> %d\n",d/500);
    d=d%500;
    printf("200 Notes--> %d\n",d/200);
    d=d%200;
    printf("100 Notes--> %d\n",d/100);
    d=d%100;
    printf("50 Notes--> %d\n",d/50);
    d=d%50;
    printf("Pending money after the notes is %d",d);

    return 0;
}