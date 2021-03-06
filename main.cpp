#include <iostream>
#include <string>
#include <vector>
#include <conio2.h>
#include <fstream>
using namespace std;

class Aluno;
class Disciplina;
class Nota;

#include "Tela.h"
#include "Aluno.h"
#include "Disciplina.h"
#include "Nota.h"

#include "Disciplina.cpp"
#include "Aluno.cpp"



main()
{
	// variaveis
	string opcao;
	
	// objetos
	Aluno objAluno;
	Disciplina objDisciplina;
	Nota objNota;
	Tela t;

	objNota.definirPonteiros(&objAluno, &objDisciplina);
	
	//teste
	while (true)
	{
		textbackground(BLACK);
		clrscr();
		textcolor(YELLOW);
		gotoxy(1,1); cout << "Menu";
		textcolor(WHITE);
		gotoxy(1,2); cout << "1 - Manter Alunos";
		gotoxy(1,3); cout << "2 - Manter Disciplinas";
		gotoxy(1,4); cout << "3 - Manter Notas";
		gotoxy(1,5); cout << "4 - Gerar Boletim";
		gotoxy(1,6); cout << "0 - Sair";
		gotoxy(1,7); cout << "Opcao : ";
		textcolor(LIGHTCYAN);
		opcao = getche();   // cin >> opcao;
		textcolor(WHITE);
		
		if (opcao == "0") break;
		
		if (opcao == "1") objAluno.executarCRUD(&objNota);
		
		if (opcao == "2") objDisciplina.executarCRUD(&objNota);

		if (opcao == "3") objNota.executarCRUD();
		
	}
	clrscr();
	cout << "tchau...";
}
