/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:03:55 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/01 18:01:55 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

// Declaracao da variavel statica
std::ifstream Sed::inputFile;

Sed::Sed(char **av) : _filename(std::string(av[1])), _s1(std::string(av[2])), _s2(std::string(av[3]))
{
    std::cout << "Construtor chamado - File - " << _filename
        << " - S1 - " << _s1 << " - S2 - " << _s2 << std::endl << std::endl;
}

Sed::~Sed()
{
}

bool Sed::isFileValid()
{
    inputFile.open(_filename.c_str());
    if (inputFile.is_open())
        return true;
    return false;
}

int Sed::execute()
{
    if (!isFileValid())
        return (0);
    while(std::getline(inputFile, _buffer))
    {
        std::cout << _buffer << std::endl;        
    }
    return(0);
}

void Sed::replaceS1()
{
    for (int i = 0; i < _buffer.length(); i++)
    {
        // Procura primeiro char
        if (_buffer[i] == _s1[0])
        {
            // Checa se a string esta presente
            for(int j = 0; j < _s1.length(); j++)
            {
            }
        }
    }
}





