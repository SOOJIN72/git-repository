﻿int main() {
	Car c1{ "MKZ",1,999, 141 };
	Car c2{ "네비게이터",3,496, 457 };
	Car c3{ "노틸러스",2694, 333 };
	Car c4{ "코세어",1999, 238 };

	cout << "링컨차의 = " << c1.Getname() << ", " << "배기량 :" << c1.Getkm() << "cc" << ", " << "최대출력 :" << c1.Gethp() << "hp" << endl;
	cout << "링컨차의 = " << c2.Getname() << ", " << "배기량 :" << c2.Getkm() << "cc" << ", " << "최대출력 :" << c2.Gethp() << "hp" << endl;
	cout << "링컨차의 = " << c3.Getname() << ", " << "배기량 :" << c3.Getkm() << "cc" << ", " << "최대출력 :" << c3.Gethp() << "hp" << endl;
	cout << "링컨차의 = " << c4.Getname() << ", " << "배기량 :" << c4.Getkm() << "cc" << ", " << "최대출력 :" << c4.Gethp() << "hp" << endl;

}