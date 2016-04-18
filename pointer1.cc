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
		Pointer(int idx);
		void print();

};
Pointer::Pointer(int idx)
:_idy(idx)
,_idx(_idy)
{
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
	Pointer p1(3);
	p1.print();

}
