#include <stdio.h>

int main(){
    /*
        The semicolon is necessary ;
        variable names shouldn't be repeated
        c programming is case sensitive

        * %d or %i : int for integer values | example : 3 or 9 or 124 = > int var_int = 4;
        * %f : float for decimal values | example : 2.852.. => float var_float = 24.23424;
        * %lf : double precise version of float | example : 2.852.. => double var = 2342.2342;
        * %c : char : a character | example : a b c d => char c = 'a';
        * %s : string : a chaine of characters | example : hello => char myName[] = "xVelkow";
        * 
        * printf() is a function that displays output
    */
    // 8 5 3
    // 2 5 9
    /*
        temp = -1
        a = 8
        b = 4
        c = 2

        a > b => 8 > 5 => true 

        temp = 8
        a = 4
        b = 8

        8 5 3
        4 9 3

        a = 4
        b = 8
        c = 2

        temp = 8
        b = 2
        c = 8

        4 3 9
        
    */
    // if(a > b) // true or false
    // {
    //     temp = a;
    //     a = b;
    //     b = temp;
    // }
    // printf("a = %d, b = %d, c = %d\n",a,b,c);
    // if(b > c){
    //     temp = b;
    //     b = c;
    //     c = temp;
    // }
    // printf("a = %d, b = %d, c = %d\n",a,b,c);
    // if(a > b) // true or false
    // {
    //     temp = a;
    //     a = b;
    //     b = temp;
    // }
    // printf("a = %d, b = %d, c = %d\n",a,b,c);

    int a;
    printf("Enter the first number : ");
    scanf("%d",&a);
    // printf("Enter the second number : ");
    // scanf("%d",&b);
    // printf("a = %d, b = %d\n",a,b);
    
    // if(a > b){
    //     printf("a is greater than b");
    // }
    // else if(a < b){
    //     printf("a is lowwer than b");

    // }
    // else{
    //     printf("a is equal to b");
    // }

    // switch(a){
    //     case 0:
    //         printf("a equals to 0");
    //         break;
    //     case 887:
    //         printf("a equals to 887");
    //         break;
    //     default :
    //         printf("none of the options");
    //         break;
    // }

    // for | while | do while

    // for => when we know the number of times

    // while => true or false

    // do while => true or false | at least one time

    // i++ => i = i + 0

    // for(int i = -1; i <= 10;i++){
    //     printf("the value of i is : %d\n",i);
    // }

// a = 4
// i = -1
// true
// -1 1 

    int i = -1;

    while(a != i){
        printf("the value of i : %d\n", i);
        i++;
    }
    return -1;
}