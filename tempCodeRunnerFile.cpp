if (c == 0)
        {
            cnt = 1;
        }
        else if (a + c == b)
        {
            cnt = 0;
        }
        else
        {
            for (int i = c; i >= 0; i--)
            {
                if (a + c > b)
                {
                    cnt++;
                    c--;
                    b++;
                }
            }
        }