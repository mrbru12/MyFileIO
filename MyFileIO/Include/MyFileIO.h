#pragma once

/* ----- TODO -----
* File buffer
* Util functions
* Possibility for change only one line of file
* Auto-save file
* Maybe write c/c++ portable code
*/ 

namespace MFIO
{
    enum Mode
    {
        ReadOnly,
        Edit
    };

    typedef const char* Path;

    class File
    {
    public:


    public:
        File(Path path, Mode = Edit)
        {

        }

        ~File()
        {

        }

        void write(unsigned int lineIndex, char* line)
        {

        }

        void write(char* line)
        {

        }

        int read(unsigned int lineIndex, size_t size, char* buffer)
        {
            // return -(lineIndex - (linesCount - 1));
        }

        int read(size_t size, char* buffer)
        {
            // Usar o iterator

            // return -(iterator - (linesCount - 1));
        }

        char* operator[](unsigned int lineIndex)
        {

        }
        
        void operator<<(char* text)
        {

        }

        int operator>>(char* buffer)
        {
            // Esse operator vai funcionar com um iterator pra poder fazer isso:
            // 
            // char buffer[256];
            // while (file>>buffer)
            //     printf("%s\n", buffer);
            //
            // Quando chegar na última linha do arquivo ele vai retornar false ou seja 0!
            // Se retornar algo negativo é porque deu algum ERRO!

            // Talvez fazer assim o return pra ir retornando o índice da linha decrescente:
            //
            // return -(iterator - (linesCount - 1));
        }

    private:
        size_t size;

        int linesCount;
        char** lines;

        int iterator;
    };
    
    char* getPathExtension(Path path)
    {

    }
}
