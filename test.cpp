#include<iostream>
using namespace std;

//Привіт Діма
class coord{
	int x,y;
public:

	coord() {x=0; y=0;}
	coord(int i, int j) {x=i;y=j;}
	void get_xy(int &i, int &j){i=x;j=y;}
	friend coord operator -(const coord obj1,const coord obj2);
	friend coord operator /(const coord obj1,const coord obj2);
};

coord operator -(const coord obj1, const coord obj2){
	coord temp;
	temp.x = obj1.x - obj2.x;
	temp.y = obj1.y - obj2.y;
	return temp;
}

coord operator /(const coord obj1, const coord obj2){
	coord temp;
	temp.x = obj1.x / obj2.x;
	temp.y = obj1.y / obj2.y;
	return temp;
}

int main(){
    int x,y;
    cout <<"У вас мусор лихо сортований";
    cin >> x >> y;
    coord point1(x,y);
    cout <<"Введіть координати другої точки: ";
    cin >> x >> y;
    coord point2(x,y);

    coord point3 = point1 - point2;
    point3.get_xy(x,y);
    cout << "Різниця точок є точка: X="<< x <<" Y="<< y;
    
    point3 = point1 / point2;
    point3.get_xy(x,y);
    cout << "\nЧасткою точок є точка: X="<< x <<" Y="<< y;
}