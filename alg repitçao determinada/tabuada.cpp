#include<stdio.h>
main()
{
int i ,num;
for (num=1; num <=10;num++)
{
 printf("\n tabuada %d,num ");
for(i=0; i<=10;i++)
{
if(num==7)break;
printf("\n %d*%d=%d",i,num,num*i);	
}
}


}
