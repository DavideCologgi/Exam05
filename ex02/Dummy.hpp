/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:55:33 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 11:57:02 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"
#include <iostream>

class Dummy : public ATarget {
    public:
        Dummy();
        ~Dummy();
        ATarget*    clone() const;
};