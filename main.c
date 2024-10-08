/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:50:10 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/08 17:45:16 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (0);
}
