/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 00:48:48 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/23 01:08:10 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include "stdio.h"

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%d \n", ABS(-2147483647));
	printf("%ld \n", ABS(-2147483648));
	return (0);
}