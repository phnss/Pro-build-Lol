 /*
 ======================================================================================================
| Nome       : BuildsParaLOL.C                                                                          |
| Autor      : Pedro Henrique Nogueira da Silva Santos                                                  |
| Versão     : 0.01A                                                                                    |
| Copyright  : PHNSS©                                                                                   |
| Data       : 29/08/2019                                                                               |
| Descrição  : Programa em C que servirá para ajudar a ter uma noção de que itens fazer para um campeão |
|              do League of Legends, entre outras coisas.                                               |
|                                                                                                       |
 ======================================================================================================
 */
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

//função de boas vindas e para dizer o propósito do arquivo.
void BoasVindas(){
    puts("\tOlá esse programa serve para ajudar você a escolher os itens certos\n"
         "\tpara começar bem no jogo de League of Legends!\n"
         "\n\tO programa foi  baseado no patch 9.19 do jogo!");
}

//função de menu inicial da aplicação.
void TelaInicial(){
    printf("*************** Menu ***************\n"
           "\t1-Campeões\n"
           "\t2-Pesquisa por características\n"
           "\t3-Ajuda\n"
           "\t4-sair\n"
           "\n Digite o número da opção que deseja: ");
}

//Menu 2 usado para saber qual vai ser o filtro a ser usando para descobrir os campeões
void Menu2(){
    printf("Escolha por qual tipo de característica voçê que filtrar os Campeões!\n"
                           "\t1- Rota\n"
                           "\t2- Classe\n"
                           "\t3- Voltar\n");//Adicionei a opção voltar para deixar o programa mais fluído, se o usuário entrar em algum lugar por em engano, possa voltar para onde queira
}

//Menu 3 usado para descobrir o filtro que vai ser usado para organizar os campeões de acordo com a rota mais comum deles
void Menu3(){
    printf("Escolha por qual tipo de rota você gostaria escolher seu Campeão!\n"
                                    "\t1- Rota superior\n"
                                    "\t2- Selva\n"
                                    "\t3- Rota do meio\n"
                                    "\t4- Rota inferior\n"
                                    "\t5- Voltar");
}

//Menu 4 usado para descobrir o filtro que vai ser usado para organizar os campeões de acordo com a classe deles
void Menu4(){
    printf("Escolha por qual tipo de classe você gostaria de escolher seu Campeão!\n"
           "\t1- Lutador\n"
           "\t2- Assassino\n"
           "\t3- Mago\n"
           "\t4- Tank\n"
           "\t5- Atirador\n"
           "\t6- Voltar\n");

}

//função de finalização do arquivo.
void Adeus(){
    puts("\tEspero ter ajudado, até a proxima vez Invocador.");
}

//Função recebe como Parâmetro o endereço da string que contem o nome do campeão escolhido.
void ImprimiBuildDoCampeao(const char *campeao){
    FILE *fp;
    char c;
    int valor = 0;

    // Ela irá comparar a string que recebeu com os nomes dos campeões, e fará a impressão do arquivo txt sobre o campeão.
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
        printf("Campeão indisponível ou erro de digitação.\n");
    }
}



