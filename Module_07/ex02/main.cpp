#include "Array.tpp"

int main(void){
	
	{
		std::cout << "--> Let create new INT array"
				<< std::endl;
		Array<int>* 	Int = new Array<int>(10);

		try {
			for (unsigned int i=0; i < Int->size(); i++){
				(*Int)[i] = (i + 1);
				std::cout << "	elem["
						<< i
						<< "]: "
						<< (*Int)[i] << std::endl;
			}
			std::cout << (*Int)[12] << std::endl;
		} catch (std::exception&){
			std::cout << "Incorrect size. Please, give size from 0 to "
					<< Int->size() - 1
					<< std::endl;
		}
		
		delete Int;
	}

	{
		std::cout << "\n--> Let ctreat new CHAR array"
				<< std::endl;
		Array<char>*	Char = new Array<char>(3);
		
		try {
			(*Char)[0] = 'L';
			std::cout << "	elem[0]: "
					<< (*Char)[0] 
					<< std::endl;
			(*Char)[1] = 'O';
			std::cout << "	elem[1]: "
					<< (*Char)[1] 
					<< std::endl;
			(*Char)[2] = 'L';
			std::cout << "	elem[2]: "
					<< (*Char)[2] 
					<< std::endl;
			(*Char)[3] = '!';
			std::cout << "	elem[3]: "
					<< (*Char)[3] 
					<< std::endl;
		} catch (std::exception&){
			std::cout << "Incorrect size. Please, give size from 0 to "
					<< Char->size() - 1
					<< std::endl;
		}
		delete Char;
	}

}
