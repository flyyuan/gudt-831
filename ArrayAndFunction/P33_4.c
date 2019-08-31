int main()
{
    int a[4][4] = {1, 2, 3, 4, 2, 2, 5, 6, 3, 5, 3, 7, 8, 6, 7};
    int i, j, found = 0;
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 4; i++)
        {
            if (found)
                break;
            if (a[i][j] != a[j][i])
            {
                found = 1;
                break;
            }
        }
    }
    if (found)
        printf("不对称\n");
    else
        printf("对称");
}