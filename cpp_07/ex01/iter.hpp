#ifndef __ITER_HPP__
# define __ITER_HPP__

template<typename T, typename U>
void	iter(T arr[], const U &length, void (*f)(T const &)) {
	for (U i = static_cast<U>(0); i < length; i++) {
		f(arr[i]);
	}
}

template<typename T, typename U>
void	iter(T arr[], const U &length, void (*f)(T &)) {
	for (U i = static_cast<U>(0); i < length; i++) {
		f(arr[i]);
	}
}

#endif
