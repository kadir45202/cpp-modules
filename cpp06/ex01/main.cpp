#include "Data.hpp"

int main( void )
{
	Data data;
	data.a = 65;
	data.ch = 'a';
	data.b = true;
	Data* dtPtr = &data;

	cout << deserialize( serialize( dtPtr ) )->a << endl;
	cout << deserialize( serialize( dtPtr ) )->ch << endl;
	cout << deserialize( serialize( dtPtr ) )->b << endl;
}
