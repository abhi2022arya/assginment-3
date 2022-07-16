#include<stdio.h>
void alphabet(char);
void div_by_3_or_7(int );
int main()
{
  int i;
   div_by_3_or_7(28);
  //alphabet('M');
  
  //printf("Enter a number");
  //scanf("%d",&i);
  //positive(i);
  //div_by_5(i);
 // is_three_digit(i);
 // greater(6,7);
}

void positive(int i)
{
    if(i<0)
        printf("Nono-positive");
    else
        printf("positive");
}

void div_by_5(int i)
{
    if(i%5==0)
        printf("\ndiv by 5");
    else
        printf("\nnot div by 5");
}

void is_even(int i)
{
    if(i%2==0)
        printf("\nis even");
    else
        printf("\nodd");
}

void is_three_digit(int i)
{
    if(i/100>=0 && i/100<10)
        printf("\nis three digit no");
    else
        printf("\nnot three digit no");
}

void greater(int i,int j)
{
    if(i>j)
        printf("\n%d is grater",i);
    else
    {
        if(i<j)
            printf("\n%d is grater", j);
        else
            printf("\n both are equal");
    }
}

void alphabet(char ch)
{
    if(ch>=97 && ch<=122)
        printf("lowercase");
    else
    {
        if(ch>=65 && ch<=90)
            printf("uppercase");
    }
}

void div_by_3_or_7(int x)
{
    int sum=0,z;
    z=(x/10)-2*(x%10);
    if(z%7==0)
        printf("DIV BY 7");
    
     while(x)
     {
        sum=sum+x%10;
         x=x/10;
     }  
    if(sum%3==0)
        printf("div by 3");
    
               
    
}

























































