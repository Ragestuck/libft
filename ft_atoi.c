/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:44:46 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 16:00:31 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		sign;
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\v' 
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	sign = ((str[i] == '-') ? -1 : 1);
	i = (str[i] == '-' || str[i] == '+') ? i + 1 : i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	nb *= sign;
	return (nb);
}

int		main(void)
{
	int nb = ft_atoi("8734");

	ft_putnbr(nb);
	return (0);
}