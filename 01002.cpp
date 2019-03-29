#include <stdio.h>
#include <stdlib.h>

int main() 
{
 int a,b,c;
 printf("請輸入你的出生年份(西元)：");
 scanf("%d",&a);
 printf("請輸入你的出生月份：");
 scanf("%d",&b);
 printf("請輸入你的出生日期：");
 scanf("%d",&c);
 printf("你的出生年月日為：%d年%d月%d日\n",a,b,c);
 system("pause");
 return 0; 
}
