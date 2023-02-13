#include "Data.hpp"

uintptr_t serialize( Data* ptr )
{
    // Farklı veri türünde işaretçiler arasında dönüşüm
    uintptr_t tmp = reinterpret_cast<uintptr_t>( ptr );

    return tmp;
}

Data* deserialize( uintptr_t raw )
{
    // Farklı veri türünde işaretçiler arasında dönüşüm
	Data *tmp = reinterpret_cast<Data *>( raw );
	
	return tmp;
}