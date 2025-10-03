/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:11:44 by alendine          #+#    #+#             */
/*   Updated: 2025/10/03 16:45:42 by alendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	printf("RoF own '0'-->%d\n", ft_isascii('0'));
	printf("RoF own '&'-->%d\n", ft_isascii('&'));
	//printf("RoF own '128'-->%d\n", ft_isascii('128'));
	printf("RoF system '0'-->%d\n", isascii('0'));
	printf("RoF system '&'-->%d\n", isascii('&'));
	//printf("RoF system '€'-->%d\n", isascii('€'));
}
