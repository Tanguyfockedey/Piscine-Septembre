/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:40:20 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/21 21:40:21 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	x;

	x = -20;
	printf("Absolute value of %d is : %d\n", x, ABS(x));
	return (0);
}
