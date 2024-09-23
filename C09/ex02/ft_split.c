/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:39:51 by khkhan            #+#    #+#             */
/*   Updated: 2024/09/09 11:53:17 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep_checker(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	strings_counter(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] != '\0' && sep_checker(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !sep_checker(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !sep_checker(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (word == NULL)
		return (NULL);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**new_array;
	int		i;

	i = 0;
	new_array = (char **)malloc(sizeof(char *) * (strings_counter(str, charset)
				+ 1));
	if (new_array == NULL)
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && sep_checker(*str, charset))
			str++;
		if (*str != '\0')
		{
			new_array[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !sep_checker(*str, charset))
			str++;
	}
	new_array[i] = 0;
	return (new_array);
}

// int	main(void)
// {
// 	char str[] = "Hello,world,this,is,a,test";
// 	char charset[] = ",";
// 	char **result;
// 	int i;

// 	result = ft_split(str, charset);

// 	if (result == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}

// 	// Print the result
// 	i = 0;
// 	while (result[i] != 0)
// 	{
// 		printf("Word %d: %s\n", i, result[i]);
// 		free(result[i]); // Free each allocated word
// 		i++;
// 	}
// 	free(result); // Free the array of pointers

// 	return (0);
// }