    #include <iostream>
	#include <stdio.h>
	#include <conio.h>
	#include <string.h>
	#include <time.h>
	#include <stdlib.h>

	#define ISIZE   100      // arbitrarily large
    #include "../lib/versionLib.h"  // "" == local lib 
    #include "../lib/styleLib.h"  // "" == local lib 

using namespace stylelib;
using namespace versionlib;


double num1, num2;
    int oper;
    char userinput[ISIZE + 1] = "";

int main(){

	system("cls");
	while (1) {



		printf(" =>");
		gets(userinput);

		//Close Cosm
		if (strcmp(userinput, "exit") == 0) {
			system("cls");
			printf("[cosm] ._.)=>Ok Bye (;-;) (press enter from close window)\n");
			break;
		}

		//VERSION
		else if (strcmp(userinput, "version") == 0) {
			system("cls");
			printf("\n\nCOSM CONSOLE  PRO RELEASE\n\nCopyright (c) 2021 Gabriel Luiz\n\nMIT License\n\n");
			version();
			printf("\n\n===================================================================================\n");
			printf(" Run 'manual' to see all available commands.\nMy Creator is  https://github.com/GabrielLuizSF\nOpen Source Repository:https://github.com/SCOSM7/cosm \n\n");
			printf("===================================================================================\n");

		}

		//HI
		else if (strcmp(userinput, "hi") == 0) {
			system("cls");
			printf("[cosm] ._.)=>Hello Master  \n");

		}

		//styles commands
		else if (strcmp(userinput, "styles") == 0) {
			system("cls");
			printf(ANSI_COLOR_BLUE"===============================================================================\n");
			printf("\n\nAll Available Commands =>\n\n\n");
			printf(ANSI_COLOR_RED"styleRed=>   Letra Vermelha\n\n");
			printf(ANSI_COLOR_BLUE"styleBlue=>  Letra Azul\n\n");
			printf(ANSI_COLOR_CYAN"styleCyan=>  Letra Ciano\n\n");
			printf(ANSI_COLOR_GREEN"styleGreen=>  Letra Verde\n\n");
			printf(ANSI_COLOR_PURPLE"stylePurple=>  Letra Roxo\n\n");
			printf(ANSI_COLOR_YELLOW"styleYellow=>  Letra Amarela\n\n");
			printf(ANSI_COLOR_RESET"resetStyle=>  Letra Padrao\n\n\n");
			printf(ANSI_COLOR_BLUE"===============================================================================\n");
		}
		else if (strcmp(userinput, "styleRed") == 0) {
			system("cls");
			styleRed();
			printf("[cosm] ._.)=> Red Selected\n");

		}
		else if (strcmp(userinput, "styleCyan") == 0) {
			system("cls");
			styleBlue();
			printf(ANSI_COLOR_CYAN"[cosm] ._.)=> Cyan Selected\n");

		}
		else if (strcmp(userinput, "stylePurple") == 0) {
			system("cls");
			stylePurple();
			printf(ANSI_COLOR_PURPLE"[cosm] ._.)=> Purple Selected\n");

		}
		else if (strcmp(userinput, "styleYellow") == 0) {
			system("cls");
			styleYellow();
			printf(ANSI_COLOR_YELLOW"[cosm] ._.)=> Yellow Selected\n");
		}
		else if (strcmp(userinput, "styleBlue") == 0) {
			system("cls");
			styleBlue();
			printf(ANSI_COLOR_BLUE"[cosm] ._.)=> Blue Selected\n");
		}

		else if (strcmp(userinput, "styleGreen") == 0) {
			system("cls");
			styleGreen();
			printf(ANSI_COLOR_GREEN"[cosm] ._.)=> Green Selected\n");
		}

		else if (strcmp(userinput, "resetStyle") == 0) {
			system("cls");
			resetStyle();
			printf(ANSI_COLOR_RESET"[cosm] ._.)=> Default Color\n");
		}



		//Systems codes
		else if (strcmp(userinput, "note") == 0) {
			system("start notepad");
			system("cls");
			printf("[cosm] ._.)=>Note open\n");

		}
		else if (strcmp(userinput, "code") == 0) {
			system("code");
			system("cls");
			printf("[cosm] ._.)==>Visual Studio Code open\n");

		} else if (strcmp(userinput, "cmd") == 0) {
			system("start cmd");
			system("cls");
			printf("[cosm] ._.)=>[cosm]=>Comand Prompt open\n");

		}

		//Websites commands
		else if (strcmp(userinput, "localhost") == 0) {
			system("start http://localhost:8080/");
			system("cls");
			printf("\n[cosm]._.)=>Localhost in the port 8080 open\n\n");
		}
		else if (strcmp(userinput, "google") == 0) {
			system("start https://google.com.br");
			system("cls");
			printf("[cosm] ._.)=>Google Open\n");

		}



		else if (strcmp(userinput, "github") == 0) {
			system("start https://github.com/GabrielLuizSF");
			system("cls");
			printf("[cosm] ._.)=>Github Open\n");

		} else if (strcmp(userinput, "youtube") == 0) {
			system("start https://youtube.com.br");
			system("cls");
			printf("[cosm] ._.)=>Youtube Open\n");

		} else if (strcmp(userinput, "whatsapp") == 0) {
			system("start https://web.whatsapp.com/");
			system("cls");
			printf("[cosm] ._.)=>Scan QRCode Now\n");
		}
		else if (strcmp(userinput, "netflix") == 0) {
			system("start https://www.netflix.com");
			system("cls");
			printf("[cosm] ._.)=>Netflix Open\n");

		}
		else if (strcmp(userinput, "stackoverflow") == 0) {
			system("start https://pt.stackoverflow.com");
			system("cls");
			printf("[cosm] ._.)==>Write you Question\n");

		}

		//Open Chrome
		else if (strcmp(userinput, "chrome") == 0) {
			system("start chrome");
			system("cls");
			printf("[cosm] ._.)==>Google Chrome Open\n");

		}

		//To see all available Drivers
		else if (strcmp(userinput, "Drivers") == 0) {
			system("cls");
			printf("[cosm]._.)=>All Drivers\n");
			system("Driverquery");

		}

		//Clock command
		else if (strcmp(userinput, "time") == 0) {
			system("cls");
         time_t s, val = 1;
         struct tm * current_time;
			//time in second
			s = time(NULL);
			current_time = localtime(& s);
			//print time in minute
			//print hour and second
			printf("[cosm]._.) ==> %02d:%02d:%02d\n", current_time -> tm_hour, current_time -> tm_min, current_time -> tm_sec);
		}


		//IP command
		else if (strcmp(userinput, "ip") == 0) {
			system("cls");
			printf("[cosm]._.)==>You IP\n");
			system("ipconfig /all");


		}

		//Poweroff command
		else if (strcmp(userinput, "poweroff") == 0) {
			system("cls");
			system("shutdown -s");
			printf("[cosm]._.)==>bye\n");

		}

		//suspend command
		else if (strcmp(userinput, "suspend") == 0) {
			system("cls");
			system("rundll32.exe PowrProf.dll,SetSuspendState");
			printf("[cosm] ._.)==>Welcome Back\n");
		}

		// Cosm Calc Command
		else if (strcmp(userinput, "calc") == 0) {
			system("cls");
			printf("\tCalculadora\n\n");

			printf("Introduza o primeiro numero: ");            // 1st operand
			fgets(userinput, ISIZE, stdin);
			num1 = atof(userinput);

			printf("Introduza o segundo numero: ");             // 2nd operand
			fgets(userinput, ISIZE, stdin);
			num2 = atof(userinput);

			printf("Escolha a operacao que quer realizar! ");   // operator
			fgets(userinput, ISIZE, stdin);
			oper = userinput[0];

			printf("O resultado e: %1.f %c %1.f = ", num1, oper, num2);

			switch (oper) {
				case '+': printf("%1.f\n", num1 + num2); break;
				case '-': printf("%1.f\n", num1 - num2); break;
				case '*': printf("%1.f\n", num1 * num2); break;
				case '/':
					if (num2 != 0) {
						printf("%1.f\n", num1 / num2);
					}
					else {
						printf("[error] Divisão por zero!\n");
						break;
					}
				default:
					printf("Eu nao sei o  operador\n");
			}


		}


		// Cosm Clear Command
		else if (strcmp(userinput, "clear") == 0) {
			system("cls");
		}

		//COSM Update Command
		else if (strcmp(userinput, "update") == 0) {
			system("start https://github.com/SCOSM7/cosm");
			system("cls");
			printf("===============================================================================\n");
			printf("Como Atualizar para a Nova Versao ?\n\n\n Esse site que abriu agora e onde e guardado o codigo fonte do Cosm\n\n Para voce baixar a nova versao basta procurar no README a versao LTS\n\n\n  Ao clicar no nome Download Windows vai baixar um arquivo zip\n\n\nSe tiver a versao 7.2 precisa substituir os arquivos da pasta bin pelos da versao LTS\n\n\nQue estao dentro de cosm>>>bin \n\n\n");
			printf("===============================================================================\n");
		}

		//COSM Manual Commands
		else if (strcmp(userinput, "manual") == 0) {
			system("cls");
			printf("===============================================================================\n");
			printf("Manage your Windows.\n\nCommands =>\n\n\n");
			//Open Systems codes
			printf("# note :\n\n=>Abre o bloco de Notas\n\n\n# code :\n\n=>Abre o Visual Studio Code\n\n\n# cmd :\n\n=>Abre o CMD\n\n\n# chrome :\n\n=> abre o chrome\n\n\n");
			//Styles codes
			printf("# styles :\n\n=> mostra todas as cores de letras disponiveis\n\n\n");
			//Open Website codes
			printf("# google :\n\n=>Abre o Google Search\n\n\n# github :\n\n =>Abre o github mas para funcionar devido a extrema seguranca do github voce precisa dar reload na pagina.\n\n\n# youtube :\n\n=>Abre o youtube\n\n\n");
			printf("# whatsapp :\n\n=> Abre o whatsapp\n\n\n# netflix :\n\n=> Abre a netflix\n\n\n# stackoverflow :\n\n=> salva voce tirando suas duvidas de programacao & abre o stackoverflow\n\n\n");
			//COSMchat
			printf("# exit :\n\n=>Fecha o Cosm\n\n\n# hi :\n\n=>diz oi ao Cosm\n\n\n# clear :\n\n=>limpa os codigos anteriores'funciona igual o cls do cmd'\n\n# version :\n\n=>mostra a versao do Cosm\n\n# calc :\n\n=>abre a calculadora do Cosm\n\n\n");
			//S.O codes
			printf("# time :\n\n => diz a hora\n\n\n# ip :\n\n=> revela todo o seu ip 'funciona igual o ipconfig /all do cmd so que neste terminal so precisa digitar ip'\n\n\n# poweroff :\n\n=> Desliga seu PC\n\n\n# Suspend :\n\n=>suspende o seu PC\n\n\n# Drivers :\n\n=>Mostra todos os Drivers\n\n\n# update :\n\n\n Leva ao repositorio no github para baixar a nova versao\n\n");
			printf("===============================================================================\n\n\n");
		} else if (strcmp(userinput, "") == 0) {
			printf("void not available \n");
		} else {
			printf("\n[cosm]??????\n\n\n[ERROR not available  %s ]\n\n\n", userinput);
		}

	}
	return 0;
}





