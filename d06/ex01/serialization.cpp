#include "serialization.hpp"

// It takes a pointer and converts it to the unsigned integer type uintptr_t
uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}


