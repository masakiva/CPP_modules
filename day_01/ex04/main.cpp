/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:06:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 19:56:51 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout, std::string
#include <fstream> // std::ifstream, std::ofstream
#include <cstdlib> // EXIT_SUCCESS, EXIT_FAILURE

std::string		get_file_contents(char *filename)
{
	std::ifstream	ifs(filename);
	std::string		contents;

	ifs >> contents;
	ifs.close();

	return (contents);
}

std::string		str_replace(std::string str, std::string s1, std::string s2)
{
	size_t			needle_start;
	size_t			prev_needle_end;
	size_t			interneedle_len;
	std::string		output;

	prev_needle_end = 0;
	while ( prev_needle_end < str.size() )
	{
		needle_start = str.find(s1, prev_needle_end);
		if ( needle_start != std::string::npos )
		{
			interneedle_len = needle_start - prev_needle_end;
			output += str.substr(prev_needle_end, interneedle_len);
			output += s2;
			prev_needle_end += interneedle_len + s1.size();
		}
		else
		{
			output += str.substr(prev_needle_end, str.size() - prev_needle_end);
			break ;
		}
	}

	return (output);
}

void	write_in_file(std::string str, char *filename)
{
	std::string		output_filename(filename);
	std::ofstream	ofs;

	output_filename += ".replace";
	ofs.open(output_filename.c_str());
	ofs << str;
	ofs.close();

	return ;
}

int		main( int argc, char **argv)
{
	std::string		input;
	std::string		output;

	if ( argc != 4 )
	{
		std::cout << "Arguments needed: a filename and 2 strings"
			<< std::endl;
		return (EXIT_FAILURE);
	}
	if ( argv[2][0] == '\0' || argv[3][0] == '\0' )
	{
		std::cout << "the 2 strings shouldn't be empty" << std::endl;
		return (EXIT_FAILURE);
	}

	input = get_file_contents(argv[1]);
	output = str_replace(input, (std::string)argv[2], (std::string)argv[3]);
	write_in_file(output, argv[1]);

	return (EXIT_SUCCESS);
}
