#include <iostream>
#include <string>
#include "src/usuario.h"
#include <memory>

/*void* operator new(size_t bytes) {
    std::cout << "alocando " << bytes << "bytes" << std::endl;
    return malloc(bytes);
}*/

void exibeNomeUsuario(std::unique_ptr<Usuario> usuario) {
    std::cout << usuario->recuperaNome() << std::endl;
}


int main() {
    
    //quando não for feita nenhuma manipulação, o ponteiro de char aloca menos memória
    //const char* nomeCompleto = "Ângelo Hank";
    //std::string nomeCompleto = "Ângelo Hank";
    
    std::string casal = "Ângelo Hank & Haylay Williamns";
    
    /*C++17
    std::string_view meuNome(casal.c_str(), casal.find('&')-1);
    std::string_view nomeEsposa(casal.c_str() + casal.find('&') + 2);
    */

    std::string meuNome = casal.substr(0, casal.find('&')-1);
    std::string nomeEsposa = casal.substr(casal.find('&') + 2); 

    std::cout << meuNome << std::endl;
    std::cout << nomeEsposa << std::endl;

    //unique_ptr
    //std::unique_ptr<Usuario> usuario = std::make_unique<Usuario>(new Usuario("Angelo Hank"));

    //shared_ptr
    std::shared_ptr<Usuario> Usuario usuario = std::make_shared<Usuario>("Angelo Hank");

    //Usuario* usuario = new Usuario("Angelo Hank");
    //exibeNomeUsuario(usuario);
    //std::cout << usuario->recuperaNome << std::endl;

    return 0;
}
