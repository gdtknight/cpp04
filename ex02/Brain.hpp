/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:09:24 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:22:05 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
public:
  Brain(void);
  Brain(Brain const &other);
  virtual ~Brain(void);

  Brain &operator=(Brain const &other);

  const std::string &getIdeaAt(int idx) const;
  void setIdeaAt(int idx, std::string const &idea);

private:
  std::string ideas[100];
};

#endif
