/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:54:21 by kcetin            #+#    #+#             */
/*   Updated: 2023/01/03 13:21:26 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while(argv[i] != NULL)
    {
        j = 0;
        while(argv[i][j] != '\0')
        {
            std::cout << (char)toupper(argv[i][j]);
            j++;
        }
        i++;
    }
            std::cout << std::endl;
    return 0;
}
