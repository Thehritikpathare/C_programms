
int main()
{
      int n,l,f,m,sum;
      printf("Enter 3-Digit Number: ");
      scanf("%d",&n);
      f=n/100;
      m=(n%100)/10;
      l=n%10;
      printf("\nFirst Digit  = %d \nMiddle Digit = %d \nLast Digit   = %d\n",f,m,l);
      sum=l+m+f;
      printf("\nSum of All 3-Digits : %d",sum);
      return 0;
}
