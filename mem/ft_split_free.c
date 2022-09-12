void    ft_split_free(char **array)
{
    size_t    i;

    if (!array)
        return ;
    i = 0;
    while (array[i] != NULL)
    {
        free(array[i]);
        i++;
    }
    free(array);
}
