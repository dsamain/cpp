#include "serialize.hpp"

uintptr_t serialize(Data *ptr) {
	return static_cast<uintptr_t>(ptr->val);
}

Data *deserialize(uintptr_t raw) {
	Data *out;

	out->val = raw;
	return out;
}


int main() {

	Data data;
	Data *new_data;
	uintptr_t n;

	data.val = 69;
	n = serialize(&data);
	new_data = deserialize(n);

	std::cout << "data val : " << data.val << std::endl;
	std::cout << "new_data val : " << new_data->val << std::endl;



}