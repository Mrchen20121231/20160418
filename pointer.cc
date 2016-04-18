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
		Pointer();
		Pointer(int idx,int idy);
		void print();

};
Pointer::Pointer()
{
      _idx=0;
	  _idy=0;

}
Pointer::Pointer(int idx,int idy)
{
      _idx=idx;
	  _idy=idy;

}

void Pointer::print()
{
	cout << "(" <<_idx
		 << "," <<_idy
		 << ")" << endl;
    

}
int main()
{
    Pointer po;
	po.print();
	Pointer p1(3,4);
	p1.print();

}
