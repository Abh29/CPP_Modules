#include <iostream>
#include <fstream>


void    show_use(void);

int main (int argc, char *argv[]) {

    std::fstream out;
    std::fstream in;
    std::string buff;
    std::string txt;
    size_t      pos;

    if (argc < 4){
        show_use();
        return (1);
    }

    std::string path = std::string(argv[1]);
    std::string str = std::string(argv[2]);
    std::string replace = std::string(argv[3]);

    in.open (argv[1], std::ios::in);
    out.open (path.append(".replace").c_str(), std::ios::out);
    while (getline(in, buff))
    {
        txt += buff;
        txt.append("\n");

        pos =  txt.find(str, 0);
        if (pos != std::string::npos) {
            out << txt.substr(0, pos);
            out << replace;
            txt = txt.substr(pos + str.length(), txt.size());
        }
        if (txt.size() > 2 * str.size())
        {
            out << txt.substr(0, str.size());
                txt = txt.substr(str.size(), txt.size());
        }
    }

    out << txt;
    
    out.close();
    in.close();
  return 0;
}

void    show_use(void){
    std::cerr << "Error : unexpected number of arguments !" << std::endl;
    std::cerr << "./replace <file_name>  <string_to_be_replaced> <replacement>" << std::endl;
}
