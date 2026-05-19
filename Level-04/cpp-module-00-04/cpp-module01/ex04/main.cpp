/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 08:11:45 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/10 14:43:19 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
        return(std::cout <<"ERROR 'usage' : <./programe> <File name> <word to change> <new word>"<<std::endl,1);
    std::string file = av[1];
    std::string str = av[2];
    std::string nouv = av[3];
    std::string line;
    int         new_line = 0;

    std::ifstream my_file(file.c_str());
    if(!my_file.is_open())
        return(std::cout << "ERROR : file invalide\n",1);
    std::ofstream newfile((file + ".replace").c_str());
    if(!newfile.is_open())
        return(std::cout << "ERROR : try again the new file is not created\n",1);
    while (std::getline(my_file, line))
    {
        if(new_line)
            newfile << std::endl;
        std::string content = line;
        size_t found = line.find(str);
        while(found != std::string::npos)
        {

            line.erase(found, str.length());
            line.insert(found, nouv);
            found += nouv.length();
            found = line.find(str);
        }
        new_line++;
        newfile << line;
    }
}
