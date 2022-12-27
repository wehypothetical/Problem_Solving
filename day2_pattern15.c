#include <stdio.h>

int main();
int pattern15()
{

    int n, c[10], a[10] = {1}, k = 1, i, j, b = 1, index = 0, r;

    printf("Enter any natural number\t");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        j = 0;
        while (j < k)
        {
            printf("%d ", a[j]);
            j++;
        }
        j = 0;
        b = 1;
        index = 0;
        while (j < k)
        {
            if (a[j] == a[j + 1])
            {
                b++;
                j++;
                continue;
            }
            else
            {
                c[index++] = b;
                c[index++] = a[j];
                j++;
                b = 1;
            }
        }

        for (r = 0; r < index; r++)
        {
            a[r] = c[r];
        }
        k = index;
        printf("\n");
    }

    return 0;
}


/*
Look and Say Pattern
EasyAccuracy: 66.53%Submissions: 9931Points: 2
Given an integer n. Return the nth row of the following look-and-say pattern.
1
11
21
1211
111221
Look-and-Say Pattern:

To generate a member of the sequence from the previous member, read off the digits of the previous member, counting the number of digits in groups of the same digit. For example:

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
1211 is read off as "one 1, one 2, then two 1s" or 111221.
111221 is read off as "three 1s, two 2s, then one 1" or 312211.
Example 1:

Input:
n = 5
Output: 111221
Explanation: The 5th row of the given pattern
will be 111221.


*/
/*
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        string s ="1";
        for(int i=1;i<n;i++)
        {
            string temp="";
            int count=1;
            for(int j=0;j<s.size()-1;j++)   
            {
                if (s[j]==s[j+1])
                {
                    count++;
                }
                else
                {
                    temp=temp+to_string(count);
                    temp=temp+s[j];

                    count=1;
                }
            }

        temp+=to_string(count);
        temp+=s.back();

        s=temp;
        }
        return s;
    }

};
*/
