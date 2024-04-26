#include <iostream>
#include <Windows.h>

#pragma comment(lib,"LZ32.lib")

bool compress(LPSTR infile, LPSTR outfile)
{
    INT hin, hout = 0;
    OFSTRUCT ofin = { 0 };
    OFSTRUCT ofout = { 0 };
    LONG error = 0;

    if ((hin = LZOpenFileA(infile, &ofin, OF_READ)) < 0)
    {
        std::cerr << "Can't open input file: " << infile << "\n";
        return false;
    }
    if ((hout = LZOpenFileA(outfile, &ofout, OF_CREATE | OF_WRITE)) < 0)
    {
        LZClose(hin);
        std::cerr << "Can't open output file: " << outfile << "\n";
        return false;
    }
    error = LZCopy(hin, hout);

    LZClose(hin);
    LZClose(hout);

    if (error < 0)
    {
        std::cerr << "LZCopy failed, error is: " << error << "\n";
        return false;
    }
    return true;
}

bool compress(LPSTR infile, LPSTR outfile)
{
    INT hin, hout = 0;
    OFSTRUCT ofin = { 0 };
    OFSTRUCT ofout = { 0 };
    LONG error = 0;

    if ((hin = LZOpenFileA(infile, &ofin, OF_READ)) < 0)
    {
        std::cerr << "Can't open input file: " << infile << "\n";
        return false;
    }
    if ((hout = LZOpenFileA(outfile, &ofout, OF_CREATE | OF_WRITE)) < 0)
    {
        LZClose(hin);
        std::cerr << "Can't open output file: " << outfile << "\n";
        return false;
    }
    error = LZCopy(hin, hout);

    LZClose(hin);
    LZClose(hout);

    if (error < 0)
    {
        std::cerr << "LZCopy failed, error is: " << error << "\n";
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cerr << "Usage: " << argv[0] << " <input_file> <output_file>\n";
        return 1;
    }

    const char *inputFile = argv[1];
    const char *outputFile = argv[2];

    if (compress(inputFile, outputFile))
    {
        std::cout << "Compression successful.\n";
    }
    else
    {
        std::cerr << "Compression failed.\n";
        return 1;
    }

    return 0;
}

