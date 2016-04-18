 ///
 /// @file    pointer.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-18 06:36:39
 ///
 
#include <iostream>
using std::cout;
using std::endl;
class Pointer
{
 private:
	     int _idx;
		 int _idy;
 public:
		explicit Pointer(int idx=0,int idy=0);//explicit表示构造函数必须显示调用
		Pointer(const Pointer & rhs)//不用引用和加常量的话会造成无线递归
		//Pointer(Pointer rhs)不可取
	    :_idx(rhs._idx)
		,_idy(rhs._idy)
		{
            cout << "Pointer(const Pointer & rhs)" << endl;
   
		}
		~Pointer()//析构函数
		{
            cout << "~pointer()" << endl;
             
		}
		void print();

};
Pointer::Pointer(int idx,int idy)
:_idx(idx)//初始化数据
,_idy(idy)
{
	 cout << "Pointer(int idx,int idy)" << endl;
     // _idx=idx;//此处为赋值操作
	 // _idy=idy;

}

void Pointer::print()
{
	cout << "(" <<_idx
		 << "," <<_idy
		 << ")" << endl;
    

}
int main()
{
	Pointer p1(3,8);
	p1.print();
	Pointer p2=p1;
	Pointer p3(p1);
	

}
