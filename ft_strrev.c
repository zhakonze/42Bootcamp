/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 15:01:52 by mlamarre          #+#    #+#             */
/*   Updated: 2016/08/04 13:36:04 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)// means it will return a char* and take in a char*.
{
	int		i;// element index.
	int		n;// to store strlen value.
	char	tmp;// temp variable to store string

	i = 0;
	n = ft_strlen(str);
	while (n - 1 > i)// n - 1 in str terms is the last character of the string, 
	{				 // since strings start from 0.
		tmp = str[i];		// let's use "Zakhele" for example. strlen = 7;
		str[i] = str[n - 1];// str[i] is now = str[6] where 'e' is the [6]th char.
		str[n - 1] = tmp;// str[6] = 'e'
		n--;
		i++;
	}
	return (str);
}
