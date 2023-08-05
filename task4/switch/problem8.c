#include <stdio.h>
int main()
{char op;float num1,num2,res;
scanf("%f",&num1);
scanf("%c",&op);
scanf("%f",&num2);
switch(op)
{case '+':res=num1+num2;break;
case '-':res=num1-num2;break;
case '*':res=num1*num2;break;
case '/':
if(num2==0)printf("invalid");
else 
res=num1/num2;break;
}
  printf("%.1f",res);  
}