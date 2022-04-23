#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime( int );

int main()
{
    int value = 0;
    
    printf("Please, Type A Number To Be Tested Whether Or Not It Is Prime : ");
    scanf("%d", &value);

    if( isPrime ( value ) == true )
    {
        printf("Your Number Is Prime");
    }
    else
    {
        printf("Your Number Is Not Prime");
    }
    return 0;
}

bool isPrime( int value )
{
    int i = 0;

    for ( i = 2 ; i <= sqrt(value) ; i++ )  //	I used just unique dividers not composite dividers to divide a number,
	{									    // 	and avoided the repetation between the factors of the number thanks to the function sqrt()
        if( value % i == 0 )    // If the number value is not prime, then the function will return false
        {
            return false;
        }
    }
    return true;
}
