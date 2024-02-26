/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:06:01 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 14:54:26 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::~BrickWall() {}

ATarget*    BrickWall::clone() const {
    return (new BrickWall());
}