/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaozakca <kaozaca@student.42kocaeli.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:27:20 by kaozakca          #+#    #+#             */
/*   Updated: 2024/02/08 23:33:22 by kaozakca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 1;
	y = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		y = (str[i] - 48) + (res * 10);
		i++;
	}
	return (y * x);
}
