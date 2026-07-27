/*pyramid empty from inside*/
#include<iostream>
int main()
{
    int num;
    std::cout << "Enter the height of the pyramid: ";
    std::cin >> num;
    std::cout << "Enter no of pyramids side by side: ";
    int pyramids;
    std::cin >> pyramids;
    // loop controls the current row being printed
    for(int i = 1; i <= num; i++)
    {
        // loop ensures that the pattern for a single row is repeated back-to-back for the requested number of pyramids before moving to a new line.
        for (int j = 1; j <= pyramids; j++)
        {
            // Prints leading spaces to center-align the pyramid
            for (int k = 1; k <= num - i; k++)
            {
                std::cout << " ";
            }
            // Prints the stars and the hollow inside.
            for (int l = 1; l <= (2 * i - 1); l++)
            {
                if (l == 1 || l == (2 * i - 1) || i == num)
                {
                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
            }
            // for keeping multiple pyramids aligned horizontally when they sit side-by-side.
            for (int m = 1; m <= num - i; m++)
            {
                std::cout << " ";
            }
            // Space between pyramids
            std::cout << "  ";
        }
        std::cout << std::endl;
    }
}
