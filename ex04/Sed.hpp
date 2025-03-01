/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:03:12 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/01 17:45:38 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>


class Sed
{
private:
    std::string _filename;
    std::string _s1;
    std::string _s2;
    static std::ifstream inputFile;
    std::string _buffer;
    std::string _result;
public:
    Sed(char **av);
    ~Sed();
    int execute();

    bool    isFileValid();
    void    replaceS1();
};

#endif //SED_HPP