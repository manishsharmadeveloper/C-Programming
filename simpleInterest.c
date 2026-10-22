#include <stdio.h>
int main() {
    float number1, rates, si;
    int time;

    printf("enter a principle amount : ");
    scanf("%f",&number1);

    printf("enter a year time : ");
    scanf("%d",&time);

    printf("enter a rates : ");
    scanf("%f",&rates);

    si = number1 * rates * time / 100;
    printf("total amount of %f \n simple interest is %f",number1,si);

    return 0;
}