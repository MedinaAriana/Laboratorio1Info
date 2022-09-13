#include<iostream>
using namespace std;
#include <conio.h>
int mayornota(int a, int b, int c, int d, int e);
int menornota(int a, int b, int c, int d, int e);

main(){
	int a,b,c,d,e;
	cout<<"Ingrese sus 5 notas (valores entre 0 y 10)" <<endl; 
	cin>>a>>b>>c>>d>>e;
	if ((a>=0 && a<=10)&&(b>=0 && b<=10)&&(c>=0 && c<=10)&&(d>=0 && d<=10)&&(e>=0 && e<=10)){
		cout<<"Mayor nota: "<<mayornota(a,b,c,d,e)<<endl;
		cout<<"Menor nota: "<<menornota(a,b,c,d,e)<<endl;
		getch();
	}
	else{
		cout<<"Datos inválidos"<<endl;
	}
	
}

int mayornota(int a, int b, int c, int d, int e){
	if ((a>b) && (a>c) && (a>d) && (a>e)){
		return (a);
	}
	if ((b>a) && (b>c) && (b>d) && (b>e)){
		return (b);
	}
	if ((c>a) && (c>b) && (c>d) && (c>e)){
		return (c);
	}
	if ((d>a) && (d>b) && (d>c) && (d>e)){
		return (d);
	}
	if ((e>a) && (e>b) && (e>c) && (e>d)){
		return (e);
	}
	if ((a==b)&&(a==c)&&(a==d)&&(a==e)){
		cout<<"Las notas son iguales entre sí"<<endl;
		return (a);
	}
}

int menornota(int a, int b, int c, int d, int e){
	if ((a<b) && (a<c) && (a<d) && (a<e)){
		return (a);
	}
	if ((b<a) && (b<c) && (b<d) && (b<e)){
		return (b);
	}
	if ((c<a) && (c<b) && (c<d) && (c<e)){
		return (c);
	}
	if ((d<a) && (d<b) && (d<c) && (d<e)){
		return (d);
	}
	if ((e<a) && (e<b) && (e<c) && (e<d)){
		return (e);
	}
	if ((a==b)&&(a==c)&&(a==d)&&(a==e)){
		cout<<"Las notas son iguales entre sí"<<endl;
		return (a);
	}
}
