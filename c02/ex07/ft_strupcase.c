char *ft_strupcase(char *str)
{
	    int i = 0;

	        while (str[i])
			    {
				            if (str[i] >= 'a' && str[i] <= 'z')
						                str[i] = str[i] - 32; 
