#include <stdio.h>

void carregamento() {
    printf("\t ----------------------------- \n");
}

void menuInicial() {
    printf("\t================================\n");
    printf("\t\t      MENU\n");
    printf("\t================================\n");
    printf("\t 1 - QUILOMETRO (Km);\n"
           "\t 2 - METRO (m);\n"
           "\t 3 - CENTIMETRO (cm);\n"
           "\t 4 - MILIMETRO (mm);\n"
           "\t 0 - SAIR.\n");
           carregamento();
           printf("Digite o valor correspondente a unidade inicial: ");
}

/**
 * Menu para auxiliar na conversão de quilômetro
 * para centímetro
 */
void menuQuilometro() {
    printf("\t================================\n");
    printf("\t  CONVERTER DE QUILOMETRO PARA  \n");
    printf("\t================================\n");
    printf("\t 1 - CENTIMETRO (cm);\n"
            "\t 2 - TODAS AS UNIDADES (m, cm, mm);\n"
           "\t 0 - VOLTAR AO MENU INICIAL.\n");
    carregamento();
}

/**
 * Menu para auxiliar na conversão de metro
 * para centímetro ou milímetro 
 */
void menuMetro() {
    printf("\t================================\n");
    printf("\t     CONVERTER DE METRO PARA    \n");
    printf("\t================================\n");
    printf("\t 1 - CENTIMETRO (cm);\n"
           "\t 2 - MILIMETRO (mm);\n"
           "\t 0 - VOLTAR AO MENU INICIAL.\n");
           carregamento();
}

/**
 * Menu para auxiliar na conversão de centímetro
 * para metro ou milímetro 
 */
void menuCentimetro() {
    printf("\t================================\n");
    printf("\t  CONVERTER DE CENTIMETRO PARA  \n");
    printf("\t================================\n");
    printf("\t 1 - METRO (m);\n"
           "\t 2 - MILIMETRO (mm);\n"
           "\t 0 - VOLTAR AO MENU INICIAL.\n");
           carregamento();
}

//Menu auxiliar para conversão de milímetro para outra unidade a escolha do usuario
void menuMilimetro() {
    printf("\t================================\n");
    printf("\t  CONVERTER DE MILIMETRO PARA   \n");
    printf("\t================================\n");
    printf("\t 1 - CENTIMETRO (cm);\n"
           "\t 2 - METRO (m);\n"
           "\t 0 - VOLTAR AO MENU INICIAL.\n");
           carregamento();
}

