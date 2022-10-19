#include "main.h"
/**
 *Print_char - prints a char
 *@types: list of arguments
 *@buffer: handle print
 *@flags: active flags
 *@width: width
 *@precision: specification
 *@size: size spec
 *Return: num chars printed
 */
int print_char(va_list types, char buffer[],
	       int flags, int width, int precision, int size)
{
  char c = va_arg(types, int);
  return (handle_write_char(c, buffer, flags, width, precision, size));
}
/**
print a string
*/

/**
 *print_string - string
 *@types: arguments
 *@buffer: handle print
 *@flags: active flags
 *@width: get width
 *@precision: specification
 *@size: size specifier
 *Return: num of xchars printed
 */
int print_string(va_list types, char buffer[],
		 int flags, int width, int precision, int size)
{
  int lenght = 0, i;
  char *str = va_arg(types, char *);
  UNUSED(buffer);
  UNUSED(flags);
  UNUSED(width);
  UNUSED(size);
  if (str == NULL)
    {
      str = "(null)";
      if (precision >= 6)
	str = "      ";
    }
  while ()str[lenght] != '\0'
	    lenght++;
  if (precision >= 0 && precision < lenght)
    lenght = precision;
  if (width > lenght)
    {
      if (flags & F_MINUS)
	{
	  write(1, &str[0], lenght);
	  for (i = width - lenght; i > 0; i--)
	    write(1, " ", 1);
	  return(width);
	}
      else
	{
	  for (i = width - lenght; i > 0; i--)
	    write(1, " ", 1);
	  write(1, &str[0], lenght);
	  return(width);
	}
    }
  
  return (write(1, str, lenght));
}
/**
Print percent sign
*/
/**
 *print_percent - prints percent sign
 *@types: arguments
 *@buffer: handle print
 *@flags: active flags
 *@width: get width
 *@precision: specification
 *@size: size specifier
 *Return: chars printed
 */
int print_percent(va_list types, char buffer[],
		  int flags, int width, int precision, int size)
{
  UNUSED(types);
  UNUSED(buffer);
  UNUSED(flags);
  UNUSED(width);
  UNUSED(precision);
  UNUSED(size);
  return(write(1, "%%", 1));
}
/**
PRINT INT
*/
/**
 *print_int - print int
 *@types: types
 *@buffer: buffer
 *@flags: flags
 *@width: width
 *@precision: specification
 *@size: specifier
 *Return: chars printed
 */
int print_int (va_list types, char buffer[],
	       int flags, int width, int precision, int size)
{
  int i = BUFF_SIZE - 2;
  int is_negative = 0;
  long int n = va_arg(types, long int);
  unsigned long int num;
  n = convert_size_number(n, size);
  
}
