# include <iostream>
# include <string>
# include "main.h"
# include "externTest.h"

using namespace std;
using namespace test;
typedef int myInt; //��������

#define WIDTH "����һ���궨��";
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

	enum color{ red,green=8,blue};  //ö�� ע�⵱green=8��ʱ��blueΪ9
	int c=blue;
	cout<<"enum:     "<<c<<endl;
	c=red;
	cout<<"enum:     "<<c<<endl;

	cout<<"==================================================================="<<endl;

	cout<<"�ⲿ��sss: "<<s<<endl;
	cout<<"funss():     "<<funss() <<endl;
	printf("c ���Եĺ�������");  //c ���Եĺ�������
	cout<<"��ӡ�꣺ "<<WIDTH;
	cout<<endl;
	cout<<"�ⲿ��fuck�� "<<fuck<<endl;

	cout<<"==================================================================="<<endl;
	int e=20;
	int d=30;
	if(e&&d)
	{
		cout<<"1����Ϊ�� "<<endl;
	}

	if(e||d){
		cout<<"2����Ϊ�� "<<endl;
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
	int nullTest=NULL; //��ø�һ��NULL
	if(nullTest){
		cout<<"nullTest���ǿ�"<<endl;
	}
	if(!nullTest){
		cout<<"nullTest�ǿյ�"<<endl;
	}
	//}

	/*int nullTest2;        //�����д��
	if(nullTest2!=NULL){
	cout<<"nullTest2���ǿ�"<<endl;
	}
	if(nullTest2==NULL){
	cout<<"nullTest2�ǿյ�"<<endl;
	}*/
	printQuote(a);

	cout<<"==================================================================="<<endl;
	Books book;
	book.author="ţ�Ƶ���";
	strcpy(book.title,"ţ����"); 
	printBook(&book);
	return 0;

}

void printQuote(int a){
		
	int &rr=a; //ȡa�����õ�ַ   ���ǳ���Ϊ��aȡһ�����ñ��� ���������¸�ֵ
	//&rr=b;
	int jj=a; //ȡa��ֵ �������Լ��ĵ�ַ
	int *ss=&a;//ȡa�ĵ�ַ    ���Ƕ����ssָ���������Ա����¸�ֵ��
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


