#include "../include/Serializer.hpp"

int main(void)
{
	Data	*data = new Data;
	data->name = "John Doe";
	data->age = 30;
	data->next = NULL;


	uintptr_t raw = Serializer::serialize(data);
	Data *deserializedData = Serializer::deserialize(raw);

	std::cout << "Serialized data: " << raw << std::endl;
	std::cout << "Deserialized data: " << deserializedData->name << ", " << deserializedData->age << std::endl;
	std::cout << "Round-trip successful: " << std::boolalpha << (deserializedData == data) << std::endl;

	delete data;
	delete deserializedData;
	return 0;
}