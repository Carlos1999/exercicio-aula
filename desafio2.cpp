#include <iostream>
#include <algorithm>
#include <set>
using std::set;
using namespace std;
template <typename TContainer>
	void print_elementos(const TContainer& collection, const char* label="", const char separator=' '){
		cout<< (*label)<<endl;
		for (int i = 0; i < collection.size(); i++){
			cout<<collection.erase() <<separator << endl;
		}
	}

int main(){



set<int> numeros;
numeros.insert(3);
numeros.insert(1);
numeros.insert(4);
numeros.insert(1);
numeros.insert(2);
numeros.insert(5);
print_elementos(numeros, "CSV Set: ", ';');




	return 0;
}