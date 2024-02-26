/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:22:54 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 10:58:56 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

class Warlock {
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock(const Warlock& other);
		Warlock&	operator=(const Warlock& rhs);

	public:
		Warlock(std::string nm, std::string tle);
		~Warlock();

		const std::string&	getName() const;
		const std::string&	getTitle() const;
		void        		setTitle(const std::string& tle);
		void				introduce() const;
				
};
