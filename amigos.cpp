#include "amigos.h"
#include <iostream>
#include<cstring>
using namespace std;

Amigos::Amigos(char* nombre, int* num1, int* num2){
	this->nombre = new char[25];
	strcpy(this->nombre,nombre);
	this->numero1 = new int[4];
	this->numero1 = num1;
	this->numero2 = new int[4];
	this->numero2 = num2;
}
char* Amigos::getnombre(){
	return this->nombre;
}
void Amigos::setnombre(char* nombre){
	strcpy(this->nombre,nombre);
}
int* Amigos::getnumero1(){
	return this->numero1;
}
void Amigos::setnumero1(int* numero){
	this->numero1 = numero;
}
int* Amigos::getnumero2(){
	return this->numero2;
}
void Amigos::setnumero2(int* numero){
	this->numero2 = numero;
}
Amigos::~Amigos(){
	delete[] nombre;
	delete[] numero1;
	delete[] numero2;
}
