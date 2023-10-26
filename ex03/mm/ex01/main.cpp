/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:24:08 by mtaib             #+#    #+#             */
/*   Updated: 2023/10/26 13:12:04 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try 
	{
		Bureaucrat b("mtaib", 1);
		Bureaucrat a("baanni",2);
		Form	c("test", 18, 20);
		Form	job("job", 18,20);
		
		c.beSigned(b);
		a.signForm(c);
		std::cout << b << std::endl;
	}
	catch (const std::exception& exp)
	{
		std::cout << exp.what() << std::endl;
	}
	return (0);
}
