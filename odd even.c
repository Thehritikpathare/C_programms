

int main()

{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("%d  is Even.", number);
    else
        printf("%d is Odd.", number);
    
    return 0;
}
