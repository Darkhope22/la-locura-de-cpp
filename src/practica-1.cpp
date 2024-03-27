#include <iostream>
#include <sstream>

/**
 * La clase Console Permite imprimir cualquier tipo de dato en la terminal
 */
class Console
{
private:
    // console colors (ANSI)
    const std::string ANSI_COLOR_RED = "\x1b[31m";
    const std::string ANSI_COLOR_GREEN = "\x1b[32m";
    const std::string ANSI_COLOR_YELLOW = "\x1b[33m";
    const std::string ANSI_COLOR_RESET = "\x1b[0m";

public:
    /**
     * Esta funcion template permite imprimir cualquier entrada como cadena
     * @tparam T Cualquier tipo de valor (std::string, float, double, boolean)
     * @param value El valor que será impreso en la terminal
     */
    template <typename T>
    void log(const T &value)
    {
        std::ostringstream oss;
        oss << value;
        std::cout << oss.str() << std::endl;
    }

    template <typename T>
    void warn(const T &value){
      std::ostringstream oss;
      oss << this->ANSI_COLOR_YELLOW;
      oss << value;
      std::cout << oss.str() << std::endl;
      std::cout << this->ANSI_COLOR_RESET;
    }
};

int main()
{
    try
    {
        Console console;
        console.log("Hola, Mundo!");
        console.log(true);
        console.log(123);
        console.log(12.65f);

        console.warn("{\n\tWARNING: 000\n\tDETAILS: lorem ipsum\n}");
        return 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
