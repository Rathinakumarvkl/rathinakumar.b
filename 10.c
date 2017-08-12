#include <stdio.h>
 
int main()
{
    int num,tNum,cnt;
 
    printf("Enter a number: ");
    scanf("%d",&num);
 
    cnt=0;
    tNum=num;
 
    while(tNum>0){
        cnt++;
        tNum/=10;
    }
 
    printf("Total numbers of digits are: %d in number: %d.",cnt,num);
     
    return 0;
}
