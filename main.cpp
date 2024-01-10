#include "headers/Medicament.h"
#include "headers/Furnizor.h"
#include "headers/Pacient.h"
#include "headers/Medic.h"
#include <iostream>

void afisareMeniu() {
    std::cout << "\n----- Meniu -----\n";
    std::cout << "1. Afiseaza medicamente\n";
    std::cout << "2. Afiseaza furnizor\n";
    std::cout << "3. Afiseaza pacienti\n";
    std::cout << "4. Afiseaza medici\n";
    std::cout << "0. Iesire\n";
}

int main() {
    try {
        Medicament medicament("Paracetamol", 100);
        Furnizor furnizor("Firma A", "Str. Principala, nr. 123");
        Pacient pacient("Popescu Ion", 45, "Nurofen");
        Medic medic("Dr. Mihai", "Medic de familie");
        medic.adaugaPacient(pacient);

        int optiune;

        do {
            afisareMeniu();
            std::cout << "Alege o optiune: ";
            std::cin >> optiune;

            switch (optiune) {
                case 1:
                    std::cout << "----- Medicamente -----\n";
                    medicament.afisareDetalii();
                    break;
                case 2:
                    std::cout << "----- Furnizor -----\n";
                    furnizor.afisareDetalii();
                    break;
                case 3:
                    std::cout << "----- Pacienti -----\n";
                    pacient.afisareDetalii();
                    break;
                case 4:
                    std::cout << "----- Medici -----\n";
                    medic.afisareDetalii();
                    break;
                case 0:
                    std::cout << "Iesire din program.\n";
                    break;
                default:
                    std::cout << "Optiune invalida. Te rog sa introduci o optiune valida.\n";
            }

        } while (optiune != 0);

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
