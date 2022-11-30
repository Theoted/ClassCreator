/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample(void)
{
    std::cout << "Sample default constructor called" << std::endl;
}

Sample::Sample(const Sample &Sample)
{
    std::cout << "Sample Copy constructor called" << std::endl;
    this->type = Sample.type;
}

Sample::~Sample(void)
{
    std::cout << "Sample destructor called" << std::endl;
}

Sample  &Sample::operator=(const Sample &Sample)
{
    std::cout << "Sample Overloaded operator = called" << std::endl;
    this->type = Sample.type;
    return (*this);
}
