/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:30:08 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:30:09 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_split_len(char **split)
{
	int		split_len;

	split_len = 0;
	if (split)
	{
		while (split[split_len])
			split_len++;
	}
	return (split_len);
}

