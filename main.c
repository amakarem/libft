/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:50:10 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/08 21:09:02 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	l;
	char	*str;
	int		result;

	l = 'A';
	ft_putchar(l);
	ft_putchar('\n');
	ft_putstr("ahmed\n");
	ft_putnbr(42);
	ft_putchar('\n');
	str = "Ahmed is testing";
	result = ft_strlen(str);
	ft_putnbr(result);
	ft_putchar('\n');
	ft_putnbr(ft_isalpha(l));
	ft_putchar('\n');
	ft_putnbr(ft_isdigit(l));
	ft_putchar('\n');
	l = ft_tolower(l);
	ft_putchar(l);
	ft_putchar('\n');
	l = ft_toupper(l);
	ft_putchar(l);
	ft_putchar('\n');
	ft_putnbr(ft_isalnum('*'));
	ft_putchar('\n');
	ft_putnbr(ft_isalnum(l));
	ft_putchar('\n');
	ft_putnbr(ft_isascii('\0'));
	ft_putchar('\n');
	ft_putnbr(ft_isprint('\0'));
   	char charstr[] = "This is simple string";
   	char* sh;
	
	sh = ft_strchr(charstr, 's');

   while (sh != NULL) 
   {
       ft_putstr("\nFound at position:");
	   ft_putnbr(sh - charstr + 1);
       sh = ft_strchr(sh + 1, 's');
   }
	ft_putstr("\n\n");
	char* ptr = ft_strrchr(charstr, 's');
	ft_putstr(ptr);
	ft_putstr("\nFound at position:");
	ft_putnbr(charstr - ptr  + 1);

char str1[15];
   char str2[15];
   int ret;
   strcpy(str1, "abcdef");
   strcpy(str2, "abcdEF");

   ret = ft_strncmp(str1, str2, 4);
   if(ret < 0) 
   {
      ft_putstr("\nstr1 is less than str2");
   } 
   else if(ret > 0) 
   {
      ft_putstr("\nstr2 is less than str1");
   } 
   else 
   {
      ft_putstr("\nstr1 is equal to str2");
   }
   


      char nstr[50];

   strcpy(nstr, "Welcome to Tutorialspoint");
   puts(nstr);

   ft_memset(nstr, '#', 7);
   puts(nstr);

   int arr[10];
   ft_memset(arr, 0, sizeof(arr));

   printf("Array after memset(): ");
   for (int i = 0; i < 10; i++) {
       printf("%d ", arr[i]);
   }
	return (0);
}
