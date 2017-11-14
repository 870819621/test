#include<iostream>
using namespace std;
typedef unsigned char BYTE;
int checkCPU()
{
	{
		union w
		{
			int a;
			char b;
		} c;
		c.a = 1;
		return (c.b == 1);
	}
}
int main(int argc, char* argv[])
{
    cout<<checkCPU();
	return 0;
}