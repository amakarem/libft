/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:50:10 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/07 17:35:55 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void) {
    char l = 'A';
    ft_putchar(l);
    ft_putchar('\n');
    ft_putstr("ahmed\n");
    ft_putnbr(42);
    ft_putchar('\n');
    char str[] = "Ahmed is testing";
    int result = ft_strlen(str);
    ft_putnbr(result);
    
    ft_putchar('\n');
    return (0);
}