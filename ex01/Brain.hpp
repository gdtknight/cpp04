/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:09:24 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 19:23:41 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
public:
  Brain(void);
  Brain(const Brain &other);
  virtual ~Brain(void);

  Brain &operator=(const Brain &other);

  const std::string &getIdeaAt(int idx) const;
  void setIdeaAt(int idx, const std::string &idea);

private:
  std::string ideas[100];
};

#endif
