#include <QCoreApplication>
#include <iostream>
#include <functional>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    negate<int> n;//取反
    cout<<n(1)<<endl;
    plus<int> p;  //不需要写 <int ,Person> 因为如果两个类型不一样，就不可以相加了
    cout<<p(10,20)<<endl;

    minus<int> m;//减法
    cout<<m(1,5)<<endl;
    multiplies<double> mul;

    cout<<mul(1.2,8)<<endl;
    return a.exec();
}
