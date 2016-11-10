#pragma once

#include <algorithm>

// define vector_erase here
template <typename T>
void vector_erase(T &v, const typename T::value_type & t){
	v.erase(std::remove(v.begin(), v.end(), t), v.end());
}
