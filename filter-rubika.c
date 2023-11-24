#include <stdio.h>

int main()
{
	printf("==================================>");
	printf("\ncoded: MR-DARK");
	printf("\nchanel Telegram: https://t.me/DARK_MICE");
	printf("\n==================================>");
    printf("\n\n");
    printf("[1] code filter acoount\n");
    printf("[2] code filter chanell\n");
    printf("[3] code filter gruop\n");
    int n;
    printf("Enter number: ");
    scanf("%d" , &n);
    
    if(n == 1)
    {
        printf("\ncode: (1.2.3.4///f//g//d/5.4.3.3.2.2.3.4.5.6.6.7.8.8.6.5.4.3.2.2.3.4.5.6.6.7.5.8.9.5.7.6)");
    }
    if(n == 2)
    {
        printf("\ncode: (3.5.7.8//d//t//u/9.0.9.8.7.6.6.5.4.3.2.2.1.2.4.5.6.7.8.9.8.7.6.5.4.3.2.3.2.2.4.5.6.7)");
    }
    if(n == 3)
    {
        printf("\ncode: (1.2.4.6//d//f//b/6.7.8.7.6.5.4.6.7.8.9.0.9.8.7.6.4.5.6.7.8.5.4.3.4.6.7.9.0.8.7.5.4.3.2.2.4.5.7)");
    }
    return 0;
}