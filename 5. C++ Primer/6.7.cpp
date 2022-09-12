//#include <iostream>
//using namespace std;
//const int ArSize = 20;
//
//int main()
//{
//	cout << "Enter words (q to quit): \n";
//	char word[ArSize];
//
//	int vowels = 0;
//	int consonants = 0;
//	int others = 0;
//
//	while (cin >> word)
//	{
//		if (strlen(word) <= 0)
//		{
//			break;
//		}
//		else if (strlen(word) == 1 && word[0] == 'q')
//		{
//			break;
//		}
//		else if (isalpha(word[0]))
//		{
//			if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i'
//				|| word[0] == 'o' || word[0] == 'u')
//			{
//				vowels++;
//			}
//			else
//			{
//				consonants++;
//			}
//		}
//		else {
//			others++;
//		}
//	}
//
//	cout << vowels << " words beginning with vowels\n"
//		<< consonants << " words beginning with consonants\n"
//		<< others << " others.";
//
//
//	system("pause");
//	return 0;
//}