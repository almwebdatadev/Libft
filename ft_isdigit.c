/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:29:08 by alendine          #+#    #+#             */
/*   Updated: 2025/10/03 16:09:17 by alendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	printf("RoF own 0--> %d\n", ft_isdigit('0'));
	printf("RoF own 1--> %d\n", ft_isdigit('1'));
	printf("RoF own a--> %d\n", ft_isdigit('a'));
	printf("RoF system 0--> %d\n", isdigit('0'));
	printf("RoF system 1--> %d\n", isdigit('1'));
	printf("RoF system a--> %d\n", isdigit('a'));
}
