#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int op, rd, wr;
    char *buffer = malloc(sizeof(letters));

    if (filename == 0)
        return (0);
    if (!(buffer))
    {
        free(buffer);
        return (0);
    }
    op = open(filename, O_RDONLY);
    rd = read(op, buffer, letters);
    wr = write(STDOUT_FILENO, buffer, rd);
        
    if (op == -1 || rd == -1 || wr == -1 || !(wr == rd))
        return (0);
    free(buffer);
    close(op);
    
    return (wr);
}