#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <random>
using namespace std;
    int rodada = 0;
    string jogador = "";
    string espaco = "";
    string status;
    int computador = 0;
    string p1 = "1";
	string p2 = "2";
	string p3 = "3";
	string p4 = "4";
	string p5 = "5";
	string p6 = "6";
	string p7 = "7";
	string p8 = "8";
	string p9 = "9";
void Computador();	
void Rodada(){
       if(rodada==0){
           
           }else{
       std::cout << "RODADA ";
       std::cout << rodada;
       std::cout << " : ";
       std::cout << jogador;
       std::cout << " MARCOU EM ";
       std::cout << espaco;
       std::cout << ".\n";
           }
    }
void Jogada(string a);

void Iniciar(){
    string posicao;
    clrscr();
    std::cout << p1+"|"+p2+"|"+p3+"\n"+p4+"|"+p5+"|"+p6+"\n"+p7+"|"+p8+"|"+p9+"\n";
    Rodada();
    Computador();
    std::cout << status;
    std::cout << "ESOLHA A POSICÃO : \n";
    cin >> posicao;
    Jogada(posicao);
}

void Jogada(string jogada){
    if(jogada == "1" && p1 !="X" && p1 !="O"){
        p1 = "X";
        jogador = p1;
        rodada = rodada + 1;
        espaco = jogada;
        computador = 1;
        clrscr();
        Iniciar();
    }else if(jogada == "1" && p1 =="X" || jogada == "1" && p1 =="O"){
         status = "ESPAÇO USADO! ESCOLHA OUTRO ESPAÇO.\n";
         Iniciar();
     };
    if(jogada == "2" && p2 !="X" && p2 !="O"){
        p2 = "X";
        jogador = p2;
        rodada = rodada + 1;
        espaco = jogada;
        computador = 1;
        clrscr();
        Iniciar();
    }else if(jogada == "2" && p2 =="X" || jogada == "2" && p2 =="O"){
         status = "ESPAÇO USADO! ESCOLHA OUTRO ESPAÇO.\n";
         Iniciar();
     };
     
         if(jogada == "3" && p3 !="X" && p3 != "O"){
        p3 = "X";
        jogador = p3;
        rodada = rodada + 1;
        espaco = jogada;
        computador = 1;
        clrscr();
        Iniciar();
    }else if(jogada == "3" && p3 =="X" || jogada =="3" && p3 == "O"){
         status = "ESPAÇO USADO! ESCOLHA OUTRO ESPAÇO.\n";
         Iniciar();
     };
     
         if(jogada == "4" && p4 !="X" && p4 !="O"){
        p4 = "X";
        jogador = p4;
        rodada = rodada + 1;
        espaco = jogada;
        computador = 1;
        clrscr();
        Iniciar();
    }else if(jogada == "4" && p4 =="X" || jogada == "4" && p4 =="O"){
         status = "ESPAÇO USADO! ESCOLHA OUTRO ESPAÇO.\n";
         Iniciar();
     };
     
         if(jogada == "5" && p5 !="X" && p5 != "O"){
        p5 = "X";
        jogador = p5;
        rodada = rodada + 1;
        espaco = jogada;
        computador = 1;
        clrscr();
        Iniciar();
    }else if(jogada == "5" && p5 =="X" || jogada == "5" && p5 =="O"){
         status = "ESPAÇO USADO! ESCOLHA OUTRO ESPAÇO.\n";
         Iniciar();
     };
     
         if(jogada == "6" && p6 !="X" && p6 !="O"){
        p6 = "X";
        jogador = p6;
        rodada = rodada + 1;
        espaco = jogada;
        computador = 1;
        clrscr();
        Iniciar();
    }else if(jogada == "6" && p6 =="X" || jogada =="6" && p6 =="O"){
         status = "ESPAÇO USADO! ESCOLHA OUTRO ESPAÇO.\n";
         Iniciar();
     };
     
         if(jogada == "7" && p7 !="X" && p7 !="O"){
        p7 = "X";
        jogador = p7;
        rodada = rodada + 1;
        espaco = jogada;
        computador = 1;
        clrscr();
        Iniciar();
    }else if(jogada == "7" && p7 =="X" || jogada == "7" && p7 =="O"){
         status = "ESPAÇO USADO! ESCOLHA OUTRO ESPAÇO.\n";
         Iniciar();
     };
     
         if(jogada == "8" && p8 !="X" && p8 !="O"){
        p8 = "X";
        jogador = p8;
        rodada = rodada + 1;
        espaco = jogada;
        computador = 1;
        clrscr();
        Iniciar();
    }else if(jogada == "8" && p8 =="X" || jogada == "8" && p8 =="O"){
         status = "ESPAÇO USADO! ESCOLHA OUTRO ESPAÇO.\n";
         Iniciar();
     };
     
         if(jogada == "9" && p9 !="X" && p9 !="O"){
        p9 = "X";
        jogador = p9;
        rodada = rodada + 1;
        espaco = jogada;
        computador = 1;
        clrscr();
        Iniciar();
    }else if(jogada == "9" && p9 =="X" || jogada == "9" && p9 =="O"){
         status = "ESPAÇO USADO! ESCOLHA OUTRO ESPAÇO.\n";
         Iniciar();
     };
    }


