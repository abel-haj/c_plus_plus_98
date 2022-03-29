#pragma once

# include <cstdint>

struct Data {
	int a;
	int b;
	int c;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);
