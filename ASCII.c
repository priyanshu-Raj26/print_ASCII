#include <stdio.h>
#include <string.h>

int main(){
    char name[] = "Sunny";
    int arr[10],i;

    for (i = 0; name[i]!='\0'; i++)
    {
        printf("%c=%d\t",name[i],name[i]);
        arr[i] = name[i];
    }
    printf("\n");
    for (i = 0; i<5; i++)
    {
         printf("%d\t",arr[i]);
    }
    
    return 0;
}