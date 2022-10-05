//#include <iostream>
//using namespace std;
//
//struct box
//{
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float volume;
//};
//
//void show_box(box b);
//float set_volume(box* b);
//
//int main()
//{
//	box b = { "box", 1.1, 2.2,3.3,4.4 };
//	show_box(b);
//	float volume = set_volume(&b);
//
//	system("pause");
//	return 0;
//}
//
//void show_box(box b)
//{
//	cout << "box 信息: " << b.maker << endl;
//}
//
//float set_volume(box* b)
//{
//	b->volume = b->length * b->height * b->width;
//	cout << "volume被设置为： " << b->volume;
//	return b->volume;
//}