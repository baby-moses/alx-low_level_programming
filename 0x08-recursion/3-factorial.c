#include "main.h"



/**

 * factorial - function that prints fuctorials of the number

 * @n: This is given

 * Return: 0 if successul exit

 */



int factorial(int n)

{

if (n == 0)

{

return (1);

}

else if (n < 0)

{

return (-1);

}

return (n * factorial(n - 1));

}
