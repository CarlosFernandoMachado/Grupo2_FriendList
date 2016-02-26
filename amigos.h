#pragma once

class Amigos{
  private:
	char* nombre;
	int* numero1;
	int* numero2;
  public:
	Amigos(char* nombre, int* num1, int* num2);
	char* getnombre();
	void setnombre(char* nombre);
	int* getnumero1();
	void setnumero1(int* numero);
	int* getnumero2();
	void setnumero2(int* numero);
	void borrar();
	~Amigos();
};




