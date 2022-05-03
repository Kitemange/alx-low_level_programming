#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: he NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, wr, t_len = 0;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY/*write only*/, O_APPEND/*add terminated string
											at file end*/);
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
