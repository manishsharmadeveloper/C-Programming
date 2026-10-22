#include <stdio.h>
int main() {

    int marks[10] = {50,30,60,99,75,51};
    int loop_size;

    printf("enter how many array print : ");
    scanf("%d",&loop_size);

    for (int i = 0; i < loop_size; i++)
    {
        printf("%d ",marks[i]);
    }

    printf("\nloop ended");


    return 0;
}