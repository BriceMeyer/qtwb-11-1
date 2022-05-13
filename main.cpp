//#include "dialog.h"

//#include <QApplication>

float newFuntion(float start, int incrementM, int incrementS, ){
    
    float value = start;

    for (int i = 0; i < 127; i = incrementM*i + incrementS){
        std::cout << i << std::endl;
        value *= i;
    }

    return value;
}

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();*/

    std::cout << "OMMGGG marche-ce ?" << std::endl;

    float start, incrementM, incrementS;

    std::cout << "Entrez la valeur de départ : ";
    std::cin >> start;
    std::cout << std::endl;

    std::cout << "Entrez le coefficient de multiplication : ";
    std::cin >> incrementM;
    std::cout << std::endl;

    std::cout << "Entrez le coefficient d'addition : ";
    std::cin >> incrementS;
    std::cout << std::endl;
    
    float value = newFunction(start, incrementM, incrementS);


    return 0;
}
