#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap (T &t1, T &t2)
{
	T temp = t1;
	t1 = t2;
	t2 = temp;
}

template <typename T>
T const &max(const T &t1,const T &t2)
{
	return (t1 > t2 ? t1 : t2);
}

template <typename T>
T const &min(const T &t1,const T &t2)
{
	return (t1 < t2 ? t1 : t2);
}

#endif //WHATEVER_HPP
