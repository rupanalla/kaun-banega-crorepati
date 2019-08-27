#include<stdio.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main()
{
    char c[1000];
    int i=0,a[10],line=10;
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    FILE *myfile,*f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8,*f9,*f10;
    char name[20];
    myfile = fopen("two.txt","r");
    while(line--){
    fscanf(myfile,"%d",&a[i]);
    i++;
    }
    printf("\n\n\n\n\n\n\n \t\t\t***  Welcome  to***");
    printf("\n \t\t\tWho will be a Millionaire");
    delay(1000);
    system("cls");
    printf("\n\n \n\n\t\t\tHello your name please\n");
    scanf("%s",&name);
    system("cls");
        f1 = fopen("1.txt", "r");
        fscanf(f1,"%[^EOF]", c);
        printf("%s", c);
        fclose(f1);
        scanf("%d",&a1);
        system("cls");
        if(a1==a[0]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won %d\n\n\n\n\n\n\n\n\n\n\n\n\n",1000);
            delay(2000);
            system("cls");
        }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
        system("cls");
        f2 = fopen("2.txt", "r");
        fscanf(f2,"%[^EOF]", c);
        printf("%s", c);
        fclose(f2);
        scanf("%d",&a2);
        system("cls");
        if(a2==a[1]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won 5000\n\n\n\n\n\n\n\n\n\n\n\n\n");
            delay(2000);
            system("cls");
        }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
        f3= fopen("3.txt", "r");
        fscanf(f3,"%[^EOF]", c);
        printf("%s", c);
        fclose(f3);
        scanf("%d",&a3);
        system("cls");
        if(a3==a[2]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won 10,000\n\n\n\n\n\n\n\n\n\n\n\n\n");
            delay(2000);
            system("cls");
        }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
        f4 = fopen("4.txt", "r");
        fscanf(f4,"%[^EOF]", c);
        printf("%s", c);
        fclose(f4);
        scanf("%d",&a4);
        system("cls");
        if(a4==a[3]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won 25,000\n\n\n\n\n\n\n\n\n\n\n\n\n");
            delay(2000);
            system("cls");
            }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
        f5 = fopen("5.txt", "r");
        fscanf(f5,"%[^EOF]", c);
        printf("%s", c);
        fclose(f5);
        scanf("%d",&a5);
        system("cls");
        if(a5==a[4]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won 50,000\n\n\n\n\n\n\n\n\n\n\n\n\n");
            delay(2000);
            system("cls");
        }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
        f6= fopen("6.txt", "r");
        fscanf(f6,"%[^EOF]", c);
        printf("%s", c);
        fclose(f6);
        scanf("%d",&a6);
        system("cls");
        if(a6==a[5]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won 1,00,000\n\n\n\n\n\n\n\n\n\n\n\n\n");
            delay(2000);
            system("cls");
        }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
        f7= fopen("7.txt", "r");
        fscanf(f7,"%[^EOF]", c);
        printf("%s", c);
        fclose(f7);
        scanf("%d",&a7);
        system("cls");
        if(a7==a[6]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won 10,00,000\n\n\n\n\n\n\n\n\n\n\n\n\n");
            delay(2000);
            system("cls");
        }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
        f8= fopen("8.txt", "r");
        fscanf(f8,"%[^EOF]", c);
        printf("%s", c);
        fclose(f8);
        scanf("%d",&a8);
        system("cls");
        if(a8==a[7]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won 25,00,000\n\n\n\n\n\n\n\n\n\n\n\n\n");
            delay(2000);
            system("cls");
        }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
        f9= fopen("9.txt", "r");
        fscanf(f9,"%[^EOF]", c);
        printf("%s", c);
        fclose(f9);
        scanf("%d",&a9);
        system("cls");
        if(a9==a[8]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won 50,00,000\n\n\n\n\n\n\n\n\n\n\n\n\n");
            delay(2000);
            system("cls");
        }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
        f10= fopen("10.txt", "r");
        fscanf(f10,"%[^EOF]", c);
        printf("%s", c);
        fclose(f10);
        scanf("%d",&a10);
        system("cls");
        if(a10=a[9]){
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t***Congratulation***\n\n\n\t\t you won 1,00,00,000\n\n\n\n\n\n\n\n\n\n\n\n\n");
            delay(2000);
            system("cls");
            printf("\n\t\t***Completed***");
            printf("\n\n\n\t\t***congratulations %s***\n\n \t\tall the best for your future \n\n\n\n\n\n",name);
        }
        else{
            printf("\n\t\tYou lost");
            return 0;
        }
    return 0;
}
