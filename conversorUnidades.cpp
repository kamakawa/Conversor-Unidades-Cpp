#include<iostream>
#include<string>
#include<limits>
#include<iomanip>

void conversorDistancia(){
    int opc;
    double distanciaFinal;
    double distanciaInicial;

    std::cout << "\nCONVERSOR DE DISTÂNCIA\n" << "Escolha a conversão desejada:\n" << 
    "1- Metros (m) para Quilômetros (km)\n" << "2- Quilômetros (km) para Metros (m)\n" << 
    "3- Metros (m) para Centímetros (cm)\n" << "4- Centímetros (cm) para Metros (m)\n" << 
    "5- Quilômetros (km) para Milhas (mi)\n" << "6- Milhas (mi) para Quilômetros (km)\n" << 
    "7- Polegadas (in) para Centímetros (cm)\n" << "8- Centímetros (cm) para Polegadas (in)\n" <<
    "\nEscolha uma opção: "; 
    std::cin >> opc;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (opc)
    {
    case 1:
        std::cout << "Digite a distância: " << std::endl;
        std::cin >> distanciaInicial;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        distanciaFinal = distanciaInicial / 1000.0;

        break;
    case 2:
        std::cout << "Digite a distância: " << std::endl;
        std::cin >> distanciaInicial;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        distanciaFinal = distanciaInicial * 1000.0;
        
        break;
    case 3:
        std::cout << "Digite a distância: " << std::endl;
        std::cin >> distanciaInicial;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        distanciaFinal = distanciaInicial * 100.0;

        break;
    case 4:
        std::cout << "Digite a distância: " << std::endl;
        std::cin >> distanciaInicial;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        distanciaFinal = distanciaInicial / 100.0;

        break;
    case 5:
        std::cout << "Digite a distância: " << std::endl;
        std::cin >> distanciaInicial;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        distanciaFinal = distanciaInicial * 0.621371;

        break;
    case 6:
        std::cout << "Digite a distância: " << std::endl;
        std::cin >> distanciaInicial;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        distanciaFinal = distanciaInicial / 0.621371;

        break;
    case 7:
        std::cout << "Digite a distância: " << std::endl;
        std::cin >> distanciaInicial;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        distanciaFinal = distanciaInicial * 2.54;

        break;
    case 8:
        std::cout << "Digite a distância: " << std::endl;
        std::cin >> distanciaInicial;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        distanciaFinal = distanciaInicial / 2.54;

        break;
    
    default:
        std::cout << "\nERRO: Opção inválida\n";

        conversorDistancia();
        break;
    }

    std::cout << "\nResultado da conversão: " << std::fixed << std::setprecision(2) << distanciaFinal << std::endl;
}

void conversorTemperatura(){
    int opc;
    double tempInicial;
    double tempFinal;

    std::cout << "\nCONVERSOR DE TEMPERATURA\n" << "1- Celsius (°C) para Fahrenheit (°F)\n" << "2- Fahrenheit (°F) para Celsius (°C)\n" <<
    "3- Celsius (°C) para Kelvin (K)\n" << "4- Kelvin (K) para Celsius (°C)\n" << "\nEscolha uma opção:" << std::endl;
    std::cin >> opc;
    std::cin.ignore(std::numeric_limits < std::streamsize >::max(), '\n');

    std::cout << "Digite a temperatura: " <<std::endl;
    std::cin >> tempInicial;
    std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');

    switch (opc)
    {
    case 1:
        tempFinal = (tempInicial * (9/5)) + 32;
        break;
    
    case 2:
        tempFinal = (tempInicial - 32) * 5/9;
        break;

    case 3:
        tempFinal = tempInicial + 273.15;
        break;

    case 4:
        tempFinal = tempInicial - 273.15;
        break;

    default:
        std::cerr << "ERRO: Opção inválida";

        conversorTemperatura();
        break;
    }

    std::cout << "Resultado: " << std::fixed << std::setprecision(2) << tempFinal << std::endl;

}

void conversorPeso(){
    int opc;
    double pesoInicial;
    double pesoFinal;

    std::cout << "1- Quilogramas (kg) para Libras (lb)\n" << "2- Libras (lb) para Quilogramas (kg)\n"
    << "3- Quilogramas (kg) para Gramas (g)\n" << "4- Gramas (g) para Quilogramas (kg)\n" << 
    "5- Gramas (g) para Onças (oz)\n" << "6- Onças (oz) para Gramas (g)\n" << "\nEscolha uma opção:";
    std::cin >> opc;
    std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');

    std::cout << "Digite o valor do peso:";
    std::cin >> pesoInicial;
    switch (opc)
    {
    case 1:
        pesoFinal = pesoInicial * 2.20462;
        break;
    
    case 2:
        pesoFinal = pesoInicial / 2.20462;
        break;

    case 3:
        pesoFinal = pesoInicial * 1000.0;
        break;

    case 4:
        pesoFinal = pesoInicial / 1000.0;
        break;

    case 5:
        pesoFinal = pesoInicial * 0.035274;
        break;

    case 6:
        pesoFinal = pesoInicial / 0.035274;
        break;

    default:
        std::cerr << "ERRO: Opção inválida";

        conversorPeso();
        break;
    }

    std::cout << "Resultado: " << std::fixed << std::setprecision(2) << pesoFinal << std::endl;
    
}

int main(){
    int opcao;

    do{
        std::cout << "\nBEM VINDO AO CONVERSOR DE UNIDADES\n" << std::endl << 
        "---MENU---\n" << std::endl << "1- Conversão de distância\n" << 
        "2- Conversão de temperatura\n" << "3- Conversão de peso\n" << "4- Sair\n"
        << "\nEscolha uma opção: ";
        std::cin >> opcao;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if(opcao != 1 && opcao != 2 && opcao != 3 && opcao !=4){
            std::cerr << "ERRO: Opção inválida";
            std::cout << "\nEscolha uma opção\n" << std::endl << "\n---MENU---\n" << 
            std::endl << "1- Conversão de distância\n" << "2- Conversão de temperatura\n" 
            << "3- Conversão de peso\n" << "4- Sair\n";
            std::cin >> opcao;
        }

        switch (opcao)
        {
        case 1:
            conversorDistancia();

            break;
        
        case 2:
            conversorTemperatura();

            break;

        case 3:
            conversorPeso();
            break;
        case 4:
            std::cout << "\nSaindo...\n";
        default:
            break;
        }
    }while(opcao != 4);

    return 0;
}