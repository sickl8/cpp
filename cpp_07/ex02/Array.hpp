#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__


template <typename T>
class Array {
	public:
		~Array() {
			delete array;
		}
		Array(): excep("index out of bounds of Array") {
			array = nullptr;
			_size = 0;
		};
		Array(const Array &ref): excep("index out of bounds of Array") {
			array = new T[ref._size];
			_size = ref._size;
			for (unsigned int i = 0; i < _size; i++) {
				array[i] = ref.array[i];
			}
		}
		Array(unsigned int n): excep("index out of bounds of Array") {
			array = new T[n];
			_size = n;
			for (unsigned int i = 0; i < _size; i++) {
				array[i] = static_cast<T>(0);
			}
		}
		Array	&operator=(const Array &ref) {
			delete array;
			array = new T[ref._size];
			_size = ref._size;
			for (unsigned int i = 0; i < _size; i++) {
				array[i] = ref.array[i];
			}
		}
		T		&operator[](long index) {
			if (index < 0 || index >= _size) {
				throw excep;
			}
			return array[index];
		}
		const T		&operator[](long index) const {
			if (index < 0 || index >= _size) {
				throw excep;
			}
			return array[index];
		}
		unsigned int	size() const {
			return _size;
		}
	private:
		T					*array;
		unsigned int		_size;
		std::out_of_range	excep;

};

#endif
