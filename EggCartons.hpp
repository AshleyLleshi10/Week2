
class EggCartons {
    public:
        int minCartons(int n);
};

inline int minCartons(int n) {
    int min = 999; 
    int hold;
    int e = 0;
    int s = 0;

    // if (n % 6 == 0){
    //     int min = n/6;
    // }

    // if (n % 8 == 0){
    //     int min = n/8;
    // }

    for (int i = 1; i <= 17; i++)
    {
        e = e + 8;
            if (e == n)
            {
                hold = i;
                if (hold < min)
                {
                    min = hold;
                }
            }
        
        s = e;

        for (int j = 1; j <= 13; j++)
        {
            s = s + 6;
                if (s == n)
                {
                    hold = i + j;
                    if (hold < min)
                    {
                        min = hold;
                    }
                }
        }
    }

    if (min == 999)
    {
        min = -1;
    }

    return min;
}