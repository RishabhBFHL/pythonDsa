void TowersOHanoi(int n, char frompeg, char topeg, char auxpeg)
    {
        if(n == 1) 
        {
            printf("Move disk 1 from peg %c to peg %c",frompeg, topeg);
            return;
        }
        TowersOfHanoi(n-1, frompeg, auxpeg, topeg);
        printf("\n Move disk %d from peg %c to peg %c", n, frompeg, topeg);
        TowersOfHanoi(n-1, auxpeg, topeg, frompeg);
    }   