void Computador(){
        if(computador == 1){
        std::random_device rd;  // Gera uma semente de números aleatórios
    std::mt19937 gen(rd()); // Inicializa o gerador de números aleatórios com a semente
    std::uniform_int_distribution<int> dist(1, 9); // Define a faixa de números (1 a 9)

    int numero_aleatorio = dist(gen); // Gera um número aleatório
    std::cout << "------------------------------\n";
    std::cout << "ESCOLHENDO O NUMERO ALEATORIO ENTRE 1 E 9 : " << numero_aleatorio << std::endl;
    std::cout <<"VERIFICANDO SE ESSE ESPAÇO ESTÁ LIVRE ...\n";
    if (numero_aleatorio == 1 && p1 !="X" && p1 != "O"){
        std::cout << "O ESPAÇO ";
        std::cout << numero_aleatorio;
        std::cout << " ESTÁ LIVRE !! \n";
        p1 = "O";
        computador = 0;
        Iniciar();
    }else if(numero_aleatorio == 1 && p1 == "X" || numero_aleatorio == 1 && p1 == "O" ){
        std::cout << "ESPAÇO USADO !!!\n";
        std::cout << "ESCOLHENDO OUTRO NUMERO ALEATÓRIO ...\n";
        Computador();
    };
    if(numero_aleatorio == 2 && p2 !="X" && p2 !="O"){
        std::cout << "O ESPAÇO ";
        std::cout << numero_aleatorio;
        std::cout << " ESTÁ LIVRE !! \n";
        p2 = "O";
        computador = 0;
        Iniciar();
        }else if(numero_aleatorio == 2 && p2 == "X" || numero_aleatorio == 2 && p2 =="O"){
        std::cout << "ESPAÇO USADO !!!\n";
        std::cout << "ESCOLHENDO OUTRO NUMERO ALEATÓRIO ...\n";
        Computador();
    };
        
     if(numero_aleatorio == 3 && p3 !="X" && p3 !="O"){
        std::cout << "O ESPAÇO ";
        std::cout << numero_aleatorio;
        std::cout << " ESTÁ LIVRE !! \n";
        p3 = "O";
        computador = 0;
        Iniciar();
        }else if(numero_aleatorio == 3 && p3 == "X" || numero_aleatorio == 3 && p3 == "O"){
        std::cout << "ESPAÇO USADO !!!\n";
        std::cout << "ESCOLHENDO OUTRO NUMERO ALEATÓRIO ...\n";
        Computador();
    };
        
     if(numero_aleatorio == 4 && p4 !="X" && p4 !="O"){
        std::cout << "O ESPAÇO ";
        std::cout << numero_aleatorio;
        std::cout << " ESTÁ LIVRE !! \n";
        p4 = "O";
        computador = 0;
        Iniciar();
        }else if(numero_aleatorio == 4 && p4 == "X" || numero_aleatorio == 4 && p4 == "O"){
        std::cout << "ESPAÇO USADO !!!\n";
        std::cout << "ESCOLHENDO OUTRO NUMERO ALEATÓRIO ...\n";
        Computador();
    };
        
      if(numero_aleatorio == 5 && p5 !="X" && p5 !="O"){
        std::cout << "O ESPAÇO ";
        std::cout << numero_aleatorio;
        std::cout << " ESTÁ LIVRE !! \n";
        p5 = "O";
        computador = 0;
        Iniciar();
        }else if(numero_aleatorio == 5 && p5 == "X" || numero_aleatorio == 5 && p5 =="O"){
        std::cout << "ESPAÇO USADO !!!\n";
        std::cout << "ESCOLHENDO OUTRO NUMERO ALEATÓRIO ...\n";
        Computador();
    };
        
      if(numero_aleatorio == 6 && p6 !="X" && p6 !="O"){
        std::cout << "O ESPAÇO ";
        std::cout << numero_aleatorio;
        std::cout << " ESTÁ LIVRE !! \n";
        p6 = "O";
        computador = 0;
        Iniciar();
        }else if(numero_aleatorio == 6 && p6 == "X" || numero_aleatorio == 6 && p6 =="O"){
        std::cout << "ESPAÇO USADO !!!\n";
        std::cout << "ESCOLHENDO OUTRO NUMERO ALEATÓRIO ...\n";
        Computador();
    };
        
      if(numero_aleatorio == 7 && p7 !="X" && p7 !="O"){
        std::cout << "O ESPAÇO ";
        std::cout << numero_aleatorio;
        std::cout << " ESTÁ LIVRE !! \n";
        p7 = "O";
        computador = 0;
        Iniciar();
        }else if(numero_aleatorio == 7 && p7 == "X" || numero_aleatorio == 7 && p7 == "O"){
        std::cout << "ESPAÇO USADO !!!\n";
        std::cout << "ESCOLHENDO OUTRO NUMERO ALEATÓRIO ...\n";
        Computador();
    };
        
      if(numero_aleatorio == 8 && p8 !="X" && p8 !="O"){
        std::cout << "O ESPAÇO ";
        std::cout << numero_aleatorio;
        std::cout << " ESTÁ LIVRE !! \n";
        p8 = "O";
        computador = 0;
        Iniciar();
        }else if(numero_aleatorio == 8 && p8 == "X" || numero_aleatorio == 8 && p8 == "O"){
        std::cout << "ESPAÇO USADO !!!\n";
        std::cout << "ESCOLHENDO OUTRO NUMERO ALEATÓRIO ...\n";
        Computador();
    };
        
        
     if(numero_aleatorio == 9 && p9 !="X" && p9 !="O"){
        std::cout << "O ESPAÇO ";
        std::cout << numero_aleatorio;
        std::cout << " ESTÁ LIVRE !! \n";
        p9 = "O";
        computador = 0;
        Iniciar();
        }else if(numero_aleatorio == 9 && p9 == "X" || numero_aleatorio == 9 && p9 == "O"){
        std::cout << "ESPAÇO USADO !!!\n";
        std::cout << "ESCOLHENDO OUTRO NUMERO ALEATÓRIO ...\n";
        Computador();
    };
}
}

void Menu(int a){
    if(a == 1){
        clrscr();
        return Iniciar();
        }else{
               return;
            }
};

int main(int argc, char *argv[])
{

	int escolha;
	std::cout << "1 - INICIAR \n2 - OPÇÕES \n3 - SOBRE\nESCOLHA O COMANDO : \n";
	cin >> escolha;
	Menu(escolha);
}