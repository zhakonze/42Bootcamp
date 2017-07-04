/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 13:26:03 by zhakonze          #+#    #+#             */
/*   Updated: 2017/01/15 13:41:20 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i] != '\0') // as long as string 2(exsits) \hasn't reached the end or it's allocated space,
	{
		s1[i] = s2[i]; // whatever is in string 1 should be equal to whats in string 2,
		i++; // keep on putting characters element after element till end of line is reached,
	}
	s1[i] = '\0';// once the first string has reached the end, 
	return (s1); // then we can conclude that string 1 has been copied to string 2.
}