int main(void){
    FILE *fp;

    char c;
    //A varíavel opção terá função para todos os menus, pois funciona(de acordo com os meus testes)
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
        scanf("%d", &opcaoSelecionada);//saber qual foi a opção do menu selecionada.

        switch(opcaoSelecionada){//de acordo com qual opção foi selecionada, há uma função a ser executada.
            case 1://se for escolhido a primeira opção, o usuário escolherá o campeão pelo nome.

                system("cls");
                printf("\tQual campeão você deseja se aprofundar?(primeira palavra do nome em maiúsculo/Caso queira voltar, escreva: voltar)\n \tDigite o nome dele(a): ");
                scanf("%s", campeao);

                if(strcmp(campeao, "Voltar") == 0 || strcmp(campeao, "voltar") == 0){
                    system("cls");
                    break;
                }else{
                ImprimiBuildDoCampeao(campeao);//Irá ser repassado para a fnçao, qual foi o campeão especificado, e nela mesmo vai imprimir o arquivo que contem o conteudo sobre o campeão selecionado
                }
                break;

            case 2://Esse será o caso que terá mais funcionalidade, talvez seja o mais importante deste programa devido a sua complexidade
                system("cls");

                while(1){//A partir de agora terá diversos menus dentro de menus, a sua visualização possa ser um pouco complicada

                    Menu2();

                    printf("\nDigite o número da opção que deseja: ");
                    scanf("%d", &opcaoSelecionada);

                    if(opcaoSelecionada==3){//Opção de número 3 para voltar ao menu principal
                        system("cls");
                        break;
                    }

                    switch(opcaoSelecionada){//Opção de número 2 para filtrar os campeões com base em suas rotas mais comuns
                        case 1:
                            system("cls");
                            while(1){

                                Menu3();

                                printf("\nDigite o número da opção que deseja: ");
                                scanf("%d", &opcaoSelecionada);

                                if(opcaoSelecionada==5){
                                    system("cls");
                                    break;
                                }


                                switch(opcaoSelecionada){
                                    case 1:
                                        system("cls");

                                        printf("Campeôes da rota superior: \n");

                                        for(i=0; i<sizeof(topo)/sizeof(topo[0]); i++){//função para imprimir todos as strings no array, as enumerando e trabalhando em seu tamanho.
                                            printf("\t#%d- %s\n", i+1, topo[i]);

                                        }

                                        printf("Digite o número do campeão que você queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(topo)/sizeof(topo[0])){
                                            system("cls");
                                            printf("Opção invalída.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(topo[i-1]);
                                            system("cls");
                                        }

                                        break;

                                    case 2:
                                        system("cls");

                                        printf("Campeôes da selva: \n");

                                        for(i=0; i<sizeof(selva)/sizeof(selva[0]); i++){
                                            printf("\t#%d- %s\n", i+1, selva[i]);

                                        }

                                        printf("Digite o número do campeão que você queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(selva)/sizeof(selva[0])){
                                            system("cls");
                                            printf("Opção invalída.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(selva[i-1]);
                                            system("cls");
                                        }

                                        break;

                                    case 3:
                                        system("cls");

                                        printf("Campeôes da rota do meio: \n");

                                        for(i=0; i<sizeof(meio)/sizeof(meio[0]); i++){
                                            printf("\t#%d- %s\n", i+1, meio[i]);

                                        }

                                        printf("Digite o número do campeão que você queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(meio)/sizeof(meio[0])){
                                            system("cls");
                                            printf("Opção invalída.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(meio[i-1]);
                                            system("cls");
                                        }
                                        break;

                                    case 4://Este caso tem uma singulariedade dos outros, pois a rota inferoir engloba dois tipos de campeões, para obedecer a isso
                                           //Trabalhei com size of para manter a lineariedade das ideias.
                                        system("cls");

                                        printf("Campeôes da rota inferior: \n");

                                        for(i=0; i<sizeof(adc)/sizeof(adc[0]); i++){
                                            printf("\t#%d- %s\n", i+1, adc[i]);

                                        }
                                        puts("");//Apenas para deixar organizado quando for printar na tela os campeões da rota inferior
                                        for(i=0; i<sizeof(suporte)/sizeof(suporte[0]); i++){
                                            printf("\t#%d- %s\n", i+1+sizeof(adc)/sizeof(adc[0]), suporte[i]);

                                        }

                                        printf("Digite o número do campeão que você queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i> sizeof(suporte)/sizeof(suporte[0])){
                                            system("cls");
                                            printf("Opção invalída.\n");

                                        }

                                        system("cls");// dependendo do valor de I, ele vai para uma função.
                                        if(i<=sizeof(adc)/sizeof(adc[0])){
                                            ImprimiBuildDoCampeao(adc[i-1]);
                                        }else{
                                            ImprimiBuildDoCampeao(suporte[i-1-sizeof(adc)/sizeof(adc[0])]);
                                        }

                                        system("cls");
                                        break;

                                    default:
                                        system("cls");
                                        printf("Opção invalída.\n");
                                }


                            }

                            break;

                        case 2:
                            system("cls");
                            while(1){
                                Menu4();

                                printf("\nDigite o número da opção que deseja: ");
                                scanf("%d", &opcaoSelecionada);

                                if(opcaoSelecionada==6){
                                    system("cls");
                                    break;
                                }

                                switch(opcaoSelecionada){
                                    case 1:
                                        system("cls");

                                        printf("Campeôes duelistas: \n");

                                        for(i=0; i<sizeof(lutador)/sizeof(lutador[0]); i++){
                                            printf("\t#%d- %s\n", i+1, lutador[i]);

                                        }

                                        printf("Digite o número do campeão que você queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(lutador)/sizeof(lutador[0])){
                                            system("cls");
                                            printf("Opção invalída.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(lutador[i-1]);
                                            system("cls");
                                        }

                                        break;

                                    case 2:
                                        system("cls");

                                        printf("Campeôes Assassinos: \n");

                                        for(i=0; i<sizeof(assasino)/sizeof(assasino[0]); i++){
                                            printf("\t#%d- %s\n", i+1, assasino[i]);

                                        }

                                        printf("Digite o número do campeão que você queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(assasino)/sizeof(assasino[0])){
                                            system("cls");
                                            printf("Opção invalída.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(assasino[i-1]);
                                            system("cls");
                                        }

                                        break;

                                    case 3:
                                        system("cls");

                                        printf("Campeôes Magos: \n");

                                        for(i=0; i<sizeof(mago)/sizeof(mago[0]); i++){
                                            printf("\t#%d- %s\n", i+1, mago[i]);

                                        }

                                        printf("Digite o número do campeão que você queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(mago)/sizeof(mago[0])){
                                            system("cls");
                                            printf("Opção invalída.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(mago[i-1]);
                                            system("cls");
                                        }

                                        break;
                                    case 4:
                                        system("cls");

                                        printf("Campeôes Tank(Suportam grandes quantidades de dano): \n");

                                        for(i=0; i<sizeof(tank)/sizeof(tank[0]); i++){
                                            printf("\t#%d- %s\n", i+1, tank[i]);

                                        }

                                        printf("Digite o número do campeão que você queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(tank)/sizeof(tank[0])){
                                            system("cls");
                                            printf("Opção invalída.\n");
                                        }else{
                                            system("cls");
                                            ImprimiBuildDoCampeao(tank[i-1]);
                                            system("cls");
                                        }

                                        break;
                                    case 5:
                                        system("cls");

                                        printf("Campeôes Atiradores: \n");

                                        for(i=0; i<sizeof(atirador)/sizeof(atirador[0]); i++){
                                            printf("\t#%d- %s\n", i+1, atirador[i]);

                                        }

                                        printf("Digite o número do campeão que você queira se aprofundar/caso queira voltar digite 0: ");
                                        scanf("%d", &i);

                                        if(i == 0){
                                            system("cls");
                                            break;
                                        }else if(i>sizeof(atirador)/sizeof(atirador[0])){
                                            system("cls");
                                            printf("Opção invalída.\n");
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
                            printf("Opção inválida.\n");
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
                puts("Opção inválida.");
        }
    }
    return 0;
}
