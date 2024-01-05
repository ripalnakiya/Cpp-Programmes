#include <stdio.h>

/*
If N = 7
Output: 28
        27 16
        26 17 15
        25 18 14 07
        24 19 13 08 06
        23 20 12 09 05 02
        22 21 11 10 04 03 01

My Explaination:

28
27 (11) 16
26 (09) 17 (02) 15
25 (07) 18 (04) 14 (07) 07
24 (05) 19 (06) 13 (05) 08 (02) 06
23 (03) 20 (08) 12 (03) 09 (04) 05 (03) 02
22 (01) 21 (10) 11 (10) 10 (06) 04 (01) 03 (02) 01


odd_diff = 2 * 7 - 1 = 13
even_diff = 0

i=0:    28
odd_diff = 11 (odd_diff -= 2)
even_diff = 2 (even_diff += 2)

i=1:    27 (11) 16
odd_diff = 9
even_diff = 4

i=2:    26 (9) 17 (4-j = 4-2) 15
odd_diff = 7
even_diff = 6

i=3:    25 (7) 18 (6-j = 6-2) 14 (7) 07
odd_diff = 5
even_diff = 8

i=4:    24 (5) 19 (8-j = 8-2) 13 (5) 08 (6-j = 6-4) 06
odd_diff = 3
even_diff = 10

i=5:    23 (3) 20 (10-j = 10-2) 12 (3) 09 (8-j = 8-4) 05 (3) 02
odd_diff = 1
even_diff = 12

i=6:    22 (1) 21 (12-j = 12-2) 11 (1) 10 (10-j = 10-4) 04 (1) 03 (8-j = 8-6) 01
odd_diff = -1 (we don't need further iterations)
even_diff = 14 (we don't need further iterations)
*/

int main()
{
    int N = 7;
    // Sum of N numbers formula
    int first = (N * (N + 1)) / 2;
    int odd_diff = 2 * N - 1;
    int even_diff = 0;

    for (int i = 0; i < N; i++)
    {
        int val = first - i;
        int sub_even_diff = even_diff;

        for (int j = 0; j <= i; j++)
        {
            // If the value of j is even, then subtract the val by even_diff
            if (j % 2 == 0)
            {
                // even_diff value is reduced by 2 at each consequent even iteration of j
                // so, we're using sub_even_diff for inner loop
                if (j != 0)
                {
                    val = val - (sub_even_diff - j);
                    sub_even_diff -= 2;
                }

                // If the value of j is 0, then simply print that value.
                printf("%02d ", val);
            }
            // If the value of j is odd, then subtract the val by odd_diff
            else if (j % 2 != 0)
            {
                val = val - odd_diff;
                printf("%02d ", val);
            }
        }
        printf("\n");
        odd_diff -= 2;
        even_diff += 2;
    }
    return 0;
}