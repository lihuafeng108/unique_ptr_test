#include <iostream>

using namespace std;
class demo
{
public:
    demo(int setting):m_setting(setting)
    {
        cout << "Create demo object resource" << endl;
    }

    ~demo()
    {
        cout << "Destroy demo object resource" << endl;
    }

    int m_setting;
};

int main()
{   //测试使用智能指针pdmo，去管理堆中分配的demo对象资源，在函数结束后自动释放
    std::cout << "Hello World! Start our test!\n";

    unique_ptr<demo> pdmo(new demo(50));
    cout << "demo.m_setting:" << pdmo->m_setting << endl;
    return 0;
}