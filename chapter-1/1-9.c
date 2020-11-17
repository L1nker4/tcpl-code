#include<stdio.h>


int main(int argc, char const *argv[])
{
    int c;
    int count = 0;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            count++;
            if(count == 1){
                putchar(' ');
            }
        }else{
            count = 0;
            putchar(c);
        }
        
        
    }
    return 0;
}
