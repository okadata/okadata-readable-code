//
//  main.cpp
//  dictionary
//

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, const char * argv[]) {
    
    if ( argc != 2 )
    {
        // 実行方法は、dictionary 読み込むファイルパス
        std::cerr << "Usage: dictionary input_file_path" << std::endl;
        return -1;
    }
    
    std::string xInputPath(argv[1]);
    std::ifstream xInputStream(xInputPath);
    if ( xInputStream.fail() )
    {
        std::cerr << "Error: read input file failed" << std::endl;
        return -2;
    }
    else
    {
        std::string xLineBuf;
        while ( std::getline(xInputStream, xLineBuf) )
        {
            if ( xLineBuf.empty() )
            {
                continue;
            }
            std::cout << xLineBuf << std::endl;
        }
    }
    
    return 0;
}
