#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    string rede_ip  = "void";
    bool loop = true;
    string resposta;
    int function = 0;
    int option = 0;
    string identidade;
    int porta;
    while(loop == true)
    {
        if(function == 0)
        {
        porta = 0;
        rede_ip = "void";
        loop = false;
        rede_ip = "326.425.390";
        printf("olá você está na central de servidores");
        printf("\nno momento estamos com dificuldades para gerenciar nossos servidores");
        printf("\npara continuar digite algo e pressione enter:");
        cin >> resposta;
        loop = false;
        rede_ip = "void";
        printf("\nse quiser criar um servidor digite 1");
        printf("\nse quiser criar um servidor privado digite 2\n");
        printf("\nse quiser encerrar o atendimento digite 3");
        printf("\naguarde pois havera uma atualização adicionando uma nova opção:");
        cin >> option;
        loop = false;
        if(option == 1)
        {
            loop = true;
            printf("você escoleu a opção 1");
            printf("\npara continuar escreva algo e pressione enter");
            loop = false;
            cin >> resposta;
            printf("coloque o endereço ip do servidor a ser criado:");
            cin >> rede_ip;
            printf("a rede ip do servidor foi definida como:");
            cout << rede_ip;
            loop = false;;
            printf("\ncadastre um nome para o seu servidor:");
            cin >> identidade;
            printf("o nome do servidor foi cadastrado como:");
            cout << identidade;
            printf("\ncadastre uma porta que não seja maior que 999:");
            loop = false;
            cin >> porta;
        }
        if(porta >= 999)
        {
            loop = false;
            printf("a porta não é valida");
        }
        else 
        {
            loop = false;
            printf("a porta foi defenida como:");
            cout << porta;
            function = 1;
             if(function == 1)
        {
            printf("\no servidor público foi criado pronto para uso com os seguintes dados:");
            printf("\nnome do servidor:");
            cout << identidade;
            printf("\nrede ip:");
            cout << rede_ip;
            printf("\nporta do servidor:");
            cout << porta;
        }
        if(option == 2)
        {
            loop = true;
            printf("\na função escolhida foi a 2");
            printf("\nna função 2 você vai criar um servidor privado");
            loop = false;
            printf("\ncoloque a rede ip do servidor a ser criado:");
            cin >> rede_ip;
            loop = false;
            printf("a rede ip do servidor privado foi definida como:");
            cout << rede_ip;
            loop = false;
            printf("\ncadastre um nome para o seu servidor:");
            loop = false;
            cin >> identidade;
            loop = false;
            printf("o nome do servidor foi definido como:");
            cout << identidade;
            loop = true;
            printf("\ncadstre uma porta para o servidor:");
            loop = false;
            cin >> porta;
            printf("a porta do servidor foi definida como:");
            cout << porta;
            printf("\no servidor privado(apenas para você) foi criado pronto para uso com os seguintes dados:");
            loop = true;
            printf("\nrede ip:");
            cout << rede_ip;
            printf("\nnome do servidor:");
            cout << identidade;
            printf("\nporta do servidor:");
            cout << porta;
            loop = false;
        }
        if(option == 3)
        {
            loop = false;
            printf("\n\n\n\n\n\n\n\nvolte sempre");
            printf("\nscript feito por:cianofobia yt com o apoio de:hojcracker 1");
        }
        }
    }   
    }
}