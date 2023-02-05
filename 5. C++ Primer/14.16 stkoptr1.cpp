//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//#include"14.15 stcktp1.h"
//const int Num = 10;
//int main()
//{
//    //cout << "Hello World!" << endl;
//    std::srand(std::time(0));//随机生成0、1
//    cout << "please enter stack size:";
//    int stacksize;
//    cin >> stacksize;
//    //创建一个带有stacksize空间的空的栈
//    Stack<const char*> st(stacksize);
//
//    //in basket
//    const char* in[Num] = {
//        " 1:Hank Gilgamesh"," 2:Kiki Ishatar",
//        " 3:Betty"," 4:Ian"," 5:Kibble"," 6:Koop",
//        " 7:Joy"," 8:Xavarie"," 9:Juan"," 10:Misha",
//    };
//    //out basket
//    const char* out[Num];
//    int processed = 0;
//    int nextin = 0;
//    while (processed < Num) {
//        if (st.isempty()) {
//            st.push(in[nextin++]);
//        }
//        else if (st.isfull()) {
//            st.pop(out[processed++]);
//        }
//        else if (std::rand() % 2 && nextin < Num)//50 -50 的机会
//        {
//            st.push(in[nextin++]);
//        }
//        else {
//            st.pop(out[processed++]);
//        }
//    }
//    for (int i = 0; i < Num; i++) {
//        std::cout << out[i] << std::endl;
//    }
//    cout << "bye\n";
//    // return 0;
//    return 0;
//}