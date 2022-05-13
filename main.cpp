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

    float sqrtPI = 1.772453850905516027298167483341145128;

    std::cout << sqrtPI << std::endl;

    float[8] listInts = [0, 1, 2, 3, 4, 5, 6, 7];

    float sumBefore = .0, sumAfter = .0;

    foreach(float member, listInts){
        sumBefore += member;
        member *= sqrtPI;
        sumAfter += member;
    }

    return 0;
}
