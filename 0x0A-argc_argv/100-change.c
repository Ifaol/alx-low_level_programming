#include "main.h"
/**
 *cent_return-No of min-cent return identifer function
 *@n: int input
 *@div: int input
 *
 *Return: no of min-cent returned
 */
int cent_return(int n, int div)
{
int rem, div_new;
if (n == 1)
{
div_new = div + 1;
return (div_new);
}
if ((n >= 2) && (n < 5))
{
rem = n % 2;
div_new = div + n / 2;
if (rem == 0)
{
return (div_new);
}
return (cent_return(rem, div_new));
}
if ((n >= 5) && (n < 10))
{
rem = n % 5;
div_new = div + n / 5;
if (rem == 0)
{
return (div_new);
}
return (cent_return(rem, div_new));
}
if ((n >= 10) && (n < 25))
{
rem = n % 10;
div_new = div + n / 10;
if (rem == 0)
{
return (div_new);
}
return (cent_return(rem, div_new));
}
return (0);
}
/**
 *cent_ret25-No of min-cent return identifer for n >= 25 function
 *@n: int input
 *@div: int input
 *
 *Return: no of min-cent returned
 */
int cent_ret25(int n, int div)
{
int rem, div_new;
rem = n % 25;
div_new = div + n / 25;
if (rem == 0)
{
return (div_new);
}
return (cent_return(rem, div_new));
}
/**
 *main-A no of change printer function
 *@argc: no of arguments entered
 *@argv: string input arguments
 *
 *Return: no of change
 */
int main(int argc, char *argv[])
{
int no_of_change, price;
if (argc != 2)
{
printf("Error\n");
return (1);
}
price = atoi(argv[1]);
if (price <= 0)
{
printf("0\n");
}
else if (price > 0 && price < 25)
{
no_of_change = cent_return(price, 0);
printf("%d\n", no_of_change);
}
else
{
no_of_change = cent_ret25(price, 0);
printf("%d\n", no_of_change);
}
return (0);
}
