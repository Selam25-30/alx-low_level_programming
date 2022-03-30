 * Return: the address of the character after the *
 */
char *move(char *s2)
{
        /**
         * if the current char is a *
         * increment s2 by 1
         * else return the address of
         * the first char past all *
         */
        if (*s2 == '*')
                return (move
