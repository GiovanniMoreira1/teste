    int escolha;
    do {
        printf("Menu do Banco:\n");
        printf("1. Consultar saldo\n");
        printf("2. Realizar saque\n");
        printf("3. Realizar depósito\n");
        printf("4. Sair\n");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                // Lógica para consultar saldo
                break;
            case 2:
                // Lógica para realizar saque
                break;
            case 3:
                // Lógica para realizar depósito
                break;
            case 4:
                printf("Obrigado por utilizar nossos serviços. Volte sempre!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 4);