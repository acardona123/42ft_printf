#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int	n;

	if (1)
	{
		ft_printf("=====Le test=====\n\n");
		ft_printf("char :\n\tVoulu:\t|a,{null masque}|\n\tObtenu:\t|%c,%c|\n\n", 'a', 0);
		ft_printf("str :\n\tVoulu:\t|Chaine de characteres.;(null)|\n\tObtenu:\t|%s ;%s|\n\n", "Chaine de characteres.", NULL);
		ft_printf("Int :\n\tVoulu:\t|-123456789|\n\tObtenu:\t|%d|\n\n", -123456789);
		ft_printf("Unsigned int :\n\tVoulu:\t|123456789|\n\tObtenu:\t|%u|\n\n", 123456789);
		ft_printf("Percent :\n\tVoulu:\t|%c|\n\tObtenu:\t|%%|\n\n", '%');
		ft_printf("Hexa minuscule :\n\tVoulu:\t|ffe82863|\n\tObtenu:\t|%x|\n\n", -1562525);
		ft_printf("Hexa majuscule :\n\tVoulu:\t|FFE82863|\n\tObtenu:\t|%X|\n\n", -1562525);
		ft_printf("Pointeur :\n\tVoulu:\t|(nil);{???}");
		ft_printf("\n\tObtenu:\t|%p; %p|\n\n", NULL, &main);
		ft_printf("%s av%cc multiples elements %d differents types.", "TEST", 'E', 2);

	}
	if (0)
	{
		n = 36;
		ft_printf("123%#lx, \n%p", (long unsigned int)&n, &n);
	}
	if (0)
	{
		ft_printf("%x\n", INT_MAX);
		printf("%x\n", INT_MAX);
	}
	if (0)
	{
		ft_printf("\n\n%p\n%p\n%p\n%p\n%p", &main, &n, &ft_atoi, &ft_printf, &ft_calloc);
		printf("\n\n%p\n%p\n%p\n%p\n%p", &main, &n, &ft_atoi, &ft_printf, &ft_calloc);
	}
	if (0)
		ft_printf("\e[1;103m%p\e[0m", &main);
	return (0);
}

//gcc -g maintest.c -L. -lftprintf -o test.exe
//valgrind --leak-check=full --show-leak-kinds=all ./test.exe
