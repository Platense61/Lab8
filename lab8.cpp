#include <iostream>
#include <string>

using namespace std;

int main(){
	/*
 *	Some Comments about the code. Feel free t oread your own string in
 *	i just used the variable test for the sake of easiness
 *
 * 	 */

	string test = "Remy, Canales";
	
	//the find function will either return the index of the found character
	//on a successful run, BUT in a case where the specified character canno	t be found it will return string::npos
	size_t found = test.find(',');
	cout << "Size of String: " << test.length() << endl;
	cout << "Found : " << found << endl;
	if (found != string::npos){
		string firstName = test.substr(0, found);
		string lastName = test.substr(found+1, test.length());
		cout << firstName << lastName << endl;
	}
	else{
		cout << test << endl;
	}
	return 0;
}
