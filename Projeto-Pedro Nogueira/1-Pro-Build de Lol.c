 /*
 ======================================================================================================
| Nome       : BuildsParaLOL.C                                                                          |
| Autor      : Pedro Henrique Nogueira da Silva Santos                                                  |
| Vers�o     : 0.01A                                                                                    |
| Copyright  : PHNSS�                                                                                   |
| Data       : 29/08/2019                                                                               |
| Descri��o  : Programa em C que servir� para ajudar a ter uma no��o de que itens fazer para um campe�o |
|              do League of Legends, entre outras coisas.                                               |
|                                                                                                       |
 ======================================================================================================
 */
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

//fun��o de boas vindas e para dizer o prop�sito do arquivo.
void BoasVindas(){
    puts("\tOl� esse programa serve para ajudar voc� a escolher os itens certos\n"
         "\tpara come�ar bem no jogo de League of Legends!\n"
         "\n\tO programa foi  baseado no patch 9.19 do jogo!");
}

//fun��o de menu inicial da aplica��o.
void TelaInicial(){
    printf("*************** Menu ***************\n"
           "\t1-Campe�es\n"
           "\t2-Pesquisa por caracter�sticas\n"
           "\t3-Ajuda\n"
           "\t4-sair\n"
           "\n Digite o n�mero da op��o que deseja: ");
}

//Menu 2 usado para saber qual vai ser o filtro a ser usando para descobrir os campe�es
void Menu2(){
    printf("Escolha por qual tipo de caracter�stica vo�� que filtrar os Campe�es!\n"
                           "\t1- Rota\n"
                           "\t2- Classe\n"
                           "\t3- Voltar\n");//Adicionei a op��o voltar para deixar o programa mais flu�do, se o usu�rio entrar em algum lugar por em engano, possa voltar para onde queira
}

//Menu 3 usado para descobrir o filtro que vai ser usado para organizar os campe�es de acordo com a rota mais comum deles
void Menu3(){
    printf("Escolha por qual tipo de rota voc� gostaria escolher seu Campe�o!\n"
                                    "\t1- Rota superior\n"
                                    "\t2- Selva\n"
                                    "\t3- Rota do meio\n"
                                    "\t4- Rota inferior\n"
                                    "\t5- Voltar");
}

//Menu 4 usado para descobrir o filtro que vai ser usado para organizar os campe�es de acordo com a classe deles
void Menu4(){
    printf("Escolha por qual tipo de classe voc� gostaria de escolher seu Campe�o!\n"
           "\t1- Lutador\n"
           "\t2- Assassino\n"
           "\t3- Mago\n"
           "\t4- Tank\n"
           "\t5- Atirador\n"
           "\t6- Voltar\n");

}

//fun��o de finaliza��o do arquivo.
void Adeus(){
    puts("\tEspero ter ajudado, at� a proxima vez Invocador.");
}

