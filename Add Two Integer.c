
//  If my Tutorial is good then Like,Share,Flow & Subscribe. My Chanel/Site name is ( Root Technician ).

/*  //  Algorithm : Sum of Two Integer Number .
........................................................................

            Step-1: Start .
            Step-2: Variable Initialize ( Like Number1 , Number2 & sum ).
            Step-3: Input Two Number .
            Step-4: Processing are two number. (Number1 + Number2 = Sum ).
            Step-5: Output.
            Step-6: End.

*/

//  Using User input from Keyboard .
//.................................................

#include<stdio.h>
#include<conio.h>
int main(){     //main function start in here and single line comment Symbol is → ( // ) .
    int Number1, Number2 , Sum=0;   //  Variable Declare .
    printf(" \n \t Enter Your 1st Number: \t ");
    scanf("%d",&Number1);   //  Get input .
    printf("\n \t Enter your 2nd Number: \t ");
    scanf("%d",&Number2);
    Sum=Number1+Number2;    //  Processing .
    printf(" \n \t The Summation is :\t %d \n ",Sum);   //  Output .
    return Sum;     //  Return type .
}
/*

//  Without Input From Keyboard .
//...............................................
#include<stdio.h>
#include<conio.h>
int main(){     //main function start in here and single line comment in here .
    int Number1 =10, Number2 = 90, Sum=0;
    Sum=Number1+Number2;
    printf(" \n \t The Summation is :\t %d \n ",Sum);
    return Sum;
}

*/
