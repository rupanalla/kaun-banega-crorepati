#include<stdio.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main()
{
    int o,an[10],i,a=0,b=0,c=0,d=0;
    printf("Select one 1.dial your friend 2.50-50 3.odiance pole");
    scanf("%d",&o);
    switch (o)
    {
        case 1:
            printf("\nDial your friend");
            printf("\nu have 30 sec time to call ur friend");
            delay(5000);
            printf("your time is up\n");
            break;
        case 2:
            printf("50-50");
            break;
        case 3:
            printf("\nodiance pole");
            printf("\n audionce enter ur option");
            for(i=0;i<10;i++)
            {
                scanf("%d",&an[i]);
                switch (an[i])
                {
                    case 1:
                        a=a+1;
                        break;
                    case 2:
                        b=b+1;
                        break;
                    case 3:
                        c=c+1;
                        break;
                    case 4:
                        d=d+1;
                        break;
                }
            }
            printf("1:%d\t\t 2:%d\t\t 3:%d\t\t4:%d\t\t",a,b,c,d);
            break;
    }
}
