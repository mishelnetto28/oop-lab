#include<iostream>
using namespace std;

class complex{
public:
	int real;
	int imag;
	void getData()
	{
		cin>>real;
		cin>>imag;}
		void putData()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		complex add(complex x,complex y,complex w)
		{
			complex z;
			z.real=x.real+y.real+w.real;
			z.imag=x.imag+y.imag+w.imag;
			return z;
		}
		complex substract(complex x,complex y)
		{
			complex z;
			z.real=x.real-y.real;
			z.imag=x.imag-y.imag;
			return z;
		}
};
			
int main()
{
	complex c1,c2,c3,c4,c5;
	cout<<"For first number"<<endl;
	c1.getData();
	cout<<"For second number"<<endl;
	c2.getData();
	cout<<"For third number"<<endl;
	c3.getData();
	c4=c4.add(c1,c2,c3);
	cout<<"sum :";
	c4.putData();
	c5=c5.substract(c1,c2);
	cout<<"Difference :";
	c5.putData();	
}
