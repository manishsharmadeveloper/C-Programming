#include <stdio.h>
int main() {

    int roll_no;
    printf("enter your roll number : ");
    scanf("%d",&roll_no);

    for (int i = 0; i < 100; i++)
    {
        printf("Your original Roll No : %d\n",roll_no);
    }
    

    return 0;
}