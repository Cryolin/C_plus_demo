//#include <iostream>
//using namespace std;
//const int SLEN = 30;
//
//struct student {
//	char fullname[SLEN];
//	char hobby[SLEN];
//	int ooplevel;
//};
//
//int getinfo(student pa[], int n)
//{
//	cout << "Please input the students information:" << endl;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cout << "Student #" << i + 1 << ": " << endl;
//		cout << "Fullname: ";
//		cin.getline(pa[i].fullname, SLEN);
//		if (pa[i].fullname[0] == '\0')
//			break;
//		cout << "Hobby: ";
//		if (pa[i].hobby[0] == '\0')
//			break;
//		cin.getline(pa[i].hobby, SLEN);
//		cout << "Ooplevel: ";
//		if (!(cin >> pa[i].ooplevel))
//			break;
//		cin.get();
//	}
//	cout << "Enter End!" << endl;
//	return i;		//返回实际获取到的元素的数量
//}
//
//
//void display1(student st)
//{
//	cout << "fullname:" << st.fullname << "     hobby:" << st.hobby <<
//		"    opplevel:" << st.ooplevel << endl;
//}
//// display2 () takes the address of student structure as an
////argument and displays the structure's contents
//void display2(const student* ps)
//{
//	cout << "fullname:" << ps->fullname << "     hobby:" << ps->hobby <<
//		"    opplevel:" << ps->ooplevel << endl;
//}
////display3 () takes the address of the first element of an array
////of student structures and the number of array elements as
////arguments and displays the contents of the structures
//void display3(const student pa[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Student #" << i + 1 << endl;
//		cout << "fullname:" << pa[i].fullname << "     hobby:" << pa[i].hobby <<
//			"    opplevel:" << pa[i].ooplevel << endl;
//	}
//}
//int main()
//{
//	cout << "Enter class size: ";
//	int class_size;
//	cin >> class_size;
//	while (cin.get() != '\n')
//		continue;
//	student* ptr_stu = new student[class_size];
//	int entered = getinfo(ptr_stu, class_size);
//
//	for (int i = 0; i < entered; i++)
//	{
//		display1(ptr_stu[i]);
//		display2(&ptr_stu[i]);
//	}
//	display3(ptr_stu, entered);
//
//	delete[] ptr_stu;
//	cout << "Done\n";
//	return  0;
//}