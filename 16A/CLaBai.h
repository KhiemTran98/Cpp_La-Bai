#include<iostream>
using namespace std;
class CLaBai
{
private:
	int SoNut;
	int Nuoc;
public:
	~CLaBai();
	friend istream& operator>>(istream& input, CLaBai* x);
	friend ostream& operator<<(ostream& output, CLaBai* x);
	int GetSoNut();
	bool LaBaiDo();
};