#include"CLaBai.h"
CLaBai::~CLaBai() {}
istream& operator>>(istream& input, CLaBai* x)
{
	cout << " Nhap so nut: ";
	input >> x->SoNut;
	cout << " Nhap nuoc: ";
	input >> x->Nuoc;;
	return input;
}
ostream& operator<<(ostream& output, CLaBai* x)
{
	output << " So nut: " << x->SoNut << endl;
	output << " Nuoc: ";
	switch (x->Nuoc)
	{
	case 0:
		output << "co\n";
		break;
	case 1:
		output << "ro\n";
		break;
	case 2:
		output << "chuon\n";
		break;
	case 3:
		output << "bich\n";
		break;
	}
	return output;
}
int CLaBai::GetSoNut()
{
	return SoNut;
}
bool CLaBai::LaBaiDo()
{
	if (Nuoc == 0 || Nuoc == 1)
		return true;
	return false;
}