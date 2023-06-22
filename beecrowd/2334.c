#include <stdio.h>

int main()
{
    
    unsigned long long int a,result;
    a = 10000000000000000000ULL;
    
    while(a != -1){
    scanf("%llu",&a);
    if(a != 0 && a != -1){
        result = a - 1;
        printf("%llu\n",result);
    }else if (a == 0)
    puts("0") ;
    }
    return 0;
}