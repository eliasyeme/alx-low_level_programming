/**
	* print_name - prints string using callback function
	* @name: name string
	* @f: callback function
	*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
