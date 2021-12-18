#ifndef __ITER_HPP__
# define __ITER_HPP__

template<typename T, typename U, typename V>
void	iter(T arr[], const U &length, V (*f)(T &)) {
	for (U i = static_cast<U>(0); i < length; i++) {
		f(arr[i]);
	}
}

#endif
