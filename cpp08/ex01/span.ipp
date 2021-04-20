/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.ipp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 21:02:26 by honlee            #+#    #+#             */
/*   Updated: 2021/04/20 22:06:58 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://pythonq.com/so/c%2B%2B/614736
//.cpp 파일은 별도의 번역단위이며, .ipp는 헤더에 포함되어, 해당 헤더를 포함한 번역단위로 들어간다.
//템플릿을 사용하면 모든 구현을 헤더에서 해야하는데, .hpp 에 모든것을 구현하기 싫은 사람들이
//함수 몸체를 .ipp 에 따로 떼서 구현 하는 것으로 최소 단위를 분리시킨다.
template <typename T>
void Span::addNumber(T begin, T end)
{
	if (this->set.size() + std::distance(begin, end) > this->max_length)
		throw Span::SizeOverException();
	this->set.insert(begin, end);
}

//https://m.blog.naver.com/PostView.nhn?blogId=icebear2304&logNo=140144829109&proxyReferer=https:%2F%2Fwww.google.com%2F

//std::distance(iterator_begin, iterator_end)
//iterator 사이의 크기를 반환한다