#include<stdio.h>
typedef struct _fraction 
{
    int num,den;
}fraction;

fraction input();
fraction smallest(fraction f1,fraction f2,fraction f3);
void output(fraction f1,fraction f2,fraction f3,fraction smallest);

int main()
{
    fraction f1,f2,f3, result;
    f1=input();
    f2=input();
    f3=input();
    result = smallest(f1,f2,f3);
    output(f1,f2,f3,result);
    return 0;
}


fraction input()
{
    fraction f;
    printf("enter num,den: \n ");
    scanf("%d%d",&f.num,&f.den);
    return f;
}

fraction smallest(fraction f1,fraction f2,fraction f3)
{
    int cd=f1.den*f2.den*f3.den;
    int f1num=(f1.num*cd)/f1.den;
    int f2num=(f2.num*cd)/f2.den;
    int f3num=(f3.num*cd)/f3.den;
    if(f1num<f2num && f1num<f3num)
    {
        return f1;
    }
    else if(f2num<f3num)
    {
        return f2;
    }
    else
    {
        return f3;
    }
}
void output(fraction f1,fraction f2,fraction f3,fraction small)
{
    if(f1.num==small.num && f1.den==small.den)
    {
        printf("the smallest fraction among %d/%d , %d/%d and %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,small.num,small.den);
    }
      
    else if(f2.num==small.num && f2.den==small.den)
    {
      printf("the smallest fraction among %d/%d , %d/%d and %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,small.num,small.den);
    }
      
    else
    {
         printf("the smallest fraction among %d/%d , %d/%d and %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,small.num,small.den);
    }
  
}
