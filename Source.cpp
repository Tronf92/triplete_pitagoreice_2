#include <iostream>
using namespace std;

int main(){
	int nr,x=1,y=1,z=1,a=0,b=0,c=0;
	cin >> nr;
	while( (x+y+z)<=nr){
		
		if(x*x+y*y==z*z)
			cout << "(" << x << ", " << y << ", " << z << ") sunt numere pitagoreice!" << endl;
		if(a==0){
			z++;
		}
		if(z==nr){
			a++;
		}
		if(a==1){
			z--;
			y++;
			b+=2;
			if(b%2==0){
				x++;}

		}
	}

	system("pause");
	return 0;
}