int main() {
    int primeiraOpcao, segundaOpcao;
    float valor;

    printf("\nOla! Bem vindo(a) ao nosso Sistema de Conversao de Unidades de Comprimento!\n");
    printf("\t Segue o nosso MENU para auxilia-lo(a):\n");

    do {
        menuInicial();
        scanf("%d", &primeiraOpcao);
        carregamento();

        switch (primeiraOpcao) {
            case 0: {
                break;
            }
            case 1: {
                //printf("Voce escolheu a unidade de quilometro (Km).\n");
                //printf("Voce deseja converter de quilometro para: \n");
                menuQuilometro();
                printf("\nDigite o valor correspondente a unidade que deseja converter: ");
                scanf("%d", &segundaOpcao);
                carregamento();

                switch (segundaOpcao) {
                    case 0: {
                        printf("Voltando ao menu inicial.\n");
                        break;
                    }
                    /* Convertendo de metro para centímetro */
                    case 1: {
                        printf("Voce escolheu a unidade de centimetro (cm).\n");
                        printf("Digite o valor em quilometros (Km) para converte-lo em centimetros (cm): ");
                        scanf("%f", &valor);
                        printf("%.2f quilometros (Km) equivalem a %.2f centimetros (cm).\n", valor, valor * 100000);
                        break;
                    }

                    /* Convertendo de metro para milímetro*/
                    case 2: {
                        printf("Voce escolheu a conversao para todas as unidades.\n");
                        printf("Digite o valor em quilometros (Km): ");
                        scanf("%f", &valor);
                        carregamento();

                        // ##Conversão Geral##
                        printf("%.2f quilometros (Km) equivalem a:\n", valor);
                        printf("  - %.2f metros (m);\n", valor * 1000);
                        printf("  - %.2f centimetros (cm);\n", valor * 100000);
                        printf("  - %.2f milimetros (mm).\n", valor * 1000000);

                        break;
                    }

                    default: {
                        if (segundaOpcao != 0) {
                            printf("Opçao invalida!\n");
                        }
                        break;
                    }
                }
                break;
            }

            case 2: {       
                //printf("Voce escolheu a unidade de metro (m).\n\n");
                //printf("Voce deseja converter de metro para: \n");
                menuMetro();
                printf("Digite o valor correspondente a unidade que deseja converter: ");
                scanf("%d", &segundaOpcao);
                carregamento();

                switch (segundaOpcao) {
                    case 0: {
                        printf("Voltando ao menu inicial.\n");
                        break;
                    }
                    /* Convertendo de metro para centímetro */
                    case 1: {
                        printf("Voce escolheu a unidade de centimetro (cm).\n");
                        printf("Digite o valor em metros (m) para converte-lo em centimetros (cm): ");
                        scanf("%f", &valor);
                        carregamento();
                        printf("%.2f metros (m) equivalem a %.2f centimetros (cm).\n", valor, valor * 100);
                        break;
                    }

                    /* Convertendo de metro para milímetro*/
                    case 2: {
                        printf("Voce escolheu a unidade de milimetro (mm).\n");
                        printf("Digite o valor em metros (m) para converte-lo em milimetros (mm): ");
                        scanf("%f", &valor);
                        carregamento();
                        printf("%.2f metros (m) equivalem a %.2f milimetros (mm).\n", valor, valor * 1000);
                        break;
                    }

                    default: {
                        if (segundaOpcao != 0) {
                            printf("Opçao invalida!\n");
                        }
                        break;
                    }
                }
                break;
            }

            /* Conversão de centímetro para outra medida a ser escolhida */
            case 3: {
                //printf("Voce escolheu a unidade de centimetro (cm).\n\n");
                //printf("Voce deseja converter de centimetro para: \n");
                menuCentimetro();
                printf("Digite o valor correspondente a unidade que deseja converter: ");
                scanf("%d", &segundaOpcao);
                carregamento();

                switch (segundaOpcao){
                    case 0:
                        printf("Voltando ao menu inicial.\n");
                        break;

                    /* Case para conversão de centímetro para metro*/
                    case 1: {
                        printf("Voce escolheu a unidade de metro (m).\n");
                        printf("Digite o valor em centimetros (cm) para converte-lo em metro (m): ");
                        scanf("%f", &valor);
                        carregamento();
                        printf("%.2f centimetro(s) (cm) equivalem a %.2f metro(s) (m).\n", valor, valor / 100);
                        break;
                    } 
                    /* Case para conversão de centímetro para milimetro*/
                    case 2: {
                        printf("Voce escolheu a unidade de milimetro (mm).\n");
                        printf("Digite o valor em centimetros (cm) para converte-lo em milimetro (mm): ");
                        scanf("%f", &valor);
                        carregamento();
                        printf("%.2f centimetro(s) (cm) equivalem a %.2f milimetro(s) (mm).\n", valor, valor *10.0);
                        break;
                    }    
                    case 3: {
                        
                        break;
                    }
                    
                    default:
                        printf("Opçao invalida!\n");
                        break;
                        
                    }
                break;
            }

            /* Conversão de milímetro para outra medida a ser escolhida */
            case 4: {
                //printf("Voce escolheu a unidade de milimetro (mm).\n");
                //printf("Voce deseja converter de milimetro para: \n");
                menuMilimetro();
                printf("Digite o valor correspondente a unidade que deseja converter: ");
                scanf("%d", &segundaOpcao);
                carregamento();
                
                switch (segundaOpcao)
                {
                case 0:
                    printf("Voltando ao menu inicial.\n");
                    break;
                // mm para cm
                case 1: {
                    printf("Voce escolheu a unidade milimetro (mm).\n");
                    printf("Digite o valor em milimetros (mm) para converte-lo em centimetros (cm): ");
                    scanf("%f", &valor);
                    printf("\n%.2f milimetro(s) (mm) equivalem a %.2f centimetro(s) (cm).\n", valor, valor / 10);
                    break;
                } // mm para m
                case 2: {
                        printf("Voce escolheu a unidade milimetro (mm).\n");
                        printf("Digite o valor em milimetros (mm) para converte-lo em metro (m): ");
                        scanf("%f", &valor);
                        printf("\n%.2f milimetro(s) (mm) equivalem a %.2f metros(s) (m).\n", valor, (valor / 1000));
                    break;
                }    // mm para cm
                default:
                    printf("Opçao invalida!\n");
                        break;               
                }
            }
            
            default: {
                printf("Opçao invalida. Por favor, digite novamente.\n");
                break;
            }
        }

        carregamento();
    } while (primeiraOpcao != 0);

    printf("Obrigado por usar o nosso sistema! Volte sempre!\n");
    carregamento();

    return 0;
}