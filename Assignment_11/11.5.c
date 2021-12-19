/**
Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23

*/

#include<stdio.h>
void RangeDisplayRev(int iStart , int iEnd)
{
        int i = 0;
        if(iEnd < iStart)
        {

            printf("invalid");
        }
       for(i = iEnd ; i >= iStart ; i--)
       {
            printf("%d\t",i);
       }
}

int main()
{
         int iValue1 = 0, iValue2 = 0;

         printf("Enter starting point =");
         scanf("%d",&iValue1);

         printf("Enter ending point=");
         scanf("%d",&iValue2);

         RangeDisplayRev(iValue1, iValue2);

         return 0;
}
