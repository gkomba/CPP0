/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 12:59:09 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/16 12:59:24 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    ft_strtolower(std::string &str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

int main(int argc, char **argv)
{
    std::string str;
    int         i;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 0;
        while (argv[++i])
        {
            str = argv[i];
            ft_strtolower(str);
            std::cout << str;
        }
        std::cout << std::endl;
    }
    return (0);
}