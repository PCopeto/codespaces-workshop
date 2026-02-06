#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cout << "Unit Converter CLI App\n";
        std::cout << "\nUsage: ./unit_converter [command] [value]\n";
        std::cout << "\nAvailable commands:\n";
        std::cout << "  help         - Show this help message\n";
        std::cout << "  cm-to-inch   - Convert centimeters to inches\n";
        std::cout << "  inch-to-cm   - Convert inches to centimeters\n";
        return 0;
    }

    std::string cmd = argv[1];
    if (cmd == "help") {
        std::cout << "Usage: ./app [command] [value]\n";
        std::cout << "Commands:\n";
        std::cout << "  cm-to-inch [cm]   - Convert centimeters to inches\n";
        std::cout << "  inch-to-cm [inch] - Convert inches to centimeters\n";
    } else if (cmd == "cm-to-inch" && argc > 2) {
        double cm = std::stod(argv[2]);
        double inch = cm / 2.54;
        std::cout << cm << " cm = " << inch << " inches\n";
    } else if (cmd == "inch-to-cm" && argc > 2) {
        double inch = std::stod(argv[2]);
        double cm = inch * 2.54;
        std::cout << inch << " inches = " << cm << " cm\n";
    } else {
        std::cout << "Unknown or incomplete command. Use 'help' for instructions.\n";
    }
    return 0;
}
