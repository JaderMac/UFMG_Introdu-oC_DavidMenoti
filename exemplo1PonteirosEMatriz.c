int main ()
{
    float matrx [50][50];
    int i,j;
    // zerando uma matriz
    for (i=0;i<50;i++)
        for (j=0;j<50;j++)
            matrx[i][j]=0.0;

    // zerando uma matriz utilizando ponteiro
    int count;
    float *p;
    p=matrx[0];
    for (count=0;count<2500;count++){
        *p=0.0;
        p++;
    }
    return(0);
}