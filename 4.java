#include <stdio.h>  
   
int main() {  
    char character;
    printf("Enter a Character\n");  
    scanf("%c", &character);  
       
    if((character >='a' && character <='z')||(character >='A' && character <='Z')){  
        printf("%c is an Alphabet\n", character);  
    } else if(character >= '0' && character <= '9') {
        printf("%c is a Digit \n", character);  
    } else {
        printf("%c is a Graphical Character\n", character);  
    }
   
    return 0;  
}
