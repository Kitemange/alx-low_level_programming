#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
    int fl, wr, t_len = 0;

    if (filename == NULL)
        return (-1);
    fl = open(filename, O_RDWR | O_CREAT | O_TRUNC/*truncates if file exists*/
                , 0600/*permission*/);
    if (fl == -1)
        return (-1);

    /* condition to loop into text_content */
    if (text_content)
    {
        while (text_content[t_len])
            t_len++;
        wr = write(fl, text_content, t_len);
        if (wr == -1)
        {
            return (-1);
        }        
    }
    close(fl);
    return (1);/*create new file on success*/  
}
