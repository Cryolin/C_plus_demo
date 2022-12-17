//#include <iostream>
//using namespace std;
//
//template <class T>
//T find_max(T* arr, int length);
//
//template<> const char* find_max(const char* arr[], int length);
//
//int main()
//{
//	int arr_int[] = {1,4,5,6,2,3};
//	double arr_double[] = { 2.1,3.1,4.1,1.1 };
//	const char* arr_str[] = {
//		"hahah",
//		"xixi",
//		"heihe"
//	};
//
//	cout << find_max(arr_int, 6) << endl;
//	cout << find_max(arr_double, 4) << endl;
//	cout << find_max(arr_str, 3) << endl;
//
//	return 0;
//}
//
//template <class T>
//T find_max(T* arr, int length)
//{
//	T max = arr[0];
//	for (int i = 1; i < length; i++)
//	{
//		max = max > arr[i] ? max : arr[i];
//	}
//	return max;
//}
//
//template<> const char* find_max(const char* arr[], int length)
//{
//	const char* max = arr[0];
//	int max_len = strlen(arr[0]);
//	for (int i = 1; i < length; i++)
//	{
//		int len = strlen(arr[i]);
//		if (len > max_len)
//		{
//			max_len = len;
//			max = arr[i];
//		}
//	}
//	return max;
//}