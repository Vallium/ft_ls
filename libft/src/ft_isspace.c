/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <antoine@doussaud.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:29:20 by adoussau          #+#    #+#             */
/*   Updated: 2014/11/05 14:44:07 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return (c == ' '
	|| c == '\t'
	|| c == '\r'
	|| c == '\v'
	|| c == '\n'
	|| c == '\f');
}
