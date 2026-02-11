#include <iostream>
#include <string>
#include <sstream>

// Helper to print help text
static void printHelp()
{
    std::cout << "Commands:\n";
    std::cout << "  cm-to-inch [cm]            - Convert centimeters to inches\n";
    std::cout << "  inch-to-cm [inch]          - Convert inches to centimeters\n";
    std::cout << "  celsius-to-fahrenheit [C]   - Convert Celsius to Fahrenheit\n";
    std::cout << "  exit                        - Quit the app\n";
}

// Handler for cm-to-inch command
static void handleCmToInch(std::istringstream &iss)
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

// Handler for inch-to-cm command
static void handleInchToCm(std::istringstream &iss)
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

// Handler for celsius-to-fahrenheit command
static void handleCelsiusToFahrenheit(std::istringstream &iss)
{
    double celsius;
    if (iss >> celsius)
    {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        std::cout << celsius << " °C = " << fahrenheit << " °F\n";
    }
    else
    {
        std::cout << "Usage: celsius-to-fahrenheit [Celsius]\n";
    }
}

// Dispatcher: returns false when the REPL should exit
static bool handleCommand(const std::string &cmd, std::istringstream &iss)
{
    if (cmd == "exit")
    {
        return false;
    }
    else if (cmd == "help")
    {
        printHelp();
    }
    else if (cmd == "cm-to-inch")
    {
        handleCmToInch(iss);
    }
    else if (cmd == "inch-to-cm")
    {
        handleInchToCm(iss);
    }
    else if (cmd == "celsius-to-fahrenheit")
    {
        handleCelsiusToFahrenheit(iss);
    }
    else
    {
        std::cout << "Unknown or incomplete command. Use 'help' for instructions.\n";
    }
    return true;
}

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

        if (!handleCommand(cmd, iss))
            break;
    }
    return 0;
}
