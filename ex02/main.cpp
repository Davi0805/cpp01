/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:40:27 by davi              #+#    #+#             */
/*   Updated: 2025/02/28 18:08:40 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string* strPTR = &str;

    std::string& strREF = str;

// --------------------------------------

    std::cout << "ADDRESS STRING ORIGINAL - " << &str << std::endl;

    std::cout << "ADDRESS STRING POINTER - " << strPTR << std::endl;

    std::cout << "ADDRESS STRING REFERENCE - " << &strREF << std::endl;

// --------------------------------------

    std::cout << "VALUE STRING ORIGINAL - " << str << std::endl;

    std::cout << "VALUE STRING POINTER - " << *strPTR << std::endl;

    std::cout << "VALUE STRING REFERENCE - " << strREF << std::endl;
}