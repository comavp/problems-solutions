/*
MakeUpperCase
https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7
*/

char *makeUpperCase (char *string);

char* makeUpperCase(char* string) {
	char* res = (char*)malloc(sizeof(string));
	strcpy(res, string);
	char* ptr = res;
	int diff = 'a' - 'A';
	while (*ptr) {
		if (*ptr >= 'a' && *ptr <= 'z') *ptr -= diff;
		ptr++;
	}
	return res;
}