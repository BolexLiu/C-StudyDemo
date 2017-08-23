# include <iostream>
# include "main.h"
# include "test.h"
using namespace std;
typedef int myInt; //声明别名

int main()
{

	int a=2;
	int b=3;
	//std::cout<<"hello world!\n";
	cout<<"hello world!\n"<<(a+b)<<endl;

	cout<<"char Size:     "<<sizeof(char)<<endl;
	cout<<"int Size:     "<<sizeof(myInt)<<endl;
	cout<<"short Size:     "<<sizeof(short)<<endl;
	cout<<"long Size:     "<<sizeof(long)<<endl;
	cout<<"double Size:     "<<sizeof(double)<<endl; 
	cout<<"float Size:     "<<sizeof(float)<<endl;
	cout<<"wchar_t Size:     "<<sizeof(wchar_t)<<endl;

	cout<<"wchar_t Size:     "<<test::funss() <<endl;

	    enum color{ red,green=8,blue};  //枚举 注意当green=8的时候，blue为9

		int c=blue;
		cout<<"enum:     "<<c<<endl;
		c=red;
		cout<<"enum:     "<<c<<endl;
		
		cout<<"外部的sss: "<<s<<endl;

		printf("123111");  //c 语言的函数测试
	return 0;





}
