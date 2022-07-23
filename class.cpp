#include <iostream>
using namespace std;
class Box
{
    //类访问修饰符
    public:
        //成员变量定义
        double length;
        double width;
        double height;
        //类构造函数声明
        Box();
        Box(double p_len,double p_width,double p_height);
        //析构函数声明
        ~Box();
        //成员函数定义
        double getSize()
        {
            return length * width * height;
        }
};
//不带参数的类构造函数实现
Box::Box()
{

}
//带参数的类构造函数实现
Box::Box(double p_len,double p_width,double p_height)
{
    length = p_len;
    width = p_width;
    height = p_height;
}
//析构函数实现
Box::~Box()
{
    cout << "Object is being deleted" <<endl;
}
int main()
{
    //创建对象
    Box box1;
    //对象的成员变量赋值
    box1.length = 5;
    box1.width = 5;
    box1.height = 5;
    double a = box1.length * box1.width * box1.height;
    cout << "Box1 的体积：" << a << endl;
    //调用成员函数
    cout << "Box1 的体积：" << box1.getSize() << endl;
    //使用构造方法创建对象
    Box box2(1,2,3);
    cout << "Box2 的体积：" << box2.getSize() << endl;
}