//Fun��o recebe como Par�metro o endere�o da string que contem o nome do campe�o escolhido.
void ImprimiBuildDoCampeao(const char *campeao){
    FILE *fp;
    char c;
    int valor = 0;

    // Ela ir� comparar a string que recebeu com os nomes dos campe�es, e far� a impress�o do arquivo txt sobre o campe�o.
    if(strcmp(campeao, "Aatrox")==0){
        fp = fopen("Aatrox.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Ahri")==0){
        fp = fopen("Ahri.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Akali")==0){
        fp = fopen("Akali.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Alistar")==0){
        fp = fopen("Alistar.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Ashe")==0){
        fp = fopen("Ashe.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Garen")==0){
        fp = fopen("Garen.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Darius")==0){
        fp = fopen("Darius.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Kai'sa")==0){
        fp = fopen("Kai'sa.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Xayah")==0){
        fp = fopen("Xayah.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Ezreal")==0){
        fp = fopen("Ezreal.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Tristana")==0){
        fp = fopen("Tristana.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Braum")==0){
        fp = fopen("Braum.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Nautilus")==0){
        fp = fopen("Nautilus.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Pyke")==0){
        fp = fopen("Pyke.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Fiora")==0){
        fp = fopen("Fiora.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Irelia")==0){
        fp = fopen("Irelia.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Yasuo")==0){
        fp = fopen("Yasuo.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Sylas")==0){
        fp = fopen("Sylas.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Jarvan")==0){
        fp = fopen("Jarvan.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Tahm Kench")==0 || strcmp(campeao, "Tahm")==0){
        fp = fopen("Tahm Kench.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Gragas")==0){
        fp = fopen("Gragas.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Lee Sin")==0 || strcmp(campeao, "Lee")==0){
        fp = fopen("Lee Sin.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Pantheon")==0){
        fp = fopen("Pantheon.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else if(strcmp(campeao, "Sejuani")==0){
        fp = fopen("Sejuani.txt", "r");

        if(fp == NULL){
            system("cls");
            printf("impossivel abrir o arquivo\n");
            TelaInicial();
        }
        while(1){
            fscanf(fp, "%c", &c);
            if(feof(fp))
            break;
            printf("%c", c);
        }
        fclose(fp);
        puts("");
        system("pause");
        system("cls");

    }else{
        system("cls");
        printf("Campe�o indispon�vel ou erro de digita��o.\n");
    }
}



int main(void){
    FILE *fp;

    char c;
    //A var�avel op��o ter� fun��o para todos os menus, pois funciona(de acordo com os meus testes)
    int opcaoSelecionada, i;

    char campeao[20];

    char topo[][15] = {"Aatrox", "Akali", "Darius", "Fiora", "Garen", "Irelia", "Sylas", "Yasuo", "Pantheon"};
    char selva[][15] = {"Jarvan", "Sylas", "Gragas", "Lee Sin", "Pantheon", "Sejuani"};
    char meio[][15] = {"Aatrox", "Ahri", "Akali", "Irelia", "Pyke", "Sylas", "Yasuo"};
    char adc[][15] = {"Ashe", "Ezreal", "Kai'sa", "Tristana", "Xayah"};
    char suporte[][15] = {"Alistar", "Braum", "Nautilus", "Pyke", "Tahm Kench"};

    char lutador[][15] = {"Aatrox", "Lee Sin", "Darius", "Fiora", "Garen", "Irelia", "Jarvan", "Yasuo", "Pantheon", "Sejuani", "Gragas"};
    char assasino[][15] = {"Lee Sin", "Akali", "Pyke", "Fiora", "Ahri", "Irelia", "Sylas", "Yasuo", "Pantheon", "Tristana"};
    char tank[][15] = {"Aatrox", "Jarvan", "Darius", "Alistar", "Garen", "Braum", "Sejuani", "Nautilus", "Tahm Kench"};
    char mago[][15] = {"Sylas", "Ezreal", "Gragas", "Ahri"};
    char atirador[][15] = {"Ashe", "Ezreal", "Kai'sa", "Tristana", "Xayah"};

    setlocale(LC_ALL, "Portuguese");

    BoasVindas();
    system("pause");
    system("cls");

    while(1){
        TelaInicial();// mostrar o menu do programa.
        scanf("%d", &opcaoSelecionada);//saber qual foi a op��o do menu selecionada.

        switch(opcaoSelecionada){//de acordo com qual op��o foi selecionada, h� uma fun��o a ser executada.
            case 1://se for escolhido a primeira op��o, o usu�rio escolher� o campe�o pelo nome.

                system("cls");
                printf("\tQual campe�o voc� deseja se aprofundar?(primeira palavra do nome em mai�sculo/Caso queira voltar, escreva: voltar)\n \tDigite o nome dele(a): ");
                scanf("%s", campeao);

                if(strcmp(campeao, "Voltar") == 0 || strcmp(campeao, "voltar") == 0){
                    system("cls");
                    break;
                }else{
                ImprimiBuildDoCampeao(campeao);//Ir� ser repassado para a fn�ao, qual foi o campe�o especificado, e nela mesmo vai imprimir o arquivo que contem o conteudo sobre o campe�o selecionado
                }
                break;

            case 2://Esse ser� o caso que ter� mais funcionalidade, talvez seja o mais importante deste programa devido a sua complexidade
                system("cls");

                while(1){//A partir de agora ter� diversos menus dentro de menus, a sua visualiza��o possa ser um pouco complicada

                    Menu2();

                    printf("\nDigite o n�mero da op��o que deseja: ");
                    scanf("%d", &opcaoSelecionada);

                    if(opcaoSelecionada==3){//Op��o de n�mero 3 para voltar ao menu principal
                        system("cls");
                        break;
                    }

                    switch(opcaoSelecionada){//Op��o de n�mero 2 para filtrar os campe�es com base em suas rotas mais comuns
                        case 1:
                            system("cls");
                            while(1){

                                Menu3();

                                printf("\nDigite o n�mero da op��o que deseja: ");
                                scanf("%d", &opcaoSelecionada);

                                if(opcaoSelecionada==5){
                                    system("cls");
                                    break;
                                }


                                switch(opcaoSelecionada){
                                    case 1:
                                        system("cls");

                                        printf("Campe�es da rota superior: \n");

                                        for(i=0; i<sizeof(topo)/sizeof(topo[0]); i++){//fun��o para imprimir todos as strings no array, as enumerando e trabalhando em seu tamanho.
                                            printf("\t#%d- %s\n", i+1, topo[i]);

                                        }

                                        printf("Digite o n�mero do campe�o que voc� queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(topo)/sizeof(topo[0])){
                                            system("cls");
                                            printf("Op��o inval�da.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(topo[i-1]);
                                            system("cls");
                                        }

                                        break;

                                    case 2:
                                        system("cls");

                                        printf("Campe�es da selva: \n");

                                        for(i=0; i<sizeof(selva)/sizeof(selva[0]); i++){
                                            printf("\t#%d- %s\n", i+1, selva[i]);

                                        }

                                        printf("Digite o n�mero do campe�o que voc� queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(selva)/sizeof(selva[0])){
                                            system("cls");
                                            printf("Op��o inval�da.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(selva[i-1]);
                                            system("cls");
                                        }

                                        break;

                                    case 3:
                                        system("cls");

                                        printf("Campe�es da rota do meio: \n");

                                        for(i=0; i<sizeof(meio)/sizeof(meio[0]); i++){
                                            printf("\t#%d- %s\n", i+1, meio[i]);

                                        }

                                        printf("Digite o n�mero do campe�o que voc� queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(meio)/sizeof(meio[0])){
                                            system("cls");
                                            printf("Op��o inval�da.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(meio[i-1]);
                                            system("cls");
                                        }
                                        break;

                                    case 4://Este caso tem uma singulariedade dos outros, pois a rota inferoir engloba dois tipos de campe�es, para obedecer a isso
                                           //Trabalhei com size of para manter a lineariedade das ideias.
                                        system("cls");

                                        printf("Campe�es da rota inferior: \n");

                                        for(i=0; i<sizeof(adc)/sizeof(adc[0]); i++){
                                            printf("\t#%d- %s\n", i+1, adc[i]);

                                        }
                                        puts("");//Apenas para deixar organizado quando for printar na tela os campe�es da rota inferior
                                        for(i=0; i<sizeof(suporte)/sizeof(suporte[0]); i++){
                                            printf("\t#%d- %s\n", i+1+sizeof(adc)/sizeof(adc[0]), suporte[i]);

                                        }

                                        printf("Digite o n�mero do campe�o que voc� queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i> sizeof(suporte)/sizeof(suporte[0])){
                                            system("cls");
                                            printf("Op��o inval�da.\n");

                                        }

                                        system("cls");// dependendo do valor de I, ele vai para uma fun��o.
                                        if(i<=sizeof(adc)/sizeof(adc[0])){
                                            ImprimiBuildDoCampeao(adc[i-1]);
                                        }else{
                                            ImprimiBuildDoCampeao(suporte[i-1-sizeof(adc)/sizeof(adc[0])]);
                                        }

                                        system("cls");
                                        break;

                                    default:
                                        system("cls");
                                        printf("Op��o inval�da.\n");
                                }


                            }

                            break;

                        case 2:
                            system("cls");
                            while(1){
                                Menu4();

                                printf("\nDigite o n�mero da op��o que deseja: ");
                                scanf("%d", &opcaoSelecionada);

                                if(opcaoSelecionada==6){
                                    system("cls");
                                    break;
                                }

                                switch(opcaoSelecionada){
                                    case 1:
                                        system("cls");

                                        printf("Campe�es duelistas: \n");

                                        for(i=0; i<sizeof(lutador)/sizeof(lutador[0]); i++){
                                            printf("\t#%d- %s\n", i+1, lutador[i]);

                                        }

                                        printf("Digite o n�mero do campe�o que voc� queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(lutador)/sizeof(lutador[0])){
                                            system("cls");
                                            printf("Op��o inval�da.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(lutador[i-1]);
                                            system("cls");
                                        }

                                        break;

                                    case 2:
                                        system("cls");

                                        printf("Campe�es Assassinos: \n");

                                        for(i=0; i<sizeof(assasino)/sizeof(assasino[0]); i++){
                                            printf("\t#%d- %s\n", i+1, assasino[i]);

                                        }

                                        printf("Digite o n�mero do campe�o que voc� queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(assasino)/sizeof(assasino[0])){
                                            system("cls");
                                            printf("Op��o inval�da.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(assasino[i-1]);
                                            system("cls");
                                        }

                                        break;

                                    case 3:
                                        system("cls");

                                        printf("Campe�es Magos: \n");

                                        for(i=0; i<sizeof(mago)/sizeof(mago[0]); i++){
                                            printf("\t#%d- %s\n", i+1, mago[i]);

                                        }

                                        printf("Digite o n�mero do campe�o que voc� queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(mago)/sizeof(mago[0])){
                                            system("cls");
                                            printf("Op��o inval�da.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(mago[i-1]);
                                            system("cls");
                                        }

                                        break;
                                    case 4:
                                        system("cls");

                                        printf("Campe�es Tank(Suportam grandes quantidades de dano): \n");

                                        for(i=0; i<sizeof(tank)/sizeof(tank[0]); i++){
                                            printf("\t#%d- %s\n", i+1, tank[i]);

                                        }

                                        printf("Digite o n�mero do campe�o que voc� queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(tank)/sizeof(tank[0])){
                                            system("cls");
                                            printf("Op��o inval�da.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(tank[i-1]);
                                            system("cls");
                                        }

                                        break;
                                    case 5:
                                        system("cls");

                                        printf("Campe�es Atiradores: \n");

                                        for(i=0; i<sizeof(atirador)/sizeof(atirador[0]); i++){
                                            printf("\t#%d- %s\n", i+1, atirador[i]);

                                        }

                                        printf("Digite o n�mero do campe�o que voc� queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(atirador)/sizeof(atirador[0])){
                                            system("cls");
                                            printf("Op��o inval�da.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(atirador[i-1]);
                                            system("cls");
                                        }

                                        break;
                                }
                            }
                            break;
                        default:
                            system("cls");
                            printf("Op��o inv�lida.\n");
                    }

                }

                break;
            case 3:
                system("cls");
                fp = fopen("Ajuda.txt", "r");

                if(fp == NULL){
                    system("cls");
                    printf("impossivel abrir o arquivo\n");
                    TelaInicial();
                }
                while(1){
                    fscanf(fp, "%c", &c);
                    if(feof(fp))
                    break;
                    printf("%c", c);
                }
                fclose(fp);
                puts("");
                system("pause");
                system("cls");
                break;

            case 4:
                system("cls");
                Adeus();
                return 0;
            default:
                system("cls");
                puts("Op��o inv�lida.");
        }
    }
    return 0;
}
