#include <stdio.h>
int main() {

    int marks;
    printf("enter your marks : ");
    scanf("%d",&marks);

    for (int i = 0; i < 100; i++)
    {
        printf("your marks : %d\n",marks);
    }
    

    return 0;
}