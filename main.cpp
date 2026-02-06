#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
    std::cout << "Unit Converter CLI App\n";
    std::cout << "Type commands (help, cm-to-inch <cm>, inch-to-cm <inch>, exit):\n";

    std::string line;
    while (true)
    {
        std::cout << "> ";
        if (!std::getline(std::cin, line))
            break;
        if (line.empty())
            continue;

        std::istringstream iss(line);
        std::string cmd;
        iss >> cmd;

        if (cmd == "exit")
        {
            break;
        }
        else if (cmd == "help")
        {
            std::cout << "Commands:\n";
            std::cout << "  cm-to-inch [cm]   - Convert centimeters to inches\n";
            std::cout << "  inch-to-cm [inch] - Convert inches to centimeters\n";
            std::cout << "  exit              - Quit the app\n";
        }
        else if (cmd == "cm-to-inch")
        {
            double cm;
            if (iss >> cm)
            {
                double inch = cm / 2.54;
                std::cout << cm << " cm = " << inch << " inches\n";
            }
            else
            {
                std::cout << "Usage: cm-to-inch [cm]\n";
            }
        }
        else if (cmd == "inch-to-cm")
        {
            double inch;
            if (iss >> inch)
            {
                double cm = inch * 2.54;
                std::cout << inch << " inches = " << cm << " cm\n";
            }
            else
            {
                std::cout << "Usage: inch-to-cm [inch]\n";
            }
        }
        else
        {
            std::cout << "Unknown or incomplete command. Use 'help' for instructions.\n";
        }
    }
    return 0;
}
