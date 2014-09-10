#include <map>
#include <iostream>
#include <string>
using namespace std;
class integral;
class smallint
{
public:
	smallint(int i=0):val(i){cout<<"director"<<endl;}
	//smallint(integral & );
	~smallint(){cout<<"dismantle"<<endl;}
	smallint(const smallint & s):val(s.val){cout<<"copy"<<endl;}
	operator int() const {return val;}
	std::size_t val;
};

class integral
{
public:
	integral(int i=10):val(i){cout<<"director"<<endl;}
	operator smallint() const {return smallint(val%256);}
	size_t val;
};

//smallint::smallint(integral &in):val(in.val){cout<<"change"<<endl;}

smallint test()
{
	return integral(102);
}




int main(int argc, char *argv[])
{
    integral i1;
    smallint s1=i1; // 区别以下两个结果
    cout<<sizeof(int)<<endl;

//    smallint test1=test();
//     cout<<test1.val<<endl;

    return 0;
    
    
}