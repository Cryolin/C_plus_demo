//#include <iostream>
//using namespace std;
//
//template <typename T>
//T findMax(T arr[]);
//
//int main()
//{
//	int arr_int[] = {1,23,42,22,5};
//	double arr_double[] = { 2.4,2.3,4.1,1.3,5.2 };
//	cout << findMax(arr_int) << endl;
//	cout << findMax(arr_double) << endl;
//
//	return 0;
//}
//
//
//template <typename T>
//T findMax(T arr[])
//{
//	T max = arr[0];
//	for (int i = 1; i < 5; i++)
//	{
//		max = max > arr[i] ? max : arr[i];
//	}
//	return max;
//}