#include <stdio.h>  
   
int main() {  
    char characters;
    printf("Enter a Character\n");  
    scanf("%c", &characters);  
       
    if((characters >='a' && characters <='z')||(characters >='A' && characters <='Z')){  
        printf("%c is an Alphabet\n", characters);  
    } else if(characters >= '0' && character <= '9') {
        printf("%c is a Digit \n", characters);  
    } else {
        printf("%c is a Graphical Character\n", characters);  
    }
   
    return 0;  
}
