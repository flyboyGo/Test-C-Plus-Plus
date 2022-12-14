#include <iostream>
#include <string>

using namespace std;

//类模板的成员函数在类中声明、类外实现

//严格来说：类模板的类型 不是Person 而是Person<T1,T2>
template<class T1,class T2> class Person
{
private:
    T1 name;
    T2 age;
public:
    //类内声明 类外定义
    Person(T1 name,T2 age);
    void showPerson(void);
    ~Person(void);
};

//类外定义
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
    cout << "有参构造" << endl;
    this->name = name;
    this->age = age;
}

template<class T1, class T2>
void Person<T1,T2>::showPerson()
{
    cout << "name = " << this->name << ", age = " << this->age << endl;
}

template<class T1, class T2>
Person<T1,T2>::~Person()
{
    cout << "析构函数" << endl;
}

void test04()
{
    Person<string,int> ob("李鹏飞",24);
    ob.showPerson();

    Person<int,int> ob2(176,24);
    ob2.showPerson();
}

//int main(int argc, char *argv[])
//{
//    test04();

//    return 0;
//}
