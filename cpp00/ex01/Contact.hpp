/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:32:52 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/16 11:32:53 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	private:
		int			index;
		std::string	last_name;
		std::string first_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;

	public:
		void		set_first_name(const std::string &newName);
		std::string	get_first_name() const;
		void		set_last_name(const std::string &newName);
		std::string	get_last_name() const;
		void		set_nickname(const std::string &newName);
		std::string	get_nickname() const;
		void		set_phone_nb(const std::string &nb);
		std::string	get_phone_nb() const;
		void		set_secret(const std::string &secret);
		std::string	get_secret() const;
		void		set_index(int index);
		int			get_index() const;

};

#endif
