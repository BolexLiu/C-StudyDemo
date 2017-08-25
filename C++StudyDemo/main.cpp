# include <iostream>
# include <string>
# include "main.h"
# include "externTest.h"

using namespace std;
using namespace test;
typedef int myInt; //声明别名

#define WIDTH "我是一个宏定义";
extern int fuck;


 struct Books{
	char title[50];
	string author;
};


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
	cout<<"==================================================================="<<endl;

	enum color{ red,green=8,blue};  //枚举 注意当green=8的时候，blue为9
	int c=blue;
	cout<<"enum:     "<<c<<endl;
	c=red;
	cout<<"enum:     "<<c<<endl;

	cout<<"==================================================================="<<endl;

	cout<<"外部的sss: "<<s<<endl;
	cout<<"funss():     "<<funss() <<endl;
	printf("c 语言的函数测试");  //c 语言的函数测试
	cout<<"打印宏： "<<WIDTH;
	cout<<endl;
	cout<<"外部的fuck： "<<fuck<<endl;

	cout<<"==================================================================="<<endl;
	int e=20;
	int d=30;
	if(e&&d)
	{
		cout<<"1条件为真 "<<endl;
	}

	if(e||d){
		cout<<"2条件为真 "<<endl;
	}
	cout<<"e: "<<e<<endl;
	cout<<"&e: "<<&e<<endl;
	cout<<"*e:     "<<*&e<<endl;
	cout<<"*lambdaTest:"<<""<<endl;
	([]()-> string {cout <<"testLambda1111"<<endl; return "123"; })();
	cout<<"==================================================================="<<endl;


	int vf[2] ={3,4};
	cout<<"vf0"<<&vf[0]<<endl;
	cout<<"vf1"<<&vf[1]<<endl;
	cout<<"&vf "<<&vf<<endl;
	cout<<"*vf "<<*vf<<endl;
	cout<<"==================================================================="<<endl;
	int nullTest=NULL; //最好个一个NULL
	if(nullTest){
		cout<<"nullTest不是空"<<endl;
	}
	if(!nullTest){
		cout<<"nullTest是空的"<<endl;
	}
	//}

	/*int nullTest2;        //错误的写法
	if(nullTest2!=NULL){
	cout<<"nullTest2不是空"<<endl;
	}
	if(nullTest2==NULL){
	cout<<"nullTest2是空的"<<endl;
	}*/
	printQuote(a);

	cout<<"==================================================================="<<endl;
	Books book;
	book.author="牛逼的人";
	strcpy(book.title,"牛逼书"); 
	printBook(&book);
	return 0;

}

void printQuote(int a){
		
	int &rr=a; //取a的引用地址   我们称做为给a取一个引用别名 不可以重新赋值
	//&rr=b;
	int jj=a; //取a的值 但是有自己的地址
	int *ss=&a;//取a的地址    这是定义个ss指正。他可以被重新赋值。
	//*ss=b;
	cout<<"&rr "<<&rr<<endl;
	cout<<"*ss "<<*ss<<endl;

	cout<<"rr "<<rr<<endl;
	cout<<"ss "<<ss<<endl;
	rr++;
	jj++;
	cout<<"a "<<a<<endl;
	cout<<"&a "<<&a<<endl;
	cout<<"jj "<<jj<<endl;
	cout<<"&jj "<<&jj<<endl;
}



void printBook( Books *book)
{
	cout<<"book "<<book->title<<endl;
	cout<<"book "<<book->author<<endl;
}


