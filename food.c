#include<stdio.h>
#include<conio.h>
void main()
{
    int food=1;
    printf("Please choose a food \n");
    printf("1:pizza\t\t2:pasta\t\t3:french fries:\t\t4:burger:\t\t5:sandwich:\n");
    scanf("%d",&food);
    switch(food)
    {
        case 1:
        printf("you choose Food item-pizza , Rs.239\n");
        break;
        case 2:
        printf("you choose Food item-pasta , Rs.179\n");
        break;
        case 3:
        printf("you choose Food item-french fries , Rs.99\n");
        break;
        case 4:
        printf("you choose Food item-burger , Rs.129\n");
        break;
        case 5:
        printf("you have choose Food item-sandwich , Rs.149\n");
        break;
        default:
            printf("you did not choose any food\n");
    }
    getch();
}
