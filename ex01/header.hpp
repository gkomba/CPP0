/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:10:56 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/18 17:24:03 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <iostream>
# include <string>
# include <iomanip>
#include "PhoneBook.hpp"

typedef struct  s_data
{
    std::string     option;
    std::string     firstname;
    std::string     lastname;
    std::string     nickname;
    std::string     darksecret;
    std::string     phonenumber;
} t_data;

bool    checkFieldEmpy(t_data data);
bool    setData(t_data data, PhoneBook &phonebook);

#endif