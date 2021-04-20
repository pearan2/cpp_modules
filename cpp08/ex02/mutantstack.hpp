/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:00:38 by honlee            #+#    #+#             */
/*   Updated: 2021/04/20 18:04:50 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

// https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
// stack 에서 내부 데이터가 저장되는 컨테이너는 c 이다.

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		//어짜피 stack 을 가져와서 이터레이터만 만들어주는 클레스이므로
		//생성자 등을 모두 스택의 것으로 가져다 쓴다 낄낄
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &origin) : std::stack<T>(origin) {}
		virtual ~MutantStack() {}
		MutantStack &operator=(const MutantStack &origin)
		{
			std::stack<T>::operator=(origin);
			return (*this);
		}

		//stack 은 내부적으로 vector 와 deque 등의 컨테이너를 사용한다.
		//이때 안에 무슨 컨테이너타입이 있을지 모르기때문에 아래와 같이 컨테이너타입 네임스페이스를 입력해준다.
		//templace <class Type, class Container= deque <Type>>
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;		

		iterator begin(void)
		{
			return (this->c.begin());
		}
		
		iterator end(void)
		{
			return (this->c.end());
		}

		const_iterator begin(void) const
		{
			return (this->c.cbegin());
		}

		const_iterator end(void) const
		{
			return (this->c.cend());
		}
};

#endif