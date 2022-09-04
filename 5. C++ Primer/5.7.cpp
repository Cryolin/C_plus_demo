//#include <iostream>
//using namespace std;
//struct Car
//{
//	char company[20];
//	int year;
//};
//
//
//int main()
//{
//	cout << "How many cars do you wish to catalog? ";
//	int cars_num;
//	cin >> cars_num;
//
//	Car* car_array = new Car[cars_num];
//
//	for (int i = 0; i < cars_num; i++)
//	{
//		cin.get();
//		cout << "Car #" << i << endl;
//		cout << "Please enter the make: ";
//		cin.getline(car_array[i].company, 20);
//		cout << "Please enter the year made: ";
//		cin >> car_array[i].year;
//	}
//
//	cout << "Here is your collection:" << endl;
//	for (int i = 0; i < cars_num; i++)
//		cout << car_array[i].year << " " << car_array[i].company << endl;
//
//	system("pause");
//	return 0;
//}