/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 23:39:12 by khudeja           #+#    #+#             */
/*   Updated: 2024/08/25 17:14:30 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*start;
	unsigned int	i;

	start = dest;
	i = 0;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (start);
}

// // int size(char *src)
// // {
// //     int sz;

// //     sz = 0;
// //     while (*src!='\0')
// //     {
// //         sz++;
// //         src++;
// //     }
// //     return (sz);
// // }

// // int main(void)
// // {
// //     char *msg = "hello";
// //     // int ss;
// //     // char sss;
// //     // ss = size(msg);
// //     // sss = ss + '0';

// //     // write(1, &sss, 1);
// //     char* sr = "hello";
// //     char des[20] ;
// //     ft_strncpy(des, sr, 10) ;
// //     int index = 0;
// //     while(index < 9)
// //    {
// //         write(1, &des[index], 1);
// //         index ++;
// //    }
// //     return (0);
// // }

// int main(void)
// {
//     char dest[20]; // Destination buffer
//     char *src;
//     // Test case 1: n is smaller than the length of src
//     src = "hello";
//     ft_strncpy(dest, src, 3);
//     dest[3] = '\0'; // Manually add null terminator
//     write(1, "Test 1: ", 8);
//     write(1, dest, 4); // Output should be "hel\0"
//     write(1, "\n", 1);

//     // Test case 2: n is equal to the length of src
//     ft_strncpy(dest, src, 5);
//     dest[5] = '\0'; // Manually add null terminator
//     write(1, "Test 2: ", 8);
//     write(1, dest, 6); // Output should be "hello\0"
//     write(1, "\n", 1);

//     // Test case 3: n is greater than the length of src
//     ft_strncpy(dest, src, 10);
//     write(1, "Test 3: ", 8);
//     write(1, dest, 11); // Output should be "hello\0\0\0\0\0"
//     write(1, "\n", 1);

//     // Test case 4: Empty string as src
//     src = "";
//     ft_strncpy(dest, src, 5);
//     write(1, "Test 4: ", 8);
//     write(1, dest, 6); // Output should be "\0\0\0\0\0"
//     write(1, "\n", 1);

//     return (0);
// }