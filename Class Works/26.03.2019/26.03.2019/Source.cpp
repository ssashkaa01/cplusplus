# include <iostream>
# include <string>

using namespace std;

struct Animal {

private:
	string name;
	string clas;
	string nickname;

public:	
	void showToInfo() {

		cout << "Name: " << name << endl << "Clas: " << clas << endl << "Nickname: " << nickname << endl;
	}

	void setName(string names) {

		name = names;

	}

	void setClas(string classs) {

		clas = classs;

	}

	void setNickName(string nicknames) {

		nickname = nicknames;

	}
};

int main() {

	Animal Tuzik;

	Tuzik.setName("dog");
	Tuzik.setClas("savets");
	Tuzik.setNickName("Tuzik");


	Tuzik.showToInfo();



	system("pause");
	return 0;
}