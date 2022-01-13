
		

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class vector {
private:
	int n;
	float* v;
public:
	vector(int size);
	vector(vector& a);
	~vector();
	void add();
	void display();
	int ktra(vector& a);
	friend vector operator +(vector& a, vector& b);
	void operator =(vector& a);
};
vector::vector(int size)
{
	int i;
	n = size;
	v = new float[n];
}
void vector::add()
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "]";
		cin >> v[i];
	}
}
vector::vector(vector& a)
{
	int i;
	n = a.n;
	v = new float[n];
	for (i = 0; i < n; i++)
		v[i] = a.v[i];
}
vector::~vector()
{
	delete v;
}
void vector::display()
{
	int i;
	for (i = 0; i < n; i++)
		cout << v[i] << " ";
}
void vector:: operator =(vector& a)
{
	int i;
	n = a.n;
	v = new float[n];
	for (i = 0; i < n; i++)
		v[i] = a.v[i];
}
vector operator +(vector& a, vector& b)
{
	int i;
	vector c = a;
	for (i = 0; i < a.n; i++)
		c.v[i] = a.v[i] + b.v[i];
	return c;
}
int vector::ktra(vector& b)
{
	if (n == b.n) return 1;
	return 0;
}
/*void vector::display()
{
int i;
for (i=0;i<n;i++)
cout<<v[i]<<”    “;
}  */
void main()
{
	int n;
	cout << " nhap so phan tu :";
	cin >> n;

	vector a(n);
	cout << " nhap vecto a :";
	a.add();
	cout << "nhap so phan tu cua vecto b ";
	cin >> n;
	vector b(n);
	a.display();
	b.display();
	(a + b).display();
	
}