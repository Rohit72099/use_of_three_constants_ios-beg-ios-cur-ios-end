//use of three constants ios::beg, ios::cur, ios::end
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream obj1;
//write mode
obj1.open("file1.txt",ios::out);
obj1<<"welcome to all";
cout<<obj1.tellp();
obj1.seekp(6);
cout<<endl<<obj1.tellp();
obj1.seekp(2,ios::cur);
cout<<endl<<obj1.tellp();
obj1.seekp(-3,ios::end);
cout<<endl<<obj1.tellp();
obj1.seekp(2,ios::beg);
cout<<endl<<obj1.tellp();
obj1.close();
cout<<endl<<endl;
//Read mode
obj1.open("file1.txt",ios::in);
cout<<endl<<obj1.tellg();
obj1.seekg(8);
cout<<endl<<obj1.tellg();
obj1.close();
return 0;
